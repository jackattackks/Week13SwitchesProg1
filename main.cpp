//
//  main.cpp
//  Week13SwitchProg1
//
//  Created by Jackie on 4/18/21.
//


//Have the user enter a number between 0  and 10.
//Check that the user entered  a number in the correct range.
//Next, write a set of eleven separate if statements that checks the user input and prints out the written number.
//Example: if the user enters 0, then print out word ‘ZERO’
//Next, write a switch statement that does the same thing.

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Namr: Jackie Ocaña - Prog1 - April 18, 2021" << endl;
    cout << endl;
    cout << "Enter a number between 0 and 10: ";
    cin >> num;
    
    if (num < 0 || num > 10){
        cout << "Number you entered is invalid. ";
    }else{
        if (num == 0){
            cout << "ZERO";
        } else if(num == 1){
            cout << "ONE";
        }else if(num == 2){
            cout << "TWO";
        }else if(num == 3){
            cout << "THREE";
        }else if(num == 4){
            cout << "FOUR";
        }else if(num == 5){
            cout << "FIVE";
        }else if(num == 6){
            cout << "SIX";
        }else if(num == 7){
            cout << "SEVEN";
        }else if(num == 8){
            cout << "EIGHT";
        }else if(num == 9){
            cout << "NINE";
        }else if(num == 10){
            cout << "TEN";
        }
    }//END NUMBER CHECK
    
    cout << endl;
    
    switch(num){
        case 0:
            cout << "ZERO";     break;
        case 1:
            cout << "ONE";      break;
        case 2:
            cout << "TWO";      break;
        case 3:
            cout << "THREE";    break;
        case 4:
            cout << "FOUR";     break;
        case 5:
            cout << "FIVE";     break;
        case 6:
            cout << "SIX";      break;
        case 7:
            cout << "SEVEN";    break;
        case 8:
            cout << "EIGHT";    break;
        case 9:
            cout << "NINE";     break;
        case 10:
            cout << "TEN";      break;
        default:
            cout << "Number you entered is invalid. ";
    }
    
    cout << endl;
}
