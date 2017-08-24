#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a=0;
	char b='a';
	double c=0;
	float d=0;
	bool e=0;
	cout<<"\n enter an integer\n";
	cin>>a;
	cout<<"\n enter a character\n";
	cin>>b;
	cout<<"\n enter a decimal number\n";
	cin>>c;
	cout<<"\n enter another decimal number\n";
	cin>>d;
	cout<<"\n enter a boolean value\n";
	cin>>e;
	cout<<"the numbers entered are-\n"<<"integer- "<<a<<"\ncharacter- "<<b<<"\ndecimal1- "<<c<<"\ndecimal2- "<<d<<"\nboolean value- "<<e;
	return 0;
}
