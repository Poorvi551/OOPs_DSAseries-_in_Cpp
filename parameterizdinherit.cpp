#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Student:public Person{
    public:
    int rollno;
    Student(string name,int age, int rollno): Person(name,age){  // calling constructor of parent class so no need to write the data type of name and age here
        this->rollno=rollno;
    }
    void getInfo(){
        cout << "Name: "<< name << endl;
        cout << "Age: "<< age << endl;
        cout << "Roll No: "<< rollno << endl;
    }
};
int main(){
    Student s1("Poorvi",21,101);
    
    s1.getInfo();
    return 0;
}