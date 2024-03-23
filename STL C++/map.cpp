#include <iostream>
using namespace std;

#include <map>

int main()
{

    map<int, string> m;
    m[1] = "sunil";
    m[13] = "saini";
    m[2] = "kumar";
    m.insert({5, "tanwar"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << m.count(4) << endl;

    // erase ,
}