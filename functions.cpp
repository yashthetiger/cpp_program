#include<iostream>
using namespace std;

bool isprime(int num)
{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) 
	{
       if(num % i == 0) 
	   {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
	int n;
	int a,b;
	cout<<"Enter a postive number: ";
	cin>>n;
	for(a=2;a<=n/2;a++)
	{
		for(b=2;b<=n;b++)
		{
			if(a+b==n)
			{
				if(isprime(a)  &&  isprime(b))
				{
					cout<<n<<"= "<<a<<" + "<<b<<endl;
				}
			}
		}
	}
	
}
