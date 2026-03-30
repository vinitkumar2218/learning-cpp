#include<iostream>
using namespace std;
int main(){
  int v,r;
  v = 89;
  r = 54;
  cout<< v + r <<endl;
  v *= 54;
  r *= 89;
  cout<< r/v <<endl;
  ++v;
  r--;
  cout<< v - r<<endl;
  float s = (float)v;
  cout<< s <<endl;
  char t;
  cout<<"enter the value:\n";
  cin>>t;
  int d = (int)t;
  cout<< d <<endl;
  int f;
  cout<<"enter the number:\n";
  cin>>f;
  if(f % 2 ==0 )
    cout<<"number is even:\n";
  else
    cout<<"number is odd:\n";
  return 0;
}