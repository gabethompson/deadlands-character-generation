#include "Deck.h"

using namespace std;

Card::Card() {}

Card::Card(int newsuit, int newval) {
	suit = newsuit;
	value = newval;
}

void Card::printCard() {
	if (value < 11 && value > 1) {
		cout << value;
	}
	else if (value == 1) cout << "ACE";
	else if (value == 11) cout << "JACK";
	else if (value == 12) cout << "QUEEN";
	else if (value == 13) cout << "KING";
	switch (suit) {
	case 0:
		cout << " OF HEARTS";
		break;
	case 1:
		cout << " OF DIAMONDS";
		break;
	case 2:
		cout << " OF CLUBS";
		break;
	case 3:
		cout << " OF SPADES";
		break;
	case 4:
		cout << "RED JOKER";
		break;
	case 5:
		cout << "BLACK JOKER";
		break;
	}
}

int Card::getSuit() { return suit; }
int Card::getVal() { return value; }

Deck::Deck() {
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			cards.push_back(Card(i, j));
		}
	}
	cards.push_back(Card(4, 0));
	cards.push_back(Card(5, 0));
}

Card Deck::draw() {
	int pos = rand() % cards.size();
	Card drawn = cards[pos];
	cards.erase(cards.begin() + pos);
	return drawn;
}