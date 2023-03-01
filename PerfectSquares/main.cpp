#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>

bool isWholeNumber(double);

int main()
{
    int num = 62549;
    std::string numStr = std::to_string(num);


    int strLen = numStr.length();
    std::string tempStr;
    double value = 0;
    int sum = 0;
    for (int i = 0; i < strLen; i++)                    // i is substring
    {
        tempStr = numStr.substr(i);
        for (int j = 0; j < strLen - i; j++)            // j is number of possible substrings
        {
            value = sqrt(stod(tempStr));
            if(isWholeNumber(value))
            {
                sum += value;
            }
            tempStr.pop_back();
        }
    }

    std::cout << sum << std::endl;
    return 0;
}

bool isWholeNumber(double num) {
    return std::fmod(num, 1) == 0;
}

