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
        else if ( what == 'D') {
            if(!right.empty()){
                // 오려두기 같은 컨셉이라서 바로 뽑쁘하면 안되는 군!
                left.push(right.top());
                right.pop();
            }
        }
        else if (what == 'B'){
            if(!left.empty()){
                left.pop();
            }

        }
        else if (what == 'P'){
            char c;
            scanf( " %c", &c);
            left.push(c);
        }
    } // 이렇게 명령어 로직은 끝이났똬
    // printf("%s", a);
    // cout << a;

    // 명렁로직이 끝났고, 이제 남은 건 결과를 추력하는 것 뿐이다.
    // 그럴라면 일단 정렬을 해야겠다. 스택을 하나로 단일화
    while (!left.empty()) {
        // 오른쪽으로 다 몰아넣은담에 뽑쁘로 뽑으면 순서대로 나오네
        // 1 2 3 |4 5 6 ==> | 123456
        // 뽑쁘; 1 뽑쁘 2; 뽑쁘 3; ... 123456
        // 이렇게 안하고 왼쪽에 다 짱박은채로 뽑으면 654321.. 논노!
        right.push(left.top());
        left.pop(); 
    }
    // 결과 찍 기!
    while (!right.empty()) {
        printf("%c", right.top()); //여기서 씨는 문자열 약어
        right.pop();
    }
    printf("\n");
    return 0;
}
