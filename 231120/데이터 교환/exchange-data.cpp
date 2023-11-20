#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp1 = b;
    b = a;
    int tmp2 = c;
    c = tmp1;
    a = tmp2;
    cout<<a<<"\n"<<b<<"\n"<<c;
    return 0;
}