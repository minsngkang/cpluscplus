//Hello World!

#include<iostream>
using namespace std;


// 함수는 리턴값을 가진다. 생략해도 되는건 보이드일 때만. 보이드 함수일 땐
// 컴파일러가 알아서 return;을 적어준다.
string go(){
    return "Hello World!";
    // 리턴값은 함수값이다. 즉 go()값이다.!
}
int main(){
    cout << go();
    return 0;
    // 메인함수는 return 0;를 생략해도 된다. 그래도 컴파일러가 찍어준다.
}
// 존 앤 정석대로 찍은 헬로월드다.
