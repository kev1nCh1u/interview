#include <iostream>

int i;
int array[6] = {0};

class Base{
    public:
        Base() {array[i++] = 1;}
        virtual ~Base() {array[i++] = 2;}
        virtual void foo() {array[i++] = 3;}
        void bar() {array[i++] = 4;}
};

class Derived : public Base{
    public:
        Derived() {array[i++] = 5;}
        virtual ~Derived() {array[i++] = 6;}
        virtual void foo() {array[i++] = 7;}
        void bar() {array[i++] = 8;}
};

int main(){
    std::cout << "test\n";

    Base *pB;
    i = 0;
    pB = new Derived;
    pB->foo();
    pB->bar();
    delete pB;

    for(int i = 0; i < 6; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    return 0 ;
}