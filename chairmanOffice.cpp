Dr. Wail Mardini is the chairman of computer science department. Today he wants to distribute the graduation project groups between the supervisors in the department.

Dr. Wail wants to achieve a fair distribution, and this can be achieved by splitting the groups between the supervisors equally (i.e. each supervisor must take the same number of groups).

Dr. Wail is very busy currently, and you are visiting the department, so he gives you the number of supervisors and the number of graduation project groups, and he asked you to check if he can reach a fair distribution or not. Can you?

Input
The first line contains two integers n and m (1  ≤  n, m  ≤  103), where n is the number of supervisors, and m is the number of graduation project groups.

Output
If Dr. Wail can divide the groups between the supervisors equally print "YES" (without quotes). Otherwise, print "NO" (without quotes).

Examples
input
4 8
output
YES
input
7 5
output
NO


#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	if(m % n == 0)
	{
	cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
