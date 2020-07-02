#include <iostream>

int CodeA=1; int CodeB=2; int CodeC=3; 
int GuessA; int GuessB; int GuessC; int GuessSum; int GuessProduct; bool GuessCorrect;


int main()
{
    std::cout << "As your friend scowls in pain from the fallen royal hangman's blows,\n";
    std::cout << "You dare defy his stature, and challenge him to a chivalirous acuity duel of the traditional and deadly Royal Hangman game\n";
    std::cout << "However, he commands you to play a more civilized game of arthimetic rather then semantics\n";
    std::cout << "He declares 'thy must answer my five arthimitic riddles, each tougher than the last, thy shall only possess 3 guesses and a minute for each riddle.\n";
    std::cout << "Only then will your friend be free from anguish and I will face Robespierre's blade; otherwise thy and your peasant friend will perish!'\n\n";

    int CodeSum = CodeA + CodeB + CodeC; int CodeProduct = CodeA * CodeB * CodeC; std::string RiddleCount = "first";
    
    std::cout << " + For the " << RiddleCount << " riddle,\n";
    std::cout << " + name the three numbers which simultaneously possess a sum of " << CodeSum << " and a product of " << CodeProduct << "\n";
    std::cout << "Guess three numbers each seperated by a space in the line below:\n";

    std::cin >> GuessA; std::cin >> GuessB; std::cin >> GuessC;
    std::cout << "Thy guess of the three numbers is: (" << GuessA << ", " << GuessB << ", " << GuessC << ")\n\n";

    GuessSum = GuessA + GuessB + GuessC;  GuessProduct = GuessA * GuessB * GuessC;

    GuessCorrect = (CodeSum == GuessSum && CodeProduct == GuessProduct);

    if (GuessCorrect) {
        std::cout << "You win! Gah!";
    } else {
        std::cout << "You lose! Hah!";
    }
    return 0;
}