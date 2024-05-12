#include<iostream>
using namespace std;
int main()
{
    int i,j,n1,n2;
    cout<<"Enter number of rows : ";
    cin>>n1;
    cout<<"Enter number of columns : ";
    cin>>n2;
    char a='#',b;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(j==i)
            cout<<0;
            else{
            cout<<a;}
        }
        cout<<"\n";
    }

}