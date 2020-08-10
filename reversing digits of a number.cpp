#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\tREVERSING THE DIGITS OF A GIVEN NUMBER\n";
	cout<<"\n\n\n";
	int N,rem=0,sum=0,i;
	cout<<"Enter the number of test cases:\n";
	cin>>N;
	int a[N];
	cout<<"Enter the numbers to be reversed:\n";
	for(i=0;i<N;i++)
		cin>>a[i];
	for(i=0;i<N;i++)
		while(a[i]>0)
		{	rem=a[i]%10;
			sum=sum*10+rem;
			a[i]/=10;
	    }
		cout<<"The reversed number is "<<sum<<"\n";
		sum=0;

	return 0;
}
