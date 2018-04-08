#include<iostream>
using namespace std;
class project
{
public:
	int arrival,burst,pn;
	void details()
	{
		cout<<"enter process number";
		cin>>pn;
		cout<<"enter arrival time for process "<<pn;
		cin>>arrival;
		cout<<"enter burst time for process "<<pn;
		cin>>burst;
	}
};
int main()
{
	int n;
	cout<<"enter number of process";
	cin>>n;
	project process[n];
	for(int i=0;i<n;i++)
	{
	process[i].details();
	}
}
