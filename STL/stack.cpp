#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Sunil ");
    s.push("Kumar ");
    s.push("Saini");

    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;
}