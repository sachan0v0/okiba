/*インスタンス化の時に自動的に呼び出される特殊なメンバ関数を，コンストラクタ (constructor) といいます。*/
/*コンストラクタは，返り値のない (void すら書かない)，クラスと同名のメンバ関数として定義します。*/
#include <iostream>

class Clock
{
    public:
        int hour;
        int minute;
        Clock(int hour, int minute); //コンストラクタ
};

Clock::Clock(int hour, int minute)
{
    this->hour = hour;
    this->minute = minute;
}

int main()
{
    Clock c(6, 30);
}