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
	int t;
	cin>>t;
	while(t--)
	{
		int n,var,s1=0,s2=0;
		cin>>n;
		foi(n)
		{
			cin>>var;
			s1+=var;
		}
		foi(n)
		{
			cin>>var;
			s2+=var;
		}
		if(s1==s2)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}