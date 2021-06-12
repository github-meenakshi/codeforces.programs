#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int ans = 1;
        for(int i = 1;i<=k;i++){
            ans = (ans*n)%1000000007;
            }
            cout<<ans<<endl;
        }
        return 0;
    }