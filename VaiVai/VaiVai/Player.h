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

//************************************
	void virtual Spawn(void);
	void virtual LevelUp(void);
};

class wizard :public Player
{
public:
	int field1;

};
class warrior :public Player
{
public:
	int field2;

};




