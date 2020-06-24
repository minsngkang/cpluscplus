#include<cstdio>
#include<cstring>
#include<stack>
// #include<iostream>
using namespace std;

// 차르 배열, 싸이즈 60만
char a[600000];
int main() {
    scanf("%s", a);
    // 스택 두개 생성, 좌스택 우스택
    stack<char> left, right;
    
    // 파이썬의 len(a)같은거네
    int n = strlen(a);
    int i;
    for (i=0;i<n;i++){
    // 차 배열에 하나씩 다 집언허기
        left.push(a[i]);
    }
    int m;
    scanf("%d", &m);
    while(m--){
        char what;
        scanf(" %c", &what);
        if (what == 'L'){
            if(!left.empty()){
                // ㅇㅇㅇ| 애초에 래프트에 다집어처넣다고!
                // 123(탑) | => left =123이고 right=없음 
                // 12 | 3 => left 12이고, right= 3
                // 1 | 2,3 => left 1이고 right = 2,3(톱쁘가 2가됨)
                // 컬서를 왼쪽으로 한칸 옮기면
                // 오른쪽스택이 하나 늘어나고
                // 왼쪽이 하나 빠지는거네
                // 낚아채기 그런거 없는듯..
                right.push(left.top());
                left.pop();
                printf("레프트 토쁘=%c\n", left.top());
                printf("라이트 토쁘=%c\n", right.top());
               // 더블백의 모양 < 짱박힌곳---D토쁘   컬서  토쁘D----짱박>
               // 그니까 왼쪽 토쁘에서 빼서 오른쪽 토쁘로 들어가는 거군!
            }
        }
    }
    // 아이오스트림 안쓰고 시스트디오의 프린트에푸 쓰겠다
    // printf("%s", a);
    // cout << a;
}
