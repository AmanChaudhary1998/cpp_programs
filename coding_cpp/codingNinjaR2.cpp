//#include<bits/stdc++.h> 
//using namespace std; 
//  
//// utility function to calculate a%m 
//unsigned int aModM(unsigned int a, unsigned int mod) 
//{ 
//    unsigned int number = 0; 
//    for (unsigned int i = 0; i < a; i++) 
//    { 
//    
//        number = ((number*10) + a); 
//        number %= mod; 
//    } 
//    cout<<"number = "+number<<endl;
//    return number; 
//} 
//  
//// Returns find (a^b) % m 
//unsigned int ApowBmodM(unsigned int a, unsigned int sum, unsigned int m) 
//{ 
//    // Find a%m 
//    unsigned int ans = aModM(a, m); 
//    unsigned int mul = ans; 
//    
//    cout<<"mul = "+mul<<endl;
//  
//    // now multiply ans by b-1 times and take 
//    // mod with m 
//    for (unsigned int i=1; i<sum; i++) 
//        ans = (ans*mul) % m; 
//  
//  	
//    return ans; 
//} 
//  
//// Driver program to run the case 
//int main() 
//{ 
//	
//	int a,n,value;
//    unsigned int sum = 0;
//    cin>>a;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//    	cin>>arr[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		value = arr[i];
//		sum = sum*10+value;
//	}
//	
//    unsigned int m=1337; 
//    
//    cout << ApowBmodM(a, sum, m); 
//    return 0; 
//}
