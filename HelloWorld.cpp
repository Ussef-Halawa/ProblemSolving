#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define speed ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

void File() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isodd(int num){
    if(num % 2 != 0)
        return true;
    else 
        return false;
}

int main(){
    File();
    speed;
    /*
        t : number of test cases
        a : first number
        b : second number
        dif : differce between a & b
        ans : the answer
    */
    long long t, a, b, dif, ans;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> a >> b ;
        while(a != b){
            dif = a - b;
            if(dif < 0){
                dif *= -1;
                if(dif == 2){
                    ans += 2;
                    break;
                }
                if(isodd(dif)){
                    a += dif;
                    ans++;
                }
                else{
                    a += dif + 3;
                    ans++;
                }
            }
            else if(dif > 0){
                if(!(isodd(dif))){
                    a -= dif;
                    ans++;
                }
                else{
                    a -= dif + 1;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
 return 0;
}
