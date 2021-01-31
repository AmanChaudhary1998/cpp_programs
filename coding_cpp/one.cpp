#include <iostream>

using namespace std;

int main() {
    int t,l,r,sum=0,n,avg=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l;
        cin>>r;
        n=(r-l)+1;
        for(int j=l;j<=r;j++){
            sum=sum+j;
        }
        avg=sum/n;
        cout<<avg<<endl;
    }
}

