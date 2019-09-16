#include<iostream>
using namespace std;
int main()
{
  int *a,n;
  cout<<"enter size"<<endl;
  cin>>n;
  a=new int[n];
  cout<<"Enter "<<n<<" values"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    }
    cout<<"Values are "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    a=new int[8];
    cout<<endl<<"Again Enter 8 Values"<<endl;
    for(int i=0;i<8;i++)
    {
      cin>>a[i];
    }
    cout<<endl<<"Again values are"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
          delete(a);
}
