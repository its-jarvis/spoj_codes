#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <math.h>
#include <map>
#include <queue>
#include <algorithm>
#include <list>

using namespace std;


#define ll long long int
#define umm(x,y) unordered_map<x,y >
#define pb push_back
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define foi1(n) for(int i=1;i<=n;i++)
#define vi vector<int>
#define vvi vector<vi >
#define vll vector<ll>
#define vvll vector<vll >
#define si size()


int main()
{
	int n;
	cin>>n;
	vi shelfs(n),tables(n);
	foi(n)
	{
		cin>>shelfs[i];
	}
	foi(n)cin>>tables[i];
	sort(shelfs.begin(),shelfs.end());
	sort(tables.begin(),tables.end());
	ll ans=0;
	foi(n)
	{
		ans+=(ll)abs(shelfs[i]-tables[i]);
	}
	cout<<ans<<endl;
}