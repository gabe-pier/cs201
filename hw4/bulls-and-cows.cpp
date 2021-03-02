/**
* bulls-and-cows.cpp
* Gabe Pier
* 1 Mar 2021
* hw4 for cs 201
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "bulls-and-cows.h"
using namespace std;

/*Gets a 4 digit number*/
string generate_number() {
    srand(time(0));
    int secret_number = rand() % 9000 + 1000;
    return to_string(secret_number);
}

/*takes the users guess*/
string get_user_input(string& answer) {
    int guess = 0;
    cin >> guess;
    if (guess < 0) {
        cout << "negative number detected. the answer is: " << answer << endl;
    }
    while (guess < 1000 || guess > 9999) {
        cout << "Invalid input!" << endl;
        cin >> guess;
    }
    return to_string(guess);
}

/*calculates the number of bulls*/
int count_bulls(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (secret_string[i] == guess_string[i]) {
            count++;
            secret_digit_used[i] = true;
            guess_digit_used[i] = true;
        }
    }
    return count;
}

/*calculates the number of cows*/
int count_cows(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (secret_digit_used[i] || guess_digit_used[j])
                continue;

            if (secret_string[i] == guess_string[j]) {
                count++;
                secret_digit_used[i] = true;
                guess_digit_used[j] = true;
            }
        }
    }

    return count;
}

/*main function to execute the game*/
int bulls_cows() {
    string secret_string = generate_number();
    cout << "Start guessing between 1000 - 9999 " << endl;

    int nturns = 0;
    while (true) {
        string guess_string = get_user_input(secret_string);
        nturns++;
        bool secret_digit_used[4] = { false, false, false, false };
        bool guess_digit_used[4] = { false, false, false, false };
        int bulls = count_bulls(secret_string, guess_string, secret_digit_used, guess_digit_used);
        if (bulls == 4) {
            cout << "Congratulations, you did it!" << endl;
            break;
        }

        int cows = count_cows(secret_string, guess_string, secret_digit_used, guess_digit_used);
        cout <<"Your guess " << guess_string << " has " << bulls << " bulls and " << cows << " cows." << endl;
    }
    cout << "Secret number is " << secret_string << endl;

    return 0;
}