/*input:		output:
87901 			8 7 9 0 1  // with space 
				7 9 0 1
				9 0 1
				0 1
				1
*/



#include <iostream>
using namespace std;
int main()
{ int n;
  cin>>n;
  if(n%100==0)
  {
  	if(n%400==0)
	  {
  		if(n%4==0)
		  {
  			cout<<"yes";
		   }
	  }
	  else{
	  	cout<<"NO";
	  }
  }
  else if((n%400==0)||(n%4==0)){
  	cout<<"Yes";
  }
  
  
  
	
	
	return 0;
}
