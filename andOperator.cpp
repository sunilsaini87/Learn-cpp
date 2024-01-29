#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;

    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;

    cout << "a&b " << (a & b)<<endl;
    cout << "a|b " << (a | b)<<endl;
    cout << "a^b " << (a ^ b)<<endl;
    cout << "~a " << (~a)<<endl;
    cout << "~b " << (~b)<<endl;
    cout << "<<b " << (a<<b)<<endl;

    return 0;
}
