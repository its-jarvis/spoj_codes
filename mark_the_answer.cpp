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
	int n,x;
	cin>>n>>x;
	vi vec(n);
	foi(n)cin>>vec[i];
	int beg=0,curr=0,count=0,ans=-1,wr=0;
	foi(n)
	{
		curr=i;
		if(vec[curr]<=x)
		{
			count+=1;
			ans=max(ans,count);
		}
		else if(vec[curr]>x)
		{
			wr+=1;
			if(wr>1)break;
				while(wr>1&&beg<=curr)
				{
					if(vec[beg]>x){wr--;}
					else count-=1;
					beg+=1;
				}
			ans=max(ans,count);
		}
	}
	cout<<ans<<endl;
}