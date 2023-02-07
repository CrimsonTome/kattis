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
        // ASCII magic to convert a char of an int to its int value
        // this will only work for values 0-9
        // cprNum[i] holds the current character value of the integers we get from the input
        // let's substitute in a value for cprNum[i] as an example
        // '0' in ASCII is 48
        // we'll use the number 3, its ASCII value is 51
        // '3' - '0' = 51 - 48 = 3 
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