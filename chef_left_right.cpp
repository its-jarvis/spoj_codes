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
	int t;
	cin>>t;
	while(t--)
	{
		int n,r;
		cin>>n>>r;
		vi vec(n);
		foi(n)cin>>vec[i];
		int a=0,b=1e9+1;
		bool ans = true;
		foi(n-1)
		{
			if(vec[i]<=a||vec[i]>=b)
			{
				ans=false;
				break;
			}
			if(vec[i+1]>vec[i])
			{
				a=vec[i];
			}
			else
			{
				b=vec[i];
			}
		}
		if(r<=a||r>=b)ans=false;
		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}