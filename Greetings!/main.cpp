#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting = "";
    cin >> greeting;
    int length = greeting.length() - 2;
    cout << "h";
    for (int x = 0; x<length * 2; ++x)
    {
        cout << "e";
    }
    cout << "y" << endl;
    
    return 0;
}