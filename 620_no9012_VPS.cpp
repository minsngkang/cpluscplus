#include<iostream>
#include<stack>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

   // 와일룹을 맨 마지막에 써서 품어줬다. 
    while (n--){
    string str;
    stack<char> s;
    cin >> str;
    for ( char ch : str) {
        if (ch== '(') {
            s.push('(');
        }
        else if (ch== ')') {
            if (s.empty()){
                // cout << "NO1"; 겹친다!
                s.push(')');
                // 탑물질을 현상해서 비교하는 발상, 디지털 물질을 만진다는 느낌이랄까
            } else if ( s.top()==')' && !s.empty()){
                s.push(')');
            } else if( s.top() =='(' && !s.empty()){
                s.pop();
            }
        }

    }
    // 여기서 측정해도 스택은 똑같이 유지되고 있으니까 가능한 셈
    if (s.empty()){
            cout << "YES\n";
    } else if (!s.empty()){
            cout <<"NO\n";
    }

    }
}
