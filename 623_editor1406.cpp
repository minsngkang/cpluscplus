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
    // 아이오스트림 안쓰고 시스트디오의 프린트에푸 쓰겠다
    printf("%s", a);
    // cout << a;
}
