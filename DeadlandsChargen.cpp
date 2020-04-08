// DeadlandsChargen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <chrono>
#include "Deck.h"
#include "Generation.h"
#include "Character.h"
#include "DeadlandsChargen.h"

using namespace std;

int main()
{
    srand(time(0));
    
    Character newChar = Character();
    drawHand(newChar);

    cout << "\nDef: " << newChar.getDeftness() << " Nim: " << newChar.getNimbleness() << " Qui: " << newChar.getQuickness() << " Str: " << newChar.getStrength() << " Vig: " << newChar.getVigor();
    cout << "\nCog: " << newChar.getCognition() << " Kno: " << newChar.getKnowledge() << " Mie: " << newChar.getMien() << " Sma: " << newChar.getSmarts() << " Spi: " << newChar.getSpirit();
    cout << "\nPace: " << newChar.getPace() << " Grit: 0 Size: 6 Wind: " << newChar.getWind() << " AP: " << newChar.getAptPts() << endl;
    if (newChar.isMysterious()) cout << "All that, and an interesting past, too...\n";
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
