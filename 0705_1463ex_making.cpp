#include<iostream>
#include<algorithm>
using namespace std;

int memo[1000001];

int go(int n){
    if (n<=1) {
        memo[n] = 0;
        return memo[n];
    }
    int temp;

    // 이 부분이 없으면 시간 초과 뜬다(색인)
    if(memo[n]>0){
        return memo[n];
    }
    // 여까지 이 부분이 없으면 시간 초과 뜬다(색인)

    if (n>=2){
        memo[n] = go(n-1) +1;
        // return memo[n];
    }
    if(n%2==0){
        temp = go(n/2) + 1;
        if (memo[n] > temp) {
            // return temp;
            memo[n] =temp;
        }
        // return memo[n];
    }
    if(n%3 ==0){
        temp = go(n/3) + 1;
        if (memo[n] > temp){
            memo[n] = temp;
        }
    }

    // return min({cnt, cnt2});
    return memo[n];
};

int main() {
    int target;
    cin >> target;
    go(target);
    cout << memo[target]<< "\n";
    // for (int i=1;i<=100;i++){
    //     if (memo[i]!=0){
    //     cout << "i=" << i << "일때 멤오값은 "<< memo[i] << "\n";
    //     }
    // }
}
