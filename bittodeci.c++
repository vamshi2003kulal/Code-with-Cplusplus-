#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n,ans=0,i=0;
  cout<<"ENTER VALUE FOR N:";
  cin>>n;
  while(n!=0)
    {
    int digit=n%10;
    if(digit==1)
    {
        ans=ans+pow(2,i);
    }
    n=n/10;
    i++;
    }
  cout<<"decimal representation is:"<<ans;
  return 0;
}
