// TL; DR. 리턴문은 도끼자국을 만드는 것. 고함수+메인함수 이렇게 짜기
#include<iostream>
// #include<cstdio>
using namespace std;


int memo[100]; // 이상한 쓰레기값들로 가득차있다..
int go(int n) {
   memo[0] = 0;
   memo[1] = 1;
   for (int i=2; i<=n; i++) {
       memo[i] = memo[i-1] + memo[i-2];
   }
   return memo[n]; // 리턴문의 역할이란 건 뭐지?.. 도끼자국을 찍어넣으란 말인가 (그런거같다.)

// 뭐가 들어있나 확인;
// for (int i=0;i<100;i++){
//     cout << memo[i] << '\n';
// }
}


// // 요거슨 cstdio 로 짠 인트메인
// // 함수 구조를 멀라서 ㄷㄷ... 이래서 전공자 혹은 전공이 필요한 거시구나..
// int main(){ 
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", go(n));
//     // cin >> n;
//     // cout << go(n);
//     // 뭐가 들어있나 확인;
//     // for (int i=0;i<100;i++){
//     //     cout << memo[i] << '\n';
//     // }
// }

// 요거슨 iostream으로 짠 인트메인
int main(){ 
    int n;
    cin >> n;
    cout << go(n);
    // 뭐가 들어있나 확인;
    // for (int i=0;i<100;i++){
    //     cout << memo[i] << '\n';
    // }
}

/*
 멤 오! 함수 구조를 보면
 int go(){...따따따};
 int main() {
     go(n);
 }
이런식으로 짜는 거시다.
*/
