#include <iostream>
#include <string>
using namespace std;

int main(){
    string code = "";
    cin >> code;
    cout << code.substr(1,1) << code.substr(0,1) << endl;
    return 0;
}