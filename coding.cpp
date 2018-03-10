#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Person{
	string name;
	int age;
};

int main()
{
	vector<int> vi;
	
	for(int i=0; i<5; i++) vi.push_back(rand()*100); //insert the element
	cout<< "Size: "<<endl;
	cout<< vi.size()<<endl;//count
	cout<<endl;
	
	cout<<"Elements of vector: "<<endl;
	for(int i=0; i< vi.size(); i++)
	{
		cout<< vi[i] << ' '; //access
	}
	cout<<endl;
	
	cout<<endl;
	
	cout<<"Sort elements"<<endl;
	sort(vi.begin(), vi.end());
	for(int i; vi[i]; i++ )
	{
		cout<< i << ' ';
	}
	cout<<endl;
	
	cout<<"Remove all elements "<<endl;
	vi.clear();//remove
	cout<<"Size after clear = "<<vi.size()<<endl;
	cout<<endl;
	
	return 0;
}
