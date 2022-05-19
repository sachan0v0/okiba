#include <vector>

std::vector<int> array; //サイズ０の配列
std::vector<int> array(10); //初期サイズ１０の配列
std::vector<int> array(10, 0); //初期座椅子10配列をall 0で初期化
std::vector<int> array = {0, 1, 3}; //初期サイズ３の配列を{0, 1, 2}で初期化
std::vector<int> array1(array); //array要素をすべてコピー

//要素の追加
std::vector<int> array;
array.push_back(1);//array[0]が1になる
array.push_back(2);//array[1]が２になる

//forループ
//各要素に値を入れる
/*int array[3];*/

/* array = {0, 1, 2}にする
for (int i = 0; i < sizeof(array); i++) {
	array[i] = i;
}*/
//c++でやると..

std::vector<int> array(3);

int index = 0;
for (auto iterator = array.begin(); iterator != array.end(); iterator++) {
	*iterator = index;
	index++;
}
//or

for (auto& iterator : array) {
	*iterator = index;
}

//コピー
std::copy(first, last, result);

//簡単な使い方
std::vector<int> src_array = {0, 1, 2};
std::vector<int> dest_array;

// src_arrayの中身をdest_arrayへすべてコピー
std::copy(src_array.begin(), src_array.end(),
	std::back_inserter(dest_array));

//範囲指定
std::vector<int> src_array = {0, 1, 2, 3, 4};
std::vector<int> dest_array;

// src_array[0] ~ src_array[2] をdest_arrayへコピーする
// dest_array = {0, 1, 2} になる
std::copy(src_array.begin(), src_array.begin() + 3,
	std::back_inserter(dest_array));

//キャスト
std::vector<int> src_array = {0, 1, 2};
std::vector<int> dest_array;

// src_arrayの中身をdest_arrayへすべて移動
// src_arrayは空になる(破壊的操作)
dest_array = std::move(src_array);

//要素指定
std::vector<int> src_array = {0, 1, 2, 3, 4};
std::vector<int> dest_array;

// src_array[0] ~ src_array[2] をdest_arrayへ移動する
// dest_array = {0, 1, 2} になる
// src_array = {0, 0, 0, 3, 4} になる(要素はあるが、値が入っていない)
std::copy(src_array.begin(), src_array.begin() + 3,
	std::back_inserter(dest_array));

//サイズの図り方
/*size() : 要素数を得る。普通はこちらを使う
capacity(): メモリ上に確保されているサイズを得る。*/

//要素の削除
//※メモリは開放しない

std::vector<int> array = {0, 1, 2, 3, 4};

// 最後の1つだけ削除
array.pop_back();	// array = {0, 1, 2, 3}

// 範囲指定で削除(残った要素は前に詰められる)
array.erase(array.begin(), array.begin() + 2);	// array = {3}

// 全部削除
array.clear();	// array = {}
std::cout << array.size() << std::endl; // => 0
std::cout << array.capacity() << std::endl; // => 5

//vector同士の比較
std::vector<int> array = {0, 1, 2, 3, 4};
std::vector<int> array1 = {0, 1, 2, 3, 4};

if (array == array1) {	// -> true

//ただし方も==をサポートしていないと行けない(構造体とか)
typedef struct Temp {
	std::string name;
	int age;
} Temp;

std::vector<Temp> temp1;
std::vector<Temp> temp2;

// (初期化は省略)

if (temp1 == temp2) { // ビルドエラ