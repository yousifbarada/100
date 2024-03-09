// Program: tow players evrey player pick a number from 1-10 score=player1 + player2 and when th score reach 100 player made score 100 wins!!!
// Author:  yousif edris lotfu eris        20230480    s5;
// Version: Number of program versionis 2.0
// Date:    2/3/2024
#include <iostream>
using namespace std;
int main() {
    int score = 0;
    int final_score = 100;
    int f = 0;

    while (score != final_score) {
     cout << "PLAYER 1 ENTER A NUM: ";
       cin >> f;

        while (f < 0 || f > 9) {
          cout << "ENTER VALID NUMBER: ";
          cin >> f;
        }

        while (score + f < 0 || score + f > 100) {
cout << "ENTER VALID NUMBER: ";
         cin >> f;
        }

        score += f;

        if (score == final_score) {
           cout << "Player 1 wins!!!" << endl;
            break;
        }

        cout << score << endl;

       cout << "PLAYER 2 ENTER A NUM: ";
      cin >> f;

        while (f < 0 || f > 9) {
           cout << "ENTER VALID NUMBER: ";
           cin >> f;
        }

        while (score + f < 0 || score + f > 100) {
           cout << "ENTER VALID NUMBER: ";
            cin >> f;
        }

        score += f;

        if (score == final_score) {
           cout << "Player 2 wins!!!" << endl;
            break;
        }

        cout << score <<endl;
    }

    cout << "Made by Yousif Edris!!!!!!" <<endl;

    return 0;
}
