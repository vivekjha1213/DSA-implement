#include<iostream>
using namespace std;
class Parent{
    protected:
    int protx=23;
    public:
    int px=10;
    void show(){
        cout<<"values of x is "<<px<<endl;

    }
};
class child : public Parent
{
    public:
    int cx=20;
    void show(){
        cout<<cx<<protx<<px<<endl;

    }
} ;
int main(){
    child g;
    g.show();
    return (0);
}