#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int digit, reverseNo, limit = 0;
    cout << "Enter the range limit: ";
    cin >> limit;
    cout << endl;

    for (int n = 1; n <= limit; n++)
    {
        reverseNo = 0;
        int x = n;
        while (n != 0)
        {
            digit = n % 10;
            reverseNo = (reverseNo * 10) + digit;
            n = n / 10;
        }
        if (reverseNo == x)
        {
            cout << x << endl;
        }
        n = x;
    }

    return 0;
}
