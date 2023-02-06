#include <iostream>
#include <string>
using namespace std;

int main(){
    string cprNum = "";
    cin >> cprNum;
    cprNum  = cprNum.erase(cprNum.find('-'), 1);
    int sum = 0;
    int con = 0;
    int mult[] = {4,3,2,7,6,5,4,3,2,1};
    for (int i = 0; i< cprNum.length(); ++i){
        con = cprNum[i] - '0';
        sum += con * mult[i];
    }
    if (sum % 11 == 0){
        cout << "1" << endl; 
    }
    else{
        cout << "0" << endl;
    }
}