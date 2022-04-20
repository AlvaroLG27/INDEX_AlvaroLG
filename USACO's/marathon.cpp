#include<bits/stdc++.h>

using namespace std;

long long N;
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
    freopen("marathon.in","r",stdin);
    freopen("marathon.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    cows.resize(N);
    
    for (int i=0; i<N; i++){
        long long a,b,c;
        cin >> c >> a >> b;
        cows[c].first=a;
        cows[c].second=b;
    }

    sort (cows.begin(), cows.end(), comp);
    
    for (int i=0; i<N; i++){
        if (cows[i].first>0 &&  cows[i].second>0){
            cout << i << cows[i].first << cows[i].second << endl;
        }
    }

    return 0;
}