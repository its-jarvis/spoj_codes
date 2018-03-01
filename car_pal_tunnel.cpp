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
#include <iomanip>

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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vll vec(n);
		foi(n)cin>>vec[i];
		ll c,d,s;
		cin>>c>>d>>s;
		ll cdelay = vec[0];
		for(int i=1;i<vec.size();i++)
		{
			cdelay = max(cdelay,vec[i]);
		}
		if(n==1)
		{
			cout<<fixed<<setprecision(8)<<0.0<<endl;
		}
		else
		{
			cout<<fixed<<setprecision(8)<<double(cdelay*(c-1))<<endl;
		}
	}
}