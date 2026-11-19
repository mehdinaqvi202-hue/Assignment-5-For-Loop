#include <iostream>
using namespace std;

int main()
{
    int N, S = 0;

    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        S = S + i * i;
    }

    cout << "Sum = " << S;

    return 0;
}
