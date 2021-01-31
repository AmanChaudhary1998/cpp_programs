#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll count_max(vector<vector<int>>v)  
{  
	// for(auto i:v){
	// 	for(auto j:i)cout<<j<<" ";
	// 	cout<<endl;
	// }
	ll n=v.size();
    int i,j;  
    int S[n][n];  
    ll max_values, max_i, max_j;  
      
    for(i = 0; i < n; i++)  
        S[i][0] = v[i][0];  
      
    for(j = 0; j < n; j++)  
        S[0][j] = v[0][j];  
          
    for(i = 1; i < n; i++)  
    {  
        for(j = 1; j < n; j++)  
        {  
            if(v[i][j] == 1)  
                S[i][j] = min(S[i][j-1],min( S[i-1][j],S[i-1][j-1])) + 1;  
            else
                S[i][j] = 0;  
        }  
    }  
   
    max_values = S[0][0]; max_i = 0; max_j = 0;  
    for(i = 0; i < n; i++)  
    {  
        for(j = 0; j < n; j++)  
        {  
            if(max_of_s < S[i][j])  
            {  
                max_values = S[i][j];  
                max_i = i;  
                max_j = j;  
            }  
        }              
    }  
    // cout<<"====>"<<max_values<<endl;
    // returning the values...
  	return max_values;
}  

int main(){
	ll n;
	cin>>n;
	ll ans=0;
	// initializing the value
	vector<vector<char>>v(n,vector<char>(n,'#'));
	vector<vector<int>>copy_v(n,vector<int>(n,0));
	for(ll i=0;i<n;i++)
	for(ll j=0;j<n;j++)
	cin>>v[i][j];
	
	for(ll c=0;c<n;c++){
		ll count=0;
		for(ll i=0;i<n;i++)if(v[i][c]=='C')count++;
		for(ll i=n-count;i<n;i++)copy_v[i][c]=0;
		for(ll i=0;i<n-count;i++)copy_v[i][c]=1;
	}
	ans=max(ans,count_max(copy_v));
	// rotated by the 90 degrees
	
	
	for(ll i=0;i<n;i++)
	for(ll j=0;j<=i;j++)
	swap(v[i][j],v[j][i]);
	for(ll c=0;c<n;c++){
		ll count=0;
		for(ll i=0;i<n;i++)if(v[i][c]=='C')count++;
		for(ll i=n-count;i<n;i++)copy_v[i][c]=0;
		for(ll i=0;i<n-count;i++)copy_v[i][c]=1;
	}
	ans=max(ans,count_max(copy_v));
	cout<<ans<<endl;
	return 0;
}
