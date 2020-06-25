#include <cstdio>
#include <queue>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    queue<int> q;
    for (int i=1; i<=n; i++) {
        q.push(i);
        // 그니까 번지수에 1,2,3,4, 이렇게 순서대로 다 들어가네 자연수임..
        // 말그대로 큐에 1,2,3,4, 이런식으로 숫자만 쌓아두는 것이네
    }
    while(!q.empty()){
    printf("%d\n", q.front());
    q.pop();
    }

    return 0;
}
