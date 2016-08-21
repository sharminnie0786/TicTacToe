//
//  TicTacToe2.cpp
//  TicTacToe
//
//  Created by Sharmyn Kayani on 18/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

#include <iostream>
using namespace std;

//Global Variables 
string user1, user2;
string identifier1, identifier2;
bool idenDone = false;
bool chooseCell = false;
int cellNumber;
string winner;
string *cells;


//Welcome User
string welcomeUser() {
    
    cout << "---------- WELCOME SCREEN -------------" << endl;
    
    cout << "Welcome to Tic Tac Toe! Please enter name of User 1: ";
    cin >> user1;
    
    cout << "Welcome to Tic Tac Toe! Please enter name of User 2: ";
    cin >> user2;
    
    cout << endl;
    
    return user1, user2;
}

//User's select Identifier
string identifier() {
    
    cout << "---------- IDENTFIIER -------------" << endl;
    
    cout << user1 << ", please choose an identifier (O or X): ";
    cin >> identifier1;
    while (idenDone == false) {
    if (identifier1 == "X" || identifier1 == "O") {
        idenDone = true;
        break;
    } else {
        cout << "Not acceptable, please choose from O or X: ";
        cin >> identifier1;
        }
    }
    
    idenDone = false;
    
    cout << user2 << ", please choose an identifier (O or X): ";
    cin >> identifier2;
    while (idenDone == false) {
        if (identifier2 == "X" || identifier2 == "O") {
            idenDone = true;
            break;
        } else {
            cout << "Not acceptable, please choose from O or X: ";
            cin >> identifier2;
        }
    }
    
    return identifier1, identifier2;
}

void printGrid() {
    
    cout << endl;
    cout << "---------- PRINT GRID -------------" << endl;

    for (int i = 0, index=0; i < 3; i++) {
        for (int j = 0; j < 3; j++, index++) {
            cout << "[ " << cells[index] << " ]" << " ";
        }
        cout << endl;
    }
}

//Choose Cells
void cellChosen() {
    cout << endl;
    cout << "---------- LET THE GAMES BEGIN -------------" << endl;
    int count = 0;
    
    while (count <= 8) {
    cout << user1 << ", please select an index to put " << identifier1 << " (cells 1-9): ";
    cin >> cellNumber;
        cells[cellNumber - 1] = identifier1;
        printGrid();
        count++;
        cout << endl;
  
//        for (int i = 0; i < 9; i++) {
//            if (cells[cellNumber - 1] == identifier1 || cells[cellNumber - 1] == identifier2) {
//                cout << "Please choose another cell: ";
//                cin >> cellNumber;
//            } else {
//                cells[cellNumber - 1] = identifier1;
//                printGrid();
//                count++;
//            }
        
    cout << user2 << ", please select an index to put " << identifier2 << " (cells 1-9): ";
    cin >> cellNumber;
        cells[cellNumber - 1] = identifier2;
        printGrid();
        count++;
        cout << endl;
        
//        for (int i = 0; i < 9; i++) {
//            if (cells[cellNumber - 1] == identifier1 || cells[cellNumber - 1] == identifier2) {
//                cout << "Please choose another cell: ";
//                cin >> cellNumber;
//            } else {
//                cells[cellNumber - 1] = identifier2;
//                printGrid();
//                count++;
//            }
    }
}

//Decides the winner
void decideWinner() {
    
    //User 1 Wins
    if (cells[0] == identifier1 && cells[1] == identifier1 && cells[2] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[3] == identifier1 && cells[4] == identifier1 && cells[5] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[6] == identifier1 && cells[7] == identifier1 && cells[8] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[0] == identifier1 && cells[3] == identifier1 && cells[6] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[1] == identifier1 && cells[4] == identifier1 && cells[7] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[2] == identifier1 && cells[5] == identifier1 && cells[8] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[0] == identifier1 && cells[4] == identifier1 && cells[8] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    } else if (cells[2] == identifier1 && cells[4] == identifier1 && cells[6] == identifier1) {
        cout << "Congrats! " << user1 << " won." << endl;
    }
    
    //User 2 Wins
    if (cells[0] == identifier2 && cells[1] == identifier2 && cells[2] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[3] == identifier2 && cells[4] == identifier2 && cells[5] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[6] == identifier2 && cells[7] == identifier2 && cells[8] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[0] == identifier2 && cells[3] == identifier2 && cells[6] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[1] == identifier2 && cells[4] == identifier2 && cells[7] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[2] == identifier2 && cells[5] == identifier2 && cells[8] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[0] == identifier2 && cells[4] == identifier2 && cells[8] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    } else if (cells[2] == identifier2 && cells[4] == identifier2 && cells[6] == identifier2) {
        cout << "Congrats! " << user2 << " won." << endl;
    }

}


int main() {
    cells = new string[9];
    
    welcomeUser();
    identifier();
    printGrid();
    cellChosen();
    decideWinner();
    
    delete []cells;
    
    return 0;
    
}
