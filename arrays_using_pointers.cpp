#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *a;
	cout<<"Enter elements: ";
	for(int i=0;i<5;i++)
		cin>>arr[i];
	a=arr;
	cout<<"You entered: ";
	for(int i=0;i<5;i++)
	{
		cout<<*a<<endl;
		a++;
	}
	return 0;
}
