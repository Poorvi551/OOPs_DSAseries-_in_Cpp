#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr= new double;
        *cgpaPtr=cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Shradha", 8.9);
    Student s2(s1); // Shallow Copy
    s1.getInfo();
    *(s2.cgpaPtr)=9.3; // Modifying s2's CGPA will affect s1's CGPA due to shallow copy
    s1.getInfo(); // s1's CGPA will also be 9.3
    s2.getInfo();
    return 0;
}