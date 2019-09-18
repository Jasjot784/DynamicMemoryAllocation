#include<iostream>
using namespace std;
int main()
{
  int **a,r1,c1;
  cout<<"Enter no. of rows and columns: "<<endl;
  cin>>r1>>c1;
  a=new int*[r1];
  for(int i=0;i<r1;i++)
  {
    a[i]=new int[c1];
  }
  cout<<"Enter "<<r1*c1<<"values: ";  
  for(int i = 0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      cin>>a[i][j];
    }
    }
    cout<<"Matrix is "<<endl;
    for(int i = 0;i<r1;i++)
    {
      for(int j=0;j<c1;j++)
      {
        cout<<a[i][j]<<" ";
      }cout<<endl;
      }

  }
