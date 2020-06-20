#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    int x;
    int m=0; // 스택에 들어있는 위치 인덱스같은거네
    cin >> n;
    stack<int> s; // 1씩 증가하는 애들담는 스땍
    string ans;

    while (n--){
        cin >> x;
        if (x>m){ // x가 인덱스보다 크면 같기 전까지 계속 푸시하고
            while (x>m){
                m+=1;
                s.push(m);
                cout << "뿌시함" << '\n';
                ans+='+';
            } // 인덱스랑 같아지는 순간에 뽑쁘해서 가로챈다.
            s.pop();
            ans+='-';
            cout << "뿌시 다하고 가로챔" << m << '\n';
        } else { // x가 인덱스보다 짝으믄 뽑쁘를 계속한다
            bool found = false;
            if (!s.empty()){ // 이건 뭐 끝까지 뽑브하라는 거지 ... 근데 여기 왜 와일로 바꾸면 안되지?
                int top = s.top(); // 타겟은 누구?
                s.pop(); // 빈게 아니니께 끝까지 폽쁘할것
                // 그냥 뽑쁘하면 안출력되는건가.. 그런건가 그저 없애는건가 킬인가..! ㅇㅇ 킬임 
                ans +='-'; // 폽쁘 할때마다 -기록
                cout << "커서 목표값이 나올때까지 뽑쁘 했음" << m << '\n';
                if (x==top){ // 그값이 딱 걸치면
                    found = true; // 파운드를 뜨루로 바꿈
                }

            }
            if (!found){
                cout << "NO" <<'\n';
                return 0;
            }
        }
    }

// 신기한 표현이로세
    for (auto x : ans) {
        cout << x << '\n';
    }
}
