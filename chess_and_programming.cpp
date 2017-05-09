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
	int n,var;
	cin>>n;
	vi endc(n),startc(n);
	foi(n)cin>>startc[i]>>endc[i];
	cin>>n;
	vi startp(n),endp(n);
	foi(n)cin>>startp[i]>>endp[i];
	sort(startc.begin(),startc.end());
	sort(startp.begin(),startp.end());
	sort(endc.begin(),endc.end());
	sort(endp.begin(),endp.end());
	int ans = max(startp[startp.size()-1]-endc[0],startc[startc.size()-1]-endp[0]);
	//cout<<endc[0]-startp[startp.size()-1]<<endl;
	cout<<max(0,ans)<<endl;


}