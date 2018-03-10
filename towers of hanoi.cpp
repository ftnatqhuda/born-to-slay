#include<iostream>
using namespace std;

void hanoi(char start, char end, char extra, int disk)
{
	if(disk==0) 
	return;
	
	hanoi(start, extra, end, disk-1);
	cout<<"Move "<<start<<" to "<<end<<endl;
	hanoi(extra, end, start, disk-1);
}
int main()
{
	int d;
	cin>>d;
	hanoi('A', 'B', 'C', d);
	return 0;
}
