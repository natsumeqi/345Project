#pragma once
#include"player.h"
class Observer
{	
protected:
	Observer();
public:
	virtual void updateHeader() = 0;
	virtual void updateStep() = 0;
	virtual void updateTurn() = 0;
	virtual void updatePhase() = 0;
	virtual void updatePlayer() = 0;
	virtual void updateAuctionResult(Player p, PowerPlant card) = 0;
	~Observer();
};
