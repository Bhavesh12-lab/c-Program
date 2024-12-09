#include <iostream>
using namespace std;

// WAPP TO PRINT MULTIPLICATION TABLE OF  N NUMBER

int main()
{

    int i, num;

    cout << "Enter  any Number: ";

    cin >> num;

    for (i = 1; i <= 10; i++)
    {
        cout << num << "X" << i << "=" << num * i << endl;
    }
    return 0;
}