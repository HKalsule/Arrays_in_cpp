#include <iostream>
using namespace std;
int main()
{
    int i;
    int a;
    int arr[5];
    int b;
    int a1=0;
    cout << ("Enter the elements in array :") << endl;
    for(i=0;i<5;i++)
    {
    cin >> arr[i]; 
    }
     cout << ("Enter the number you want to find :") << endl;
     cin >> b;
     for(a=0;a<5;a++)
    {
        if(b==arr[a])
        {
        cout << "Number found at :" << endl;
        cout << a+1 << endl;
        a1++;
        }
    }
    if(a1==0)
    {
        cout << "Number not found" << endl;
    }
    return 0;
}