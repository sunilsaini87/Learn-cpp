#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity of vecrot " << v.capacity() << endl;

    cout << "size of vector " << v.size() << endl;

    cout << "element at 2nd index is " << v.at(2) << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    cout << "Before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "After pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout << "size of vector " << v.size() << endl;

    // initialize the vector

   // in vector<int a(5,1), creates a vector of 5 elements and all initialized to 1
    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> b(a);
    for (int i : b)
    {
        cout << i << " ";
    }
}