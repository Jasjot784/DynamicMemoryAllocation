#include<iostream>
using namespace std;
int main()
{
  int n,*p,ind = 0;
  cout<<"Enter n"<<endl;
  cin>>n;
  int val = 1;
  p= new int [n];
  do{
    int count = 0;
    for(int i=1;i<=val;i++)
    {
      if(val%i == 0)
      count++;
    }
    if(count == 2)
    p[ind++]=val;
    val++;
  }while(ind!=n);
  cout<<"Array of first n prime values are "<<endl;
  for(int i =0;i<ind;i++)
  cout<<p[i]<<" ";
}
