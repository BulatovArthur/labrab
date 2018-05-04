#include <iostream>

using namespace std;

class A {
    public:
    A() { printFromConstructor(); }
    void work() { printFromWork(); }
    virtual ~A() { printFromDestructor(); }
    
    virtual void printFromConstructor() { cout << "A"; };
    virtual void printFromDestructor() { cout << "~A"; };
    virtual void printFromWork() { cout << "[A]"; };
};

class B : public A {
    public:
    int *p = new int;
    B() { printFromConstructor(); }
    void work() { printFromWork();}
    virtual ~B() { printFromDestructor();}
    
    virtual void printFromConstructor() { cout << "B"; };
    virtual void printFromDestructor() { cout << "~B"; };
    virtual void printFromWork() { cout << "[B]"; };
};
    
int main() {
    A* a = new B;
    a->work();
    delete a;
}
