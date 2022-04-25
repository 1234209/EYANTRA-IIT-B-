#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int setBits(int N) {
         int cnt;
       
       while(N>0){
          if((N&1)>0){
              cnt++;}
          N=N>>1;         
       }
       return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}