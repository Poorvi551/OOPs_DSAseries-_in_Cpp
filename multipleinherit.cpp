#include<iostream>
#include<string>
using namespace std;
 class  Student{
    public:
    string name;
    int age;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA:public Student, public Teacher{

};
int main(){
   TA t1;
   t1.name="Tony stark";
   t1.subject="Engineering";
    cout << "Name: "<< t1.name << endl;
    cout << "Subject: "<< t1.subject << endl;

    return 0;
}