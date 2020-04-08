#include "Generation.h"
#include "Character.h"
#include <string>
#include <vector>


std::string Aptitude::getName() { return name; }
std::string Aptitude::getConc() { return concentration; }
int Aptitude::getVal() { return val; }
void Aptitude::setName(std::string newName) { name = newName; }
void Aptitude::setConc(std::string newConc) { concentration = newConc; }
void Aptitude::setVal(int newVal) { val = newVal; }


Character::Character() {
	mysterious = false;
	pace = 0;
	grit = 0;
	size = 6;
	wind = 0;
	aptPts = 0;
}

void Character::mystery() { mysterious = true; }
bool Character::isMysterious() { return mysterious; }
void Character::setDeftness(int die, int dsize) {
		deftness[0] = die;
		deftness[1] = dsize;
	}
void Character::setNimbleness(int die, int dsize) {
		nimbleness[0] = die;
		nimbleness[1] = dsize;
		pace = dsize;
	}
void Character::setQuickness(int die, int dsize) {
		quickness[0] = die;
		quickness[1] = dsize;
	}
void Character::setStrength(int die, int dsize) {
		strength[0] = die;
		strength[1] = dsize;
	}
void Character::setVigor(int die, int dsize) {
		vigor[0] = die;
		vigor[1] = dsize;
		wind += dsize;
	}
std::string Character::getDeftness() {
		return std::to_string(deftness[0]) + 'd' + std::to_string(deftness[1]);
	}
std::string Character::getNimbleness() {
		return std::to_string(nimbleness[0]) + 'd' + std::to_string(nimbleness[1]);
	}
std::string Character::getQuickness() {
		return std::to_string(quickness[0]) + 'd' + std::to_string(quickness[1]);
	}
std::string Character::getStrength() {
		return std::to_string(strength[0]) + 'd' + std::to_string(strength[1]);
	}
std::string Character::getVigor() {
		return std::to_string(vigor[0]) + 'd' + std::to_string(vigor[1]);
	}

void Character::setCognition(int die, int dsize) {
		cognition[0] = die;
		cognition[1] = dsize;
		aptPts += dsize;
	}
void Character::setKnowledge(int die, int dsize) {
		knowledge[0] = die;
		knowledge[1] = dsize;
		aptPts += dsize;
	}
void Character::setMien(int die, int dsize) {
		mien[0] = die;
		mien[1] = dsize;
	}
void Character::setSmarts(int die, int dsize) {
		smarts[0] = die;
		smarts[1] = dsize;
		aptPts += dsize;
	}
void Character::setSpirit(int die, int dsize) {
		spirit[0] = die;
		spirit[1] = dsize;
		wind += dsize;
	}
std::string Character::getCognition() {
		return std::to_string(cognition[0]) + 'd' + std::to_string(cognition[1]);
	}
std::string Character::getKnowledge() {
		return std::to_string(knowledge[0]) + 'd' + std::to_string(knowledge[1]);
	}
std::string Character::getMien() {
		return std::to_string(mien[0]) + 'd' + std::to_string(mien[1]);
	}
std::string Character::getSmarts() {
		return std::to_string(smarts[0]) + 'd' + std::to_string(smarts[1]);
	}
std::string Character::getSpirit() {
		return std::to_string(spirit[0]) + 'd' + std::to_string(spirit[1]);
	}

std::string Character::getPace() { return std::to_string(pace); }
std::string Character::getWind() { return std::to_string(wind); }
std::string Character::getAptPts() { return std::to_string(aptPts); }

