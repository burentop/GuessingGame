//
//  main.cpp
//  GuessingGame
//
//  Created by Brent Perry on 7/8/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    char response;
    int low = 1;
    int high = 100;
    bool solved = false;
    
    cout << "Please think of a number between 1 and 100.\n";
    cout << "\n";
    cout << "Got it? Good.\n";
    
    while (!solved) {
        if (high - low == 1) {
            cout << "Is the number you picked " << high << "? ('y' or 'n'): \n";
            cin >> response;
            if (response == 'y') {
                cout << "You picked the number " << high << ".\n";
                solved = true;
            } else {
                cout << "You picked the number " << low << ".\n";
                solved = true;
            }
        } else {
            cout << "Is the number you picked less than, or equal to, " << ((high + low) - 1) / 2 << "? ('y' or 'n'): \n";
            cin >> response;
            if (low == high) {
                cout << "You picked the number " << low << ".\n";
                solved = true;
            } else if (response == 'y') {
                high = ((high + low) - 1) / 2;
            } else {
                low = (((high + low) - 1) / 2) + 1;
            }
        }
    }
}
