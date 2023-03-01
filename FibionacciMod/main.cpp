#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int calcFibSeries(int, int);

int main()
{
    int modNum = 3;
    int fibArr;
    int modArr;
    fibArr[0] = 1;
    fibArr[1] = 1;

    for (int i = 2; i < modNum; i++)
    {
        fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
        modArr[i] = calcFibSeries(fibArr[i], modNum);
        cout << modArr[i] << endl;
    }

    return 0;
}

int calcFibSeries(int i, int n) {
    return i % n;
}