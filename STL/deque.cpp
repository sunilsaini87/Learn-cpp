#include <iostream>
#include <bits/stdc++.h> // add all header files 
#include <deque>
using namespace std;

int main()
{
	deque<int> d;
	d.push_back(1);
	d.push_front(2);

	for (int i : d)
	{
		cout << i << " ";
	}
	cout << endl;

  // index 1 is popped
	d.pop_back();
  
	for (int i : d)
	{
		cout << i << " ";
	}
  cout<<endl;

  cout<<d.at(0)<<endl;
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  
  cout<<d.empty()<<endl;

  // d.size ,, d.erase,, d.begin
}
