#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("input.txt");
    char s;
    while(!inFile.eof())
    {
        inFile.get(s);
        cout << s;
    }
}