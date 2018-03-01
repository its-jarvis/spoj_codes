#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <math.h>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>

using namespace std;


#define ll long long int
#define ull unsigned ll
#define umm(x,y) unordered_map<x,y >
#define mm(x,y) map<x,y >
#define pb push_back
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define foi1(n) for(int i=1;i<=n;i++)
#define foj1(n) for(int j=1;j<=n;j++)
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi >
#define vvb vector<vb >
#define vll vector<ll>
#define vvll vector<vll >
#define si size()



int main()
{
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	if(l==1&&r==n)
	{
		cout<<0<<endl;
	}
	else if(l==1) 
	{
		cout<<abs(r-pos)+1<<endl;
	}
	else if(r==n)
	{
		cout<<abs(pos-l)+1<<endl;
	}
	else
	{
		cout<<(r-l)+min(abs(pos-l),abs(pos-r))+2<<endl;
	}
}