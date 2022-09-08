#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n>>endl;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i]>>endl;
  }
  int target;
  cin>>target>>endl;
  int pos;
  cin>>pos>>endl;
  if(pos<n)
  {
    a[pos]=target;
  }
  else{
    cout<<"Invalid position given"<<endl;
  }
}
