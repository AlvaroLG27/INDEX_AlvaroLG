#include<bits/stdc++.h>

using namespace std;

bool check(string s){
    int k;
    char c;
    int m = s.size();
    stack<char>  dance;
    k = 0;
    while(k < m){
        c = s[k];
        if(c == '>')dance.push('>');
        else{
            if(dance.empty())return false;
            else{
                dance.pop();
            }
        }
        k++;
    }
    return dance.empty();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("dance2.in","r",stdin);
    freopen("dance2.out","w",stdout);

    int N,K;
    string val;

    cin >> N;

    for (int i=0; i<N; i++){
        cin >> K;
        cin >> val;
        if(check(val)==true){
            cout<<"legal" << endl;
        }
        else {
            cout<<"illegal" << endl;
        }
    }

    return 0;
}
