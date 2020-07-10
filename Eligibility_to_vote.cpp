#include<iostream>
using namespace std;
int main()
{
	int age;
	char name[30];
	cout<<"Enter name:";
	cin>>name;
	cout<<"enter Age:";
	cin>>age;
	if(age<18)
		cout<<name<<",You are not eigible to vote.You can vote in "<<18-age<<" years";
	else
		cout<<name<<",You are eigible to vote.";
	return 0;
}
