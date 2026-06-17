#include<iostream>
using namespace std;

class Person // base class
{
    public:
    void displayPerson()
    {
        cout <<"I am a Person:";

    }

};
class Student : virtual public Person// Derived class
{
    public:
    void displayStudent()
    {
        cout <<"I am a Student:";

    }

};
class employe : virtual public Person // Derived class
{
    public:
    void displayemploye()
    {
        cout <<"i am a employe:";

    }

};
class Working_Student :  public Student, public employe //Multiple inharitance
{
    public:
    void displayWorking_Student()
    {
        cout <<"i am a working student:";

    }

};
int main(){
    Working_Student obj;
    obj.displayPerson();
    obj.displayStudent();
    obj.displayemploye();
    obj.displayWorking_Student();

    return 0;


}