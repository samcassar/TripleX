#include <iostream>

int CodeA; int CodeB; int CodeC; int checkBranchUpdates;
int GuessA; int GuessB; int GuessC; int GuessSum; int GuessProduct; bool GuessCorrect;
void PlayGame(); void PrintIntroduction(); bool BattleAgain(); int Choice; void IsGuessCorrect();

int main()
{   
    PlayGame();
    
    return 0;
}

void PlayGame() {
    PrintIntroduction();

    IsGuessCorrect();

    

    if (BattleAgain()) {
        PlayGame();
    } else {
        std::cout << "\nYou guys become best friends creating a new royal kingdom established through arithmetic duels rather then semantic hangman duels.\n\nTHE END\n";
        return;
    }
}

void PrintIntroduction() {
    std::cout << "\nAs your friend scowls in pain from the fallen royal hangman's blows,\n";
    std::cout << "You dare defy his stature, and challenge him to a chivalirous acuity duel of the traditional and deadly Royal Hangman game\n";
    std::cout << "However, he commands you to play a more civilized game of arthimetic rather then semantics\n";
    std::cout << "He declares \"thy must answer my five arthimitic riddles, each tougher than the last, thy shall only possess 3 guesses and a minute for each riddle.\n";
    std::cout << "Only then will your friend be free from anguish and I will face Robespierre's blade; otherwise thy and your peasant friend will perish!\n\n";
    std::cout << "For the first riddle, ";
}

void IsGuessCorrect() {

    int CodeSum = CodeA + CodeB + CodeC; int CodeProduct = CodeA * CodeB * CodeC; std::string RiddleCount = "first HOW TODO LIST OF stuff";
    
    
    std::cout << "name the three numbers which simultaneously possess a sum of " << CodeSum << " and a product of " << CodeProduct << "\n";
    std::cout << "Guess three numbers each seperated by a space in the line below:\n";

    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "Thy guess of the three numbers is: (" << GuessA << ", " << GuessB << ", " << GuessC << ")\n\n";

    GuessSum = GuessA + GuessB + GuessC;  GuessProduct = GuessA * GuessB * GuessC;

    GuessCorrect = (CodeSum == GuessSum && CodeProduct == GuessProduct);
}

bool BattleAgain() {
    std::cout << "Oh no the dishonored hangman somehow survived and has grabbed another one of your friends! What do you do?\n\n";
    std::cout << "Option 1: Exclaim heroically, \"You honorless coward I challenge you again!\n";
    std::cout << "Option 2: Exclaim in awe, \"Damn Bro you survived that guillotine with your muscular neck, that's pretty hardcore. You seem chill let's grab a drink at the nearby tavern and besides that guy you grabbed slept with my wife anyways.\"\n\n";
    std::cout << "Input 1 or 2 in the line below to choose your option:\n"; std::cin >> Choice;
    if (Choice == 1) {return true;} else {return false;}
}