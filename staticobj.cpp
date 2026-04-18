#include <iostream>
#include<string>
using namespace std;
class ABC{
    public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor\n";
    }
};
int main(){
    if(true){
        ABC obj; //or static ABC obj;
    }
    cout<<"End of the main function\n";
    return 0;
}