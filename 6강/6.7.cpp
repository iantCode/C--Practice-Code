#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;

    cout << x << endl;
    cout << &x << endl;
    cout << (long long int)&x << endl;

    // de-reference operator (*)

    cout << *(&x) << endl;

    int *ptr_x = &x;
    // typedef int* pint;
    // pint ptr_x2 = &x;

    cout << ptr_x << endl;
    cout << *ptr_x << endl;

    double d = 1.0;
    //int *ptr_y = &d; //Error!
    double *ptr_y = &d;

    cout << ptr_y << endl;
    cout << *ptr_y << endl;

    cout << typeid(ptr_x).name() << endl;

    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_y) << endl;

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;

    return 0;
}