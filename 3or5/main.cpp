#include <iostream>

using namespace std;

int upper_lim = 1000;

int main()
{
    int answer = 0;

    for (int i = 1; i < upper_lim; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            answer += i;
        }
    }

    cout << answer << endl;

    return 0;
}