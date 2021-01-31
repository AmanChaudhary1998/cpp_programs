    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int n;
    	cin >> n;
    	int a[n];
    	stack<int>s;
    	for(int i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	}
    	sort(a,a+n);
    	for(int j=0;j<n;j++)
    	{
    	    s.push(a[j]);
    	}
    	for(int u=n-1;u>=0;u--)
    	{
    	    if(s.top()>a[u])
    	    {
    	        s.pop();
    	       // cout<<"uhihi"<<" ";
    	        a[u]=0;
    	    }
    	}
    	int sum=0;
    	for(int i=0;i<n;i++)
    	{
    	    sum+=a[i];
    	}
    	cout<<sum;
        return 0;
    }
