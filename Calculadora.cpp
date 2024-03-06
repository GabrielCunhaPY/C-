#include <iostream>

using namespace std;

int main(){
    
    int choice, num1, num2, result;
    
    cout << "1.Add" << endl;
    cout << "2.sub" << endl;
    cout << "3.div" << endl;
    cout << "4.mult" << endl;
    cout << "Choose an operation" << endl;
    cin >> choice;
    cout << endl;
    cout << endl;
    cout << "Type num1:" << endl;
    cin >> num1;
    cout << "Type num2:" << endl;
    cin >> num2;
    
    if (choice == 1){
        result = num1+num2;
        cout << "Result:" << result;
    }
    else if (choice == 2){
        result = num1-num2;
        cout << "result:" << result;
    }
    else if (choice == 3){
        result = num1/num2;
        cout << "result:" << result;
    }
    else if (choice == 4){
        result = num1*num2;
        cout << "result:" << result;
    }
}
