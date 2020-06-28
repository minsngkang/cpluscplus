#include<iostream>
using namespace std;

int memo[100];

int factorial(int n) {
    if (n <= 0) {
        return 1;
    }
    
    else{
        int n_minus_fact = factorial(n-1);
        // return n_minus_fact * n; 요거를 메모로 대체한 거시 군..!
        // 대체된 문은 아래의 것!
        memo[n] = n_minus_fact*n;
        return memo[n]; // 기록하세여!
    }

}

int main(){
    // factorial(5);
    factorial(10); // == > 조사하세여!라는 말뜻이군
    // 빡토리얼 실행 안하고 그냥 멤오 5찍으면 0나오징 ㅋ, 기록행위를 해야해서 
    cout << memo[8]; // 그중에서 8번까지 결과나온거 찍으세여 ! 같은거군 
}
