#pragma once
#include <iostream>
using namespace std;
class Player
{
private:
	string playerID;
	int matches;
	int goals;
	int playersNum;
public:
	Player(){}
	~Player(){}
	Player(string playerID , int matches , int goals)
	{
		this->playerID = playerID;
		this->matches = matches;
		this->goals = goals;
	}
	string getPlayerID()
	{
		return playerID;
	}
	int getMatches()
	{
		return matches;
	}
	int getGoals()
	{
		return goals;
	}
	  int getPlayersNum()
	{
		return playersNum;
	}
	  void displayMessage()
	  {
		  int* ptrGoals = &goals;
		  int* ptrMatches = &matches;
		  string* ptrID = &playerID;
		  cout << "  Player id : " << *ptrID << "    address " << ptrID << endl;
		  cout << "  Matches have been played  " << *ptrMatches << "    address " << ptrMatches << endl;
		  cout << "  Goals have been scored  " << *ptrGoals << goals << "    address " << ptrGoals << endl;
	  }
	  int deleting()
	  {
		  int* ptrGoals = &goals;
		  int* ptrMatches = &matches;
		  string* ptrID = &playerID;
		  delete ptrGoals;
		  delete ptrMatches;
		  delete ptrID;
		  return 0;
	  }




};

