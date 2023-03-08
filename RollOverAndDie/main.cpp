#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    string str;
    cout << "Enter your directions (N, S, E, W): ";
    cin >> str;
    cout << endl;
    int arr[3] = {1, 2, 3};
    int temp;
    for(int i = 0; i < str.length(); i++)
    {
        switch(str[i]) 
        {
            case 'N':
                temp = arr[0];
                arr[0] = 7 - arr[1];
                arr[1] = temp;
                break;
            case 'S':
                temp = arr[0];
                arr[0] = arr[1];
                arr[1] = 7 - temp;
                break;
            case 'E':
                temp = arr[0];
                arr[0] = arr[2];
                arr[2] = 7 - temp;
                break;
            case 'W':
                temp = arr[0];
                arr[0] =  7 - arr[2];
                arr[2] = temp;
                break;   
        }
    }

    cout << arr[0] << endl;
}