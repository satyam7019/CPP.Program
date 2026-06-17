#include <iostream>
using namespace std;

class Employee
{
 public:
       int ei;
       string name;

   void employe()
   {
    cout <<"Enter Employee ID :";
    cin >>ei;

    cout <<"Enter your Name : ";
   }
};
class Salary : public Employee
{
    public:
    float bs,Total_Salary;
    int hra,da;
    


    void total()
    {
        cout << "Enter Basic Salary :";
        cin >>bs;
        cout <<"Enter HRA : ";
        cin >>hra;
        cout <<"Enter DA :";
        cin >>da;

        Total_Salary = (bs+hra+da);
        cout <<"Total_Salary"<<Total_Salary;
    }

 
};
int main(){
        Salary s;
        s.employe();
        s.total();
        
        return 0;
    }