#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> arr(n,true);
    for (int i = 2; i<=n; i++)
    {
        if(arr[i]==true){
            for (int i =1*2; i<=n; i+=i)
            {
                arr[i]=false;
            }
        }
    }
    

}