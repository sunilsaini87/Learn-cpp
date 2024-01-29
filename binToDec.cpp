#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 0;
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;

        ans = digit * pow(2, i) + ans;

        n = n / 10;
        i++;
    }
    cout << ans;

    return 0;
}
