#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
