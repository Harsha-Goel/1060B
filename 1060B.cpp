#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int su(ll n){
    ll t=0;
    while(n!=0){
        t+=(n%10);
        n=n/10;
    }
    return t;
}

int main(int argc,char const * argv[]){
    ll n;
    cin>>n;
    ll x=0;
    if(n<9){
        cout<<n;
        return 0;
    }
    while((x*10+9)<=n){
        x=x*10+9;
    }
    cout<<(su(x)+su(n-x));
    
    return 0;
}