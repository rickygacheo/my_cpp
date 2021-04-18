#include <iostream>
#include "test.h"
#include "Cube.h"
using namespace std;
 
#define NUM_THREADS 5

const int PI = 3.14;

int calculate(int w, int h);

template<class T> void mySwap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
 
// 线程的运行函数
void* say_hello(void* args)
{
    cout << "Hello Runoob！" << endl;
    cout << "int size :" << sizeof(int) << endl;
    system("pause");
    return 0;
}

class Circle {
    public:
    int r;
    int getL();


};
int Circle::getL() {
    return r*PI;
};

 
int main()
{
    cout << calculate(3, 2);
    say_hello(nullptr);
    MathMax *max;
    max->a = 3;
    max->b = 3;
    cout << max->func() << endl;
    Circle circle;
    circle.r = 3;
    cout << circle.getL() << endl;

    Cube cube;
    cube.setEdge(4,4);
    cout << cube.getArea() << endl;
    int a = 3;
    int * p = &a;
    cout << a << *p << endl;
    int c = 5;
    int d = 6;
    mySwap<int>(c, d);
    cout << c << d << endl;

}
