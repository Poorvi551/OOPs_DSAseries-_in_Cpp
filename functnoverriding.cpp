#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        cout<<"non-parameterized\n";
    }
    Student(string name){
        cout<<"parameterized\n";
    }
};
class Print{
    public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }
     void show(char ch){
        cout<<"char:"<<ch<<endl;
    }
};
class Parent{
    public:
    void getInfo(){
        cout<<"Parent class\n";
    }
};
class Child:public Parent{
    public:
    void getInfo(){
        cout<<"Child class\n";
    }
};
int main(){
    Child c1;
    c1.getInfo();
    return 0;
} 