#include <iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bt,float ht)
{
   return((bt*ht)/2);
}
int main()
{
        int l,b;
        float r,bt,ht;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bt>>ht;
        cout<<"\nArea of rectangle is "<<area(l,b);
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of triangle is "<<area(bt,ht);
}

