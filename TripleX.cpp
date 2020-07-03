#include <iostream>
#include <ctime>

int CodeA; int CodeB; int CodeC;
int GuessA; int GuessB; int GuessC; int GuessSum; int GuessProduct; bool GuessCorrect; 
void PlayGame(); void PrintIntroduction(); bool BattleAgain(); int Choice; void IsGuessCorrect();
int RiddleCount = 1; int RandNumGenerator(int RiddleCount); int RiddleLimit = 6;

int main()
{   
    PlayGame();
    
    return 0;
}

void PlayGame() {
    srand(time(NULL)); //rando magic

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
    std::cout << "He declares \"thy must answer my " << RiddleLimit << " arthimitic riddles, each tougher than the last, thy shall only possess 3 guesses and a minute for each riddle.\n";
    std::cout << "Only then will your friend be free from anguish and I will face Robespierre's blade; otherwise thy and your peasant friend will perish!\n\n";
    
}

void IsGuessCorrect() {
    RiddleCount++;

    //Generates this riddle's code
    CodeA = RandNumGenerator(RiddleCount); CodeB = RandNumGenerator(RiddleCount); CodeC = RandNumGenerator(RiddleCount);

    int CodeSum = CodeA + CodeB + CodeC; int CodeProduct = CodeA * CodeB * CodeC; 
    
    std::cout << "For riddle #" << RiddleCount;
    std::cout << "name the three numbers which simultaneously possess:\n\n A sum of " << CodeSum << " and A product of " << CodeProduct << "\n\n";
    std::cout << "Guess three numbers each seperated by a space in the line below:\n";

    std::cin >> GuessA >> GuessB >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;  GuessProduct = GuessA * GuessB * GuessC;

    GuessCorrect = (CodeSum == GuessSum && CodeProduct == GuessProduct);

    if (GuessCorrect) {}

}

int RandNumGenerator(int RiddleCount) { rand() % RiddleCount   + RiddleCount;} //when | (RC = 2, [3,2]), (RC = 3, [5,3]), (RC = 4, [7,4]), (RC = 5, [9,5]), (RC = 6, [11,6]), etc |

bool BattleAgain() {
    std::cout << "Oh no the dishonored hangman somehow survived and has grabbed another one of your friends! What do you do?\n\n";
    std::cout << "Option 1: Exclaim heroically, \"You honorless coward I challenge you again!\n";
    std::cout << "Option 2: Exclaim in awe, \"Damn Bro you survived that guillotine with your muscular neck, that's pretty hardcore. You seem chill let's grab a drink at the nearby tavern and besides that guy you grabbed slept with my wife anyways.\"\n\n";
    std::cout << "Input 1 or 2 in the line below to choose your option:\n"; std::cin >> Choice;
    if (Choice == 1) {return true;} else {return false;}
}

/* TODO:
DONE -Make each CodeA/b/c into a random number 
DONE -make RiddleCount increase per next riddle
DONE -set up level difficulty to scale the range and difficulty of randomNumGen
-Go through the program in your head to make sure Riddle# checks out




Misc:
-Add a RiddleCount/RiddleLimit for each riddle
-add num of guesses left that updates every wrong guess
-add a state where if guesses == 0 then game go to the ending BattleAgain()
-create a loss BattleAgain() ending

*/