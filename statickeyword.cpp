#include <iostream>
#include<string>
using namespace std;
void func(){
    int x=0;  // or static int x=0;
    cout<<"x:"<<x<<endl;
    x++;   
}
int main(){
    func();
    func();
    func();
}