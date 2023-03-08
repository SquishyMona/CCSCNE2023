#include <iostream>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

int main()
{
    int n = 3;
    stack<int> sta;
    int num1, num2;
    sta.push(1);
    sta.push(1);

    for(int i = 1; true; i++)
    {
        num1 = sta.top();
        sta.pop();
        num2 = sta.top();
        if (num1 == 1)
        {
            if (num2 == 0)
            {
                cout << endl << i << endl;
                break;
            }
        }
        sta.pop();
        sta.push(num1);
        sta.push((num1 + num2) % n);
        cout << (num1 + num2) % n << " ";
    }
}