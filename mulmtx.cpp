#include<iostream>
using namespace std;
int main(){
int **a,r,c;
cout<<"enter value of row & column"<<endl;
cin>>r>>c;
a=new int*[r];
for(int i=0;i<r;i++)
  a[i]=new int[c];
cout<<"enter"<<r*c<<"values:"<<endl;
for(int i=0;i<r;i++)
{
  for(int j=0;j<c;j++)
    cin>>a[i][j];
}
cout<<"matrix is:"<<endl;
for(int i=0;i<r;i++)
{
  for(int j=0;j<c;j++)
    cout<<a[i][j]<<" ";
  cout<<endl;
}int **a2,r2,c2;
cout<<"again enter value of row & column"<<endl;
cin>>r2>>c2;
a2=new int*[r2];
for(int i=0;i<r2;i++)
  a2[i]=new int[c2];
cout<<"enter"<<r2*c2<<"values:"<<endl;
for(int i=0;i<r2;i++)
{
  for(int j=0;j<c2;j++)
    cin>>a2[i][j];
}
cout<<"matrix is:"<<endl;
for(int i=0;i<r2;i++)
{
  for(int j=0;j<c2;j++)
    cout<<a2[i][j]<<" ";
cout<<endl;}
int a3[c][r2];
if(c!=r2)
{
  cout<<"product is not possible"<<endl;
}
  else
  {

    for (int i = 0; i < c; i++) {
  for(int j = 0;j<r2;j++){
      int sum = 0;
    for(int k =0;k<c;k++){
  sum+=(a[i][k]*a2[k][j]) ;
  a3[i][j]=sum; }
}}
}
cout<<"Product of both is "<<endl;
for(int i=0;i<c;i++)
{
  for(int j=0;j<r2;j++)
  {
    cout<<a3[i][j]<<" ";
  }cout<<endl;
}
}
