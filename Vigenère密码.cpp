#include<bits/stdc++.h>
using namespace std;
char mw(char mw,char miw)
{
  return (mw-(miw-'A')>='A')?mw-(miw-'A'):mw-(miw-'A')+26;
}
int main()
{
  string a,b;bool up;
  cin>>a>>b;
  for(int i=0;i<a.size();i++)if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-'a'+'A';
  for(int i=0;i<b.size();i++)
  {
    if(b[i]>='a'&&b[i]<='z')
    {
    up=false;
    b[i]=b[i]-'a'+'A';
  }
  else up=true;
  if(up)cout<<mw(b[i],a[i%a.size()]);
  else cout<<char(mw(b[i],a[i%a.size()])-'A'+'a');
  }
return 0;
}
