#include <iostream>
using namespace std;
int main()
{
    int i;
    int a;
    int arr[10];
    cout << ("Enter 10 numbers :") << endl;
    for(i=0;i<10;i++)
    {
    cin >> arr[i]; 
    }
     cout << ("Numbers in the array are :") << endl;
     for (a=0;a<10;a++)
    {
        cout << arr[a] << endl;
    }
    return 0;
}