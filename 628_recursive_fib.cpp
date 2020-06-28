// if memo[n], return // return // 두개의 리턴문 차이가 
#include<iostream>
using namespace std;

int memo[100];
int go(int n){

    if (n<=1) {
        memo[n] =n;
        return memo[n];
        //초기에 이게 없으니까 1=1이게 안 뜬듯.
    }
    else {
        // 이게 왜 필요하지??
        // 처음 도착한 애는 memo[n]이 영보다 큰지작은지 조사하러갈거다.
        // => 그러면 fib_1, fib_2를 합친수를 계산할거임
        // ==> 그럴라면 fib_1, fib_2를 알아야 함
        // ====> 그럴라믄 그럴라면 go(1) go(2)로 재진입해야함 
        // ======> 그값들은 맨아래 리턴에서 구해짐(맨아래리턴은 값 구하는데 초점이 있음!)
        // ========> 그렇게찾은 리턴값(콜쏴이트)을 if문 안에다가 넣음,
        // ==========> 맞음. 그럼 다음 스텝진행.
        // =============> 이프 덴의 리턴으로 실제로 기록이 진행됨. (이프 리턴은 값을 기록하는데 초점이 있음!)
        if (memo[n]>0){
            return memo[n];
        }// 왜필요하지 여기까지가? 이거 없으면 시간초과뜨던데 

        int fib_minus_1 = go(n-1);
        int fib_minus_2 = go(n-2);
        memo[n] = fib_minus_1 + fib_minus_2;
        // memo[n] = go(n-1) + go(n-2);
        return memo[n]; // 문맥상 바깥이 더 자연스럽긴 한데 안에다 넣어도 별 상관은 없네!
    }
    // return memo[n]; 
}


int main(){
    int target;
    cin >> target;
    go(target);
    cout << memo[target];
}
