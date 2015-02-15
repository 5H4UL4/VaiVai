#include "Player.h"
#include <QString>

Player::Player()
{
	expirience = 0;
	level = 0;
	
}


Player::~Player()
{
}


int Player::GetLevel()
{
	return level;
}

void Player::SetLevel(int _level)
{
	level = _level;
}


