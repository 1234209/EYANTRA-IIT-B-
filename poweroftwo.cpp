#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPowerofTwo(long long n){
        
        // Your code here    
          if(n==0){
           return false;
       }
       return((n&(n-1))==0);
   }
        
    };

int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; 
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}