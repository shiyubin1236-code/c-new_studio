#include<iostream>
#include<string>
#include<map>
using namespace std;
int n,q;
map<string,string>mp;
string strmin(string x,string y)
{
    if(x.size()<y.size())  return x;
    if(x.size()>y.size())  return y;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]<y[i])  return x;
        if(y[i]<x[i])  return y;
    }
    return x;
}

int main()
{
    cin>>n>>q;
    while(n--)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(mp[s.substr(j)]=="")  mp[s.substr(j)]=s;
            else mp[s.substr(j)]=strmin(mp[s.substr(j)],s);
        }
    }
    while(q--)
    {
        int x;
        string k;
        cin>>x>>k;
        if(mp.count(k)==0)  cout<<"-1"<<endl;
        else cout<<mp[k]<<endl;
    }
    return 0;
}
