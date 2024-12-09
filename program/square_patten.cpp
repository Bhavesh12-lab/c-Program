#include <iostream>
using namespace std;

int main()
{

    // square patten

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // right half tringle

    // number pattern

    int x, y;

    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= x; y++)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    // char pattern

    char c, d;

    for (c = 'A'; c <= 'E'; c++)
    {
        for (d = 'A'; d <= c; d++)
        {
            cout << d << " ";
        }
        cout << endl;
    }
}
