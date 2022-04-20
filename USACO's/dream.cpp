#include<bits/stdc++.h>

using namespace std;

int cows[15];

int main(){

    freopen("dream.in","r",stdin);
    freopen("dream.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long max;
    long long min;

    cin >> min >> max;
    
    for (long long i=min; i<=max; i++){
        string s;
	    long long n = i;
        stringstream flujo;
	    flujo << n;
	    s = flujo.str();
        
        for (long long i=0; i<s.size(); i++){
            long long k=s[i]-'0';
            cows[k]++;
        }
    }
    for (long long i=0; i<10; i++){
        cout << cows[i] << " ";
    }

    return 0;
}