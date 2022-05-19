#include<iostream>

int main()
{
    int array[] = {10, 8, 1, 3, 0, 2, 15, 9, 23, 1};
    //配列の要素10
    int num_of_array = 10;
    std::cout << "ソート前" << std::endl;
    //配列表示
    for (int i=0; i<num_of_array; i++)
    {
        std::cout << array[i] << std::endl;
    }

    //バブルソート
    int temp;
    for (int k=0; k<=num_of_array-1; k++)
    {
        for (int j=0; j<=num_of_array-1; j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    std::cout << "ソート後" << std::endl;

    //配列の表示
    for (int i=0; i<num_of_array; i++)
    {
        std::cout << array[i] << std::endl;
    }

}