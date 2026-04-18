#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student: public Person{
    public:
    string name;
    int age;
};
class Teacher: public Person{
    public:
    string subject;
    double salary;
};
int main(){
   Teacher t1;
   t1.name="Tony stark";
   t1.subject="Engineering";
   Student s1;
   s1.name="Bruce wayne";
   cout << "Name: "<< s1.name << endl;
    cout << "Name: "<< t1.name << endl;
    cout << "Subject: "<< t1.subject << endl;

    return 0;
}