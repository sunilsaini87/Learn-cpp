#include <iostream>
using namespace std;

int getlenght(char name[])
{

    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[10];

    cout << "Enter your name " << endl;

    // we can not use space enter and tab between two name //
    cin >> name;
    cout << "your name is ";
    cout << name << endl;

    cout << "lenght is " << getlenght(name);
    return 0;
}