#include <iostream>

//void printArray(int array[])
void printArray(int *array)
{
    std::cout << sizeof(array) << std::endl;
    std::cout << *array << std::endl;

    *array = 100;
}

struct MyStruct {
    int array[5] = {1, 3, 5, 7, 9};
};

void doStructCal(MyStruct ms)
{
    std::cout << sizeof(ms.array) << std::endl; //구조체 안에서는 배열이 그대로 간다.
}

int main()
{
    using namespace std;

    int array[5] = {1, 3, 5, 7, 9};

    cout << array << endl;       //array를 출력하면 주소가 출력됨..
    cout << &(array[0]) << endl; //두 개가 같다.

    cout << *array << endl;

    char name[] = "Jack Jack";

    cout << *name << endl;

    int *ptr = array;
    cout << ptr << endl;
    cout << *ptr << '\n' << endl;

    cout << sizeof(array) << endl;
    cout << sizeof(ptr) << endl;

    printArray(array);

    cout << *array << '\n' << endl;

    MyStruct ms;
    cout << sizeof(ms.array) << endl;
    doStructCal(ms);

    return 0;
}