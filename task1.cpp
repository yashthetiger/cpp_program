//1.program to print size of all data types(char,int,float,double)
#include<iostream>
using namespace std;
int main()
{
	char a;
	int b;
	float c;
	double d;
	//sizeof(variable) used for finding size of a datatype
	//endl command moves the cursor to next line
	cout<<"Size of char:"<<sizeof(a)<<" byte"<<endl;
	cout<<"Size of int:"<<sizeof(b)<<" bytes"<<endl;
	cout<<"Size of float:"<<sizeof(c)<<" bytes"<<endl;
	cout<<"Size of double:"<<sizeof(d)<<" bytes"<<endl;
	return 0;
}

//2.program to print the product of two numbers entered by user
#include<iostream>
using namespace std;
int main()
{
	float a,b,product;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	product=a*b;
	cout<<"Product = "<<product<<endl;
	return 0;
}
