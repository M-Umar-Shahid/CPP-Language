#include<iostream>
using namespace std;
// #include "anotherfile.cpp"
int c=5;
int main()
{
    int x=5;
    int &y=x;
    int c=10;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of c is "<<::c;//For global value
}