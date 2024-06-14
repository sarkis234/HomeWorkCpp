#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    int player;
    int comp;
    int currentStr = 0;
    int maxStr = 0;
    string path = "winstreak.txt";
    
    cout << "Welcome to the rock, papper, scissors game. Please choose the number(1- rock, 2 - papper, 3 - scissors, 4 - leave the game ";
    cin >> player;
    while (true) {
        if (player == 4) break;
        ifstream in(path);
        if (in.is_open()) {
            while (getline(in, path)) {
                for (int i = 0; path[i] != '\0'; i++) {
                    maxStr *= 10;
                    maxStr += path[i] - 48;
                }
            }
        }
        comp = 1 + rand() % 3;
        switch (player) {
        case 1:
            cout << "You pick rock. Bot pick ";
            switch (comp) {
            case 1:
                cout << "rock. Draw!";
                break;
            case 2:
                cout << "papper. You lose!";
                currentStr = 0;
                break;
            case 3:
                cout << "scissors. You win!";
                currentStr++;
                break;
            }
            break;
        case 2:
            cout << "You pick papper. Bot pick ";
            switch (comp) {
            case 1:
                cout << "rock. You win!";
                currentStr++;
                break;
            case 2:
                cout << "papper. Draw!";
                break;
            case 3:
                cout << "scissors. You lose!";
                currentStr = 0;
                break;
            }
            break;
        case 3:
            cout << "You pick scissors. Bot pick ";
            switch (comp) {
            case 1:
                cout << "rock. You lose!";
                currentStr = 0;
                break;
            case 2:
                cout << "papper. You win!";
                currentStr++;
                break;
            case 3:
                cout << "scissors. Draw";
                break;
            }
            break;
        default:
            cout << "incorrect number";
            break;
        }
        if (maxStr < currentStr) {
            maxStr = currentStr;
            cout << "You broke record!";
            ofstream out;
            out.open("winstreak.txt");
            out << maxStr;
            out.close();
        }
        cout << endl << "Current win streak: " << currentStr;
        cout << endl << "Please choose the number(1 - rock, 2 - papper, 3 - scissors, 4 - leave the game ";
        cin >> player;
    }
    

}
