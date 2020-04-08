#pragma once
#include <string>
#include <vector>

class Aptitude {
	std::string name;
	std::string concentration;
	int val;
public:
	std::string getName();
	std::string getConc();
	int getVal();
	void setName(std::string newName);
	void setConc(std::string newConc);
	void setVal(int newVal);
};

class Character {
	std::string name;

	int deftness[2];
	int nimbleness[2];
	int quickness[2];
	int strength[2];
	int vigor[2];

	int cognition[2];
	int knowledge[2];
	int mien[2];
	int smarts[2];
	int spirit[2];

	bool mysterious;
	int pace;
	int grit;
	int size;
	int wind;
	int aptPts;

	std::vector<Aptitude> aptitudes;
public:
	Character();

	void mystery();
	bool isMysterious();
	void setDeftness(int die, int dsize);
	void setNimbleness(int die, int dsize);
	void setQuickness(int die, int dsize);
	void setStrength(int die, int dsize);
	void setVigor(int die, int dsize);
	std::string getDeftness();
	std::string getNimbleness();
	std::string getQuickness();
	std::string getStrength();
	std::string getVigor();

	void setCognition(int die, int dsize);
	void setKnowledge(int die, int dsize);
	void setMien(int die, int dsize);
	void setSmarts(int die, int dsize);
	void setSpirit(int die, int dsize);
	std::string getCognition();
	std::string getKnowledge();
	std::string getMien();
	std::string getSmarts();
	std::string getSpirit();

	std::string getPace();
	std::string getWind();
	std::string getAptPts();

};