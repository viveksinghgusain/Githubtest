#include<iostream>
using namespace std;
class A
{

public:
int x;
A(int c)
{
    x=c;
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;


cout<<a<<" "<<b<<endl;
}

};

int main()
{
    int j,k;
    cin>>j>>k;
A obj1(j),obj2(k);
cout<<obj1.x<<" "<<obj2.x<<endl;

obj1.swap(obj1.x,obj2.x);
}
