
#include <iostream>
using namespace std;

class A{
public:
    void meth(){ cout << "A::meth()" << endl;}
    int x = 5;
};
class B: public virtual A{
public:
  //  void meth(){ cout << "B::meth()" << endl;}
};
class C: public virtual A{
public:
    void meth(){ cout << "C::meth()" << endl;}
};
class D: public B, public C{};


class Base{
public:
    virtual ~Base(){ cout << "Distruttore di Base" << endl;}
};
class Derivata: public Base{
public:
    ~Derivata(){ cout << "Distruttore di Derivata" << endl;}
};


int main(){
    D d;
    d.B::meth();
    d.C::meth();

    //d.meth();
    cout << d.x << endl << endl;

    Derivata d2;
    Base *b = new Base();

    b = &d2;

    delete b;
    cout << "**** fine del programma ****" << endl << endl;


    return 0;
}