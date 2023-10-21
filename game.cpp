#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int player1_score = 0;
    int player2_score = 0;
    srand(time(NULL));
    
  
    while (player1_score < 100 && player2_score < 100) {
    
        cout << "Player one Turn" << endl;
        int roll = rand() % 6 + 1; // Generate a random number from 1 to 6
        cout << "You rolled a " << roll << endl;
        player1_score += roll;
        cout << "Your score is now " << player1_pos << endl;
        
      
        if (player1_score >= 100) {
            cout << "Player one wins!" << endl;
            break;
        }
        
    
        cout << "Player two Turn" << endl;
        roll = rand() % 6 + 1;
        cout << "You rolled a " << roll << endl;
        player2_score += roll;
        cout << "Your score is now " << player2_score << endl;
        
        if (player2_score >= 100) {
            cout << "Player two wins!" << endl;
            break;
        }
    }
    
    return 0;
}
