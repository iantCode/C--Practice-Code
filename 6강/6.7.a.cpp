#include <iostream>
#include <cstddef>

void doSomething(double *ptr)
{
    std::cout << "address of pointer value in doSomething() : " << &ptr << std::endl;
    if (ptr != nullptr)
    {
        std::cout << *ptr << std::endl;
    }
    else
    {
        std::cout << "Null ptr, do nothing" << std::endl;
    }
}

int main()
{
    double *ptr = 0;
    double *ptr2 = NULL; //C Style

    double *ptr3 = nullptr; //C++ Style

    doSomething(ptr3);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);

    std::nullptr_t nptr; //null 포인터만 넣을 수 있음. 그런데 쓸 일이 있을까 싶음.. ㅎㅎ;;

    std::cout << "address of pointer value in main() : " << &ptr << std::endl;

    return 0;
}