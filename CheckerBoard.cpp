#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter columns of Checkerboard: ";
    cin >> col;
    cout << "Enter rows of Checkerboard: ";
    cin >> row;
    for (int i = 1; i <= col; i++)
    {
        if (i % 2 == 0)
        {
            cout << " ";
        }
        for (int j = 1; j <= row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
