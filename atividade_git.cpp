#include <iostream>

class A {
public:
    int getA1() { return A1; }
    void setA1(int A1) { this->A1 = A1; }

    float getA2() { return A2; }
    void setA2(float A2) { this->A2 = A2; }

    void MA1() { std::cout << "MA1" << endl; }
    void MA2() { std::cout << "MA2" << endl; }
private:
    int A1;
    float A2;
};

class B {
public:
    int getB1() { return B1; }
    void setB1(int B1) { this->B1 = B1; }

    float getB2() { return B2; }
    void setB2(float B2) { this->B2 = B2; }

    void MB1() { std::cout << "MB1" << endl; }
    void MB2() { std::cout << "MB2" << endl; }
private:
    int B1
    float B2;
};

int main(){

}