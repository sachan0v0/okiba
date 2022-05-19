#include <iostream>

int main()
{
    //int型の変数
    int num = 80;
    //int型のポインタ変数
    int* ptr;
    //numのアドレスを代入
    ptr = &num;

    std::cout << "ptr" << ptr;
}