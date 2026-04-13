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
    // Destructor to free the dynamically allocated memory
    ~Student(){
        cout<< "Hi, I deletes everything"<< endl;
        delete cgpaPtr; // Free the dynamically allocated memory
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Shradha", 8.9);
    s1.getInfo();
    return 0;
}