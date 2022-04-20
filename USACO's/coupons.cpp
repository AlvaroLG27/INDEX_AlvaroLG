#include<bits/stdc++.h>

using namespace std;

long long N, K, B;
vector < pair <long, long> >cows;

int comp(pair <int,int>a, pair <int,int>b){
    if (a.second<b.second)return 1;
    else if (a.second==b.second){
        if (a.first>=b.first)return 1;
        else return 0;
    }
    else return 0;
}



int main(){

    freopen("coupons.in","r",stdin);
    freopen("coupons.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K >> B;
    long long repos=0;

    cows.resize(N);
    
    for (int i=0; i<N; i++){
        long long a,b;
        cin >> a >> b;
        cows[i].first=a;
        cows[i].second=b;
    }

    sort (cows.begin(), cows.end(), comp);
    
    long long sum=0;
    for (int i=0; i<K; i++){
        if (sum+cows[i].second<B){
            repos++;
            sum+=cows[i].second;
        }
    }
    for (int i=K; i<N; i++){
        if (sum+cows[i].first<B){
            repos++;
            sum+=cows[i].first;
        }
    }
    cout << repos;

    return 0;
}