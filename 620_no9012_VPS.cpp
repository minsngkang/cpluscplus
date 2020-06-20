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
            } else if ( s.top()==')' && !s.empty()){
                s.push(')');
            } else if( s.top() =='(' && !s.empty()){
                s.pop();
            }
        }

    }
    if (s.empty()){
            cout << "YES\n";
    } else if (!s.empty()){
            cout <<"NO\n";
    }

    }
}
