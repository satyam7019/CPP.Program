#include<iostream>
using namespace std;

class A// base class
{
    public:
    void displayA()
    {
        cout <<"I am a Person:";

    }

};
class B :  public A// Derived class
{
    public:
    void displayB()
    {
        cout <<"I am a Student:";

    }

};
class C :  public A // Derived class
{
    public:
    void displayC()
    {
        cout <<"i am a employe:";

    }

};
class D :  public A //Multiple inharitance
{
    public:
    void displayD()
    {
        cout <<"i am a working student:";

    }

};
class E : public B
{
    public:
    void displayE()
    {
        cout <<"i am a working student:";

    }

};
class F : public B
{
    public:
    void displayF()
    {
        cout <<"i am a working student:";

    }

};
int main(){
    B obj1;
    C obj2;
    D obj3;
    E obj4;
    F obj5;
    
    obj1.displayA();
    obj1.displayB();
    obj2.displayC();
    obj3.displayD();
    obj4.displayE();
    obj5.displayF();
    

    return 0;


}