#include <iostream>

using namespace std;

unsigned long upper_lim = 365000;

unsigned long odd_finder()
{
    unsigned long sum = 0;

    for (unsigned long i = 1; i <= upper_lim; ++i)
    {
        if (i % 2 != 0)
        {
            sum += i * i;
        }
    }

    return sum;
}

int main(int argc, char *argv[])
{
    unsigned long answer = 0;

    answer += odd_finder();

    cout << answer << endl;

    return 0;
}