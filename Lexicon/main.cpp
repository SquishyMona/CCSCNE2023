#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("input.txt");
    string inputStr;
    char ch;
    int tempIndex = 0;
    int i = 0;
    int wordLen;
    vector<int> lenFreq;
    char delims[15] = {'\n', ' ', ',', '-', ':', ';', '.', '?', '"', '(', ')'};
    while(!inFile.eof())
    {
        if(inFile.get(ch) == delim)
        {
            wordLen = i - 1;
            lenFreq[wordLen]++;
            i = 0;
        }
        else
        {
            i++;
        }
        cout << ch;
    }
    cout << endl;
}