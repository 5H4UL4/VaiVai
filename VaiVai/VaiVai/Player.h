#pragma once

class Player
{
private:
	int expirience;
	int level;
public:
	Player();
	~Player();

	int GetLevel();
	void SetLevel(int _level);
	
};

