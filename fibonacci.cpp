#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	cin>>n;
	
	cout<<"Fibo. " << n<< "-index= "<<fib(n)<<endl;
	
	int f[100];
	f[0]=0;
	f[1]=1;
	for(int i =2; i<=n; i++)
	{
		f[i]= f[i-1] + f[i-2];
	}
	
	cout<<f[n]<<endl;
	
	return 0;
}
