// 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
// 고등학교때 배운 계차수열. 월 마다 산출.
    int calanderToGoIndex[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
// {0,3,0,3,2,3,2,3,3,2,3,2,3};라고 작성해도 무방(mod7)
    int i;
// dayOfMonth를 선언만 하고 0으로 값을 초기화하지 않으면 무엇이 들어있을지 모르게 된다. 주의.
  //int dayOfMonth; <<== 내가 틀린부분. 이러면 안된다. 초기값 초기화 필요. 
    int dayOfMonth=0;
    string weekday[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    for (i=0;i<x;i++){
        dayOfMonth+=calanderToGoIndex[i];
    } 
    cout << weekday[(dayOfMonth+y)%7] << endl;
return 0;
// 1월 1일은 MON을 출력해야 한다. 
}
