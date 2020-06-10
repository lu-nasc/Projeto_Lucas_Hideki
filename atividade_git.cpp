#include <iostream>
#include <string>

class A {
public:
    int getA1() { return A1; }
    void setA1(int A1) { this->A1 = A1; }

    float getA2() { return A2; }
    void setA2(float A2) { this->A2 = A2; }

    void MA1() { std::cout << "MA1" << endl; }
    void MA2() { std::cout << "MA2" << endl; }
    void MA3() { std::cout << "Alteração a classe A partir do clone" << '\n';}
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
    void MB3() { std::cout << "MB3" << endl; }

private:
    int B1
    float B2;
};

class C {
public:
    void MC1() { std::cout << "MC1" << endl; }
    void MC2() { std::cout << "MC2" << endl; }
    void MC3() { std::cout << "MC3" << endl; }

private:
    std::string C1;
    int C2;
};

class D {
public:
    void MD1() { std::cout << "MD1" << endl; }
    void MD2() { std::cout << "MD2" << endl; }
    void MD3() { std::cout << "MD3" << endl; }
    void MD4() { std::cout << "MD4" << endl; }

private:
    std::string D1;
    int D2;
};

int main(){
    return 0;
}
