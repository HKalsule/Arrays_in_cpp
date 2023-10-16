#include <iostream>
using namespace std;
int main()
{
    int i;
    int a;
    cout << "Enter the position you want to find :"  << endl;
    cin >> a;
    int var[5] = {1,2,3,4,5};
    int *ptr=&var[0];
    cout << *(ptr(a-1)) << endl;
    ptr++;
    return 0;
}
