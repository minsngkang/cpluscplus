// 벡터를 생성자를 통해서 복사해서 두개만들어보자_얕은복사를 한다. 메모리때문에 에러가 날 수 있다
// 소멸자에서 v1 메모리를 없앤다음에 v2메모리를 다시 없애려고하면 ==> 허용되지 않은 접근이기 때문

#include <iostream>
#include <cstring>
using namespace std;

class VecF {
    int n;
    float* arr;
public:
VecF(int d, float* a=nullptr) :n{d} {
    arr = new float[d];
    if (a) memcpy(arr, a, sizeof(float)*n);
}
~VecF(){
    delete [] arr;
}
VecF add(const VecF& fv) const{
    VecF tmp(n);
    for (int i=0; i<n; i++)
        tmp.arr[i] = arr[i]+fv.arr[i];
        return tmp;
}
void print() const{
    cout << "[ ";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
    cout << "]";
};
};

int main() 
{
float a[3] = {1,2,3};
VecF v1(3,a);
VecF v2(v1);
v1.print();
cout << endl;
v2.print();
cout << endl;
return 0;
}

