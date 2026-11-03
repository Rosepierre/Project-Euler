#include <iostream>

using namespace std;

unsigned long long even_find()
{
    unsigned long long sum = 0;
    unsigned long long answer = 0;
    unsigned long long num1 = 0;
    unsigned long long num2 = 1;

    while (num1 < 4000000)
    {

        if (num1 % 2 == 0)
        {
            sum += num1;
        }
    
        answer = num1 + num2;
        num1 = num2;
        num2 = answer;   
    }
    return sum;
}

int main(int argc, char *argv[])
{
    cout << even_find() << endl;
    return 0;
}