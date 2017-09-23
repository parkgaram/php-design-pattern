#ifndef STORYG_CH01_Sword_CPP
#define STORYG_CH01_Sword_CPP
#include "Contracts/Weapon.hpp"
#include <iostream>

using namespace std;
using namespace Storyg::Contracts;

class Sword : public Weapon
{
protected:
	
public:
	Sword();
	void doAttack();
};

Sword::Sword(){

}

void Sword::doAttack(){
	cout << "Sword Attack" << endl;
}

#endif