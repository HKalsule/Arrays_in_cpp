#include <iostream>
using namespace std;

int main()
{
    int r, c, x, y;

    cout << "Enter number of rows in mat1 : ";
    cin >> r;
    cout << "Enter number of columns in ma12 : ";
    cin >> c;
    cout << "Enter number of rows in mat2 : ";
    cin >> x;
    cout << "Enter number of columns in mat2 : ";
    cin >> y;
    int a[r][c];
    int b[x][y] ;
    int i;
    int j;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < x; ++i)
       for(j = 0; j < y; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    for(i = 0; i < x; ++i)
        for(j = 0; j < y; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}