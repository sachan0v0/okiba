#include <iostream>

//clockクラスの定義　時計を表す
class Clock
{
    private:
        int hour;           //クラス外からアクセス不能
        int minute;         //非公開
    public:
        void set(int hour, int minute); //クラス外からアクセス可能
        void print();                   //公開
};

void Clock::set(int hour, int minute)     //における記号 :: は，スコープ解決演算子
{
    this->hour = hour % 24;
    this->minute = minute % 60;//this ポインタ 引数の重複を防ぐ 

}

void Clock::print()
{
    printf("%02d:%02d\n",hour, minute);
    fflush(stdout);
}

int main()
{
    Clock c; //インスタンス化
    c.set(6, 30);
    c.print();//出力 06:30
}