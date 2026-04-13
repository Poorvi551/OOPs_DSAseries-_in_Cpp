#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    Person(){
        cout<<"Parent constructor called..."<<endl;
    }
};
class Student:public Person{
    public:
    int rollno;
    Student(){
        cout<<"Child Constructor called..."<< endl;
    }
    void getInfo(){
        cout << "Name: "<< name << endl;
        cout << "Age: "<< age << endl;
        cout << "Roll No: "<< rollno << endl;
    }
};
int main(){
    Student s1;
    s1.name="Poorvi";
    s1.age=21;
    s1.rollno=101;
    s1.getInfo();
    return 0;
}