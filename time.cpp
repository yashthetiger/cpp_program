#include<iostream>
using namespace std;
class time 
{
	private:
		int hours;
		int minutes;
		int seconds;
		int total_seconds;
	public:
		void get_time();
		void print_time();
};

void time::get_time()
{
			cout<<"Enter time:"<<endl;
			cout<<" Hours? ";
			cin>>hours;
		
			cout<<" Minutes? ";
			cin>>minutes;
			
			cout<<" Seconds? ";
			cin>>seconds;
			
}

void time::print_time()
{
	if(seconds>=60)
	{
		minutes+=(seconds/60);
		seconds=seconds%60;
	}
	if(minutes>=60)
	{
		hours+=(minutes/60);
		minutes=minutes%60;
	}
	total_seconds=seconds+(minutes*60)+(hours*3600);
	if(hours<10)
	{
		if(minutes<10)
			{
				if(seconds<10)
					cout<<"The time is = 0"<<hours<<":0"<<minutes<<":0"<<seconds<<endl;
				else
					cout<<"The time is = 0"<<hours<<":0"<<minutes<<":"<<seconds<<endl;
			}
		else
			{
				if(seconds<10)
					cout<<"The time is = 0"<<hours<<":"<<minutes<<":0"<<seconds<<endl;
				else
					cout<<"The time is = 0"<<hours<<":"<<minutes<<":"<<seconds<<endl;
			}
	}
	else
	{
		if(minutes<10)
		{
			if(seconds<10)
				cout<<"The time is = 0"<<hours<<":0"<<minutes<<":0"<<seconds<<endl;
			else
				cout<<"The time is = 0"<<hours<<":0"<<minutes<<":"<<seconds<<endl;
		}
		else
		{
			if(seconds<10)
				cout<<"The time is = 0"<<hours<<":"<<minutes<<":0"<<seconds<<endl;
			else
				cout<<"The time is = 0"<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
	}
	cout<<"Time in total seconds: "<<total_seconds;
}

int main()
{
	time t1;
	t1.get_time();
	t1.print_time();
}
