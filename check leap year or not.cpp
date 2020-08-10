#include <iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"\t\t\t\t\tCHECK IF A GIVEN YEAR IS A LEAP YEAR OR NOT\n";
	cout<<"\n\n\n";
	cout<<"Enter total no of test cases:\n";
	cin>>n;
	int a[n];
	cout<<"Enter the years:\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]%100==0){
			if(a[i]%400==0){
				if(a[i]%4==0){
					cout<<"\nThe given year is a leap Year";
				}
			}
			else{
				cout<<"\nThe given year is not a leap year";
			}
		}
		else if((a[i]%400==0)||(a[i]%4==0)){
			cout<<"\nThe given year is a leap year";
		}
			else{
				cout<<"\nThe given year is not a leap year";
			}
	}
	
	return 0;
}
