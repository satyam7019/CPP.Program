#include<iostream>
using namespace std;

class Product
{
    public:
    string pi,name;

    void getdetail()
    {
        cout << "Enter Product ID :";
        cin >>pi;

        cout << "Enetr Name :";
        cin >>name;

    }



};
class Electronics : public Product
{
    public:
    float w;

    void warranty()
    {
        cout << "Product Warranty : ";
        cin>>w;

    }

};
class Mobile : public Electronics
{
    public:
    float r,s;
    int p;

    void mobile()
    {
        cout << "Ram :";
        cin>>r;
        cout << "Storage :";
        cin>>s;
        cout << "Enter Mobile Price :";
        cin>>p;

    }

    void display()
    {
        cout <<" ------------- Mobile details-------------"<<endl;
        cout << "Enter Product ID :"<<pi<<endl;
        cout << "Enetr Name :"<<name<<endl;
        cout << "Product Warranty : "<<w<<endl;
        cout << "Ram :"<<r<<endl;
        cout << "Storage :"<<s<<endl;
        cout << "Enter Mobile Price :"<<p<<endl;
    }

};
int main()
{
    Mobile m;
    m.getdetail();
    m.warranty();
    m.mobile();
    m.display();

    return 0;
}