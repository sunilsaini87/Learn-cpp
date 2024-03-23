#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }

  cout<<"Element at position 2nd is "<<arr.at(2)<<endl;
  cout<<"Array is empty or not "<<arr.empty()<<endl;
  cout<<arr.front()<<endl;
  cout<<arr.back()<<endl;
}