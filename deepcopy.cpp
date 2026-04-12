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
        this->cgpaPtr = new double;
        *this->cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Shradha", 8.9);
    Student s2(s1); // Deep Copy
    s1.getInfo();
    *(s2.cgpaPtr)=9.3; // Modifying s2's CGPA will not affect s1's CGPA due to deep copy
    s2.name="David"; // Modifying s2's name will not affect s1's name due to deep copy
    s2.getInfo();
    return 0;
}