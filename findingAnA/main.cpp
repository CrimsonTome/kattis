#include <iostream>
#include <string>
using namespace std;

int main(){
    string x = "";
    cin >> x;
    cout << x.substr(x.find('a'), x.length());
    return 0;
}