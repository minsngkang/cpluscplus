// 단어뒤집기

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        str += '\n';
        stack<char> s;
        for (char ch : str) {
            if (ch == ' ' || ch == '\n') {
                while (!s.empty()) {
                    cout << s.top(); // // 에스탑 해서, 더블백 출력을
                    s.pop(); // 얘는 그냥 지우는 역할만하는거군
                }
                cout << ch;
            } else {
                s.push(ch); // 사실여기가 메인인데, 불쉿문에다가 넣었네 간단하게 
            }
        }
    }
    return 0;
}
