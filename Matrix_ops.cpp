#include<iostream>
using namespace std;
int main()
{
  int arr4[4][2];
  int arr3[4][2];
  int arr1[4][2]={
    {11, 12},
    {34, 23}};
    int arr2[4][2]={
    {12, 14},
    {11, 80}};
   

  int i,j;
  cout<<"print matrix 1\n"<<endl;
  for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
    cout<<"\t"<<arr1[i][j]; 
    }
    cout<<endl;

  }
  cout<<"print matrix 2\n"<<endl;
  for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
    cout<<"\t"<<arr2[i][j]; 
    }
    cout<<endl;
  }
    cout<<"adding matrices....\n";
     for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
    arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
    cout<<endl;
  }
    cout<<"the resultant matrix is\n";
     for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
    cout<<"\t"<<arr3[i][j];
    }
    cout<<endl;

}
cout<<"transpose of matrix\n";
   for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
    arr4[i][j]=arr1[j][i];
   
  
    }

  }
     for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
  
   
cout<<"transpose of matrix"<<arr4;
  
    }
    cout<<endl;

}
}


  
