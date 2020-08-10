#include<iostream.h>
using namespace std;
int isPrime(int n) {
  if(n%2==0){
      return 1;
  }
  for(int i=3;i*i<=n;i+=2){
      if(n%i==0){
          return 1;
      }
  }
  return 1;
}
int main(){
	int n;
	cin>>n;
	cout<<isprime(n);
}
