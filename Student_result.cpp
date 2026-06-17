#include <iostream>
using namespace std;

class Student
{
  public:
  int rolln;
  string name;

  void getstudent()
  {
    cout<<"Enter your roll number : ";
    cin >> rolln;

    cout<<"Enter your Name : ";
    cin >> name;
  }
};

  class result : public Student
  {
    public:
    float percantage;
    float m1,m2,m3;

    void getpercentage(){
        cout << "Enter marks of three subject : ";
        cin >>m1>>m2>>m3;
      percantage = ((m1+m2+m3)*100)/300;
      
      cout <<"percantege : "<<percantage;
        
    }
    

  };
  int main(){
   result r;
   r.getstudent();
   r.getpercentage();

  
  }