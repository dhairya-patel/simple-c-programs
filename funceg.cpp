//z=pow(x,y)
#include<iostream>
using namespace std;
int pwr(int a, int b)
{
    int i,c;
    c=1;
    for(i=1;i<=b;i++)
    c=c*a;
    return c;
}
int main()
{
    int x,y,z,i;
    cout<<"Enter x and y\n";
    cin>>x>>y;
    z=pwr(x,y);
    cout<<z;
    return 0;
}
