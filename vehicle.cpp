#include <iostream>
using namespace std;

class Vehicle
{
  public:
  string vn,mn;

  void Detail()
  {
    cout<<"Enter Vehical number : ";
    cin >> vn;

    cout<<"Enter Model Name : ";
    cin >> mn;
  }
};

  class Car : public Vehicle
  {
    public:
    string ft;
    float me;
    
    

    void type(){
        cout << "Enter fuel type : ";
        cin >>ft;
        cout << "Enter mileage : ";
        cin >>me;
        
    }
    void display()
    {
       cout<<" Vehical number : "<<vn<<endl;
       cout<<" Model Name : "<<mn<<endl;
       cout << " fuel type : "<<ft<<endl;
        cout << " mileage : "<<me<<endl;
    }
    

  };
  int main(){
   Car c;
   c.Detail();
   c.type();
   c.display();

  
  }