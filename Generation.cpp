#include "Generation.h"
#include "Deck.h"
#include "Character.h"

using namespace std;

void drawHand(Character & target) {
	vector<Card> hand;
	Card holder;
	Deck newDeck = Deck();
	int pos;
	vector<int> distribution;
	int dieHolder;
	int sizeHolder;

	for (int i = 0; i < 12; i++) {
		hand.push_back(newDeck.draw());
	}

	cout << "YOUR HAND: 0: ";
	for (int i = 0; i < 11; i++) {
		hand[i].printCard();
		cout << " | " << i+1 << ": ";
	}
	hand[11].printCard();
	
	cout << "\n\nPlease enter the number of a card to discard.\n";
	while (1) {
		cin >> pos;
		if (hand[pos].getVal() == 2 || hand[pos].getVal() == 0) cout << "Sorry, partner. No avoiding this one.\n";
		else { 
			hand.erase(hand.begin() + pos); 
			break; 
		}
	}
	cout << "YOUR HAND: 0: ";
	for (int i = 0; i < 10; i++) {
		hand[i].printCard();
		cout << " | " << i+1 << ": ";
	}
	hand[10].printCard();

	cout << "\n\nPlease enter the number of a card to discard.\n";
	while (1) {
		cin >> pos;
		if (hand[pos].getVal() == 2 || hand[pos].getVal() == 0) cout << "Sorry, partner. No avoiding this one.\n";
		else {
			hand.erase(hand.begin() + pos);
			break;
		}
	}

	cout << "YOUR HAND: 0: ";
	for (int i = 0; i < 9; i++) {
		hand[i].printCard();
		cout << " | " << i+1 << ": ";
	}
	hand[9].printCard();

	cout << "\n\nPlease distribute your cards amongst your statistics:\n0: Deftness, 1: Nimbleness, 2: Quickness, 3: Strength, 4: Vigor\n5: Cognition, 6: Knowledge, 7: Mien, 8: Smarts, 9: Spirit\n";
	for (int i = 0; i < 10; i++) {
		cin >> pos;
		for (int j = 0; j < distribution.size(); j++) {
			if (pos == distribution[j]) {
				cout << "You already set that stat! Try again.\n";
				pos = -1;
			}
		}
		if (pos >= 0) distribution.push_back(pos);
		else i--;
	}

	for (int i = 0; i < 10; i++) {
		switch (hand[i].getSuit()) {
		case 0:
			dieHolder = 3;
			break;
		case 1:
			dieHolder = 2;
			break;
		case 2:
			dieHolder = 1;
			break;
		case 3:
			dieHolder = 4;
			break;
		default:
			holder = newDeck.draw();
			switch (holder.getSuit()) {
			case 0:
				dieHolder = 3;
				break;
			case 1:
				dieHolder = 2;
				break;
			case 2:
				dieHolder = 1;
				break;
			case 3:
				dieHolder = 4;
				break;
			//If you somehow draw two Jokers, this will fix the problem.
			default:
				holder = newDeck.draw();
				switch (holder.getSuit()) {
				case 0:
					dieHolder = 3;
					break;
				case 1:
					dieHolder = 2;
					break;
				case 2:
					dieHolder = 1;
					break;
				case 3:
					dieHolder = 4;
				}
			}
		}
		if (hand[i].getVal() == 2) sizeHolder = 4;
		else if (hand[i].getVal() > 2 && hand[i].getVal() < 9) sizeHolder = 6;
		else if (hand[i].getVal() > 8 && hand[i].getVal() < 12) sizeHolder = 8;
		else if (hand[i].getVal() == 12 || hand[i].getVal() == 13) sizeHolder = 10;
		else if (hand[i].getVal() == 0) {
			sizeHolder = 12;
			target.mystery();
		}
		else sizeHolder = 12;

		switch (distribution[i]) {
		case 0:
			target.setDeftness(dieHolder, sizeHolder);
			break;
		case 1:
			target.setNimbleness(dieHolder, sizeHolder);
			break;
		case 2:
			target.setQuickness(dieHolder, sizeHolder);
			break;
		case 3:
			target.setStrength(dieHolder, sizeHolder);
			break;
		case 4:
			target.setVigor(dieHolder, sizeHolder);
			break;
		case 5:
			target.setCognition(dieHolder, sizeHolder);
			break;
		case 6:
			target.setKnowledge(dieHolder, sizeHolder);
			break;
		case 7:
			target.setMien(dieHolder, sizeHolder);
			break;
		case 8:
			target.setSmarts(dieHolder, sizeHolder);
			break;
		case 9:
			target.setSpirit(dieHolder, sizeHolder);
		}
	}

}
