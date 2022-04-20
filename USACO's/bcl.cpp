#include<bits/stdc++.h>

using namespace std;

char cows[2010];
string s="";
int ini;
int fin;

string best (int i, int j){
    if (cows[i] < cows[j]){
        string val="";
        val = cows[i];
        ini++;
        return val;
    }
    else if (cows[j] < cows[i]){
        string val="";
        val = cows[j];
        fin--;
        return val;
    }
    else if (cows[i]==cows[j]){
        string real="";
        string copy="";
        for (int k=i; k<=j; k++){
            real+=cows[k];
        }
        copy=real;
        reverse(copy.begin(), copy.end());
        if (real <= copy){
            string val="";
            val += cows[i];
            ini ++;
            return val;
        }
        else{
            string val="";
            val += cows[j];
            fin --;
            return val;
        }
    }
}

int main(){
    freopen("bcl.in","r",stdin);
    freopen("bcl.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    ini=0;
    fin=N-1;

    for (int i=0; i<N; i++){
        cin >> cows[i];
    }
    while (ini < fin){
        s+=best(ini, fin); 
    }
    s+=cows[ini];

    for (int i=0; i<s.size(); i+=80){
        string ll;
        if (i+80 >= s.size()){
            ll=s.substr(i);
            cout << ll << "\n";
        }
        else{
            ll=s.substr(i, 80);
            cout << ll << "\n";
        }
    }

    return 0;
}