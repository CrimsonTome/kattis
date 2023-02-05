#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int y;
    cin >> y;
    if (x>0){
        if (y<0){
            cout << "4" << endl;
        }
        else{
            cout << "1" << endl;
        }
    }
    else if (y>0){
            cout << "2" << endl;
        }
        else {
            cout << "3" << endl;
        }
    return 0;
}