#include <iostream>
#include <string>
using namespace std;

int main(){
    string number = "";
    cin >> number;
    if (number.substr(0,3) == "555"){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    
    return 0;
}