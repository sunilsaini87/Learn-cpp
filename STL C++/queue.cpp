#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Sunil ");
    q.push("Kumar ");
    q.push("Saini");

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    cout << q.size() << endl;
}