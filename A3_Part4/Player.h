#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include "PowerPlant.h"
#include "Resources.h"
#include "mapLoader.h"
#include "Subject.h"

using namespace std;

class Player {
private:
	//basic data
	string name;
	int money;
	int numOfCity;
	string ownedCity;
	int numOfPowerPlant;
	int numOfPoweredCities;
	PowerPlant powerPlant[3];
	

	//Resources
	int coalNum;
	int oilNum;
	int garbageNum;
	int uraniumNum;

	//status of auction
    bool roundStatus;
    bool auction;
    bool bought;
    int auctionPrice;



public:
	Player();

	//set methods
	void setMoney(int);
	void setNumOfCity(int);
	void setNumOfPowerPlant(int);
	void setNumOfPoweredCities(int);
	void setCoalNum(int);
	void setOilNum(int);
	void setGarbageNum(int);
	void setUraniumNum(int);
	void setAuction(bool);
	void setPrice(int p);
	void setName(string);
    void setRoundStatus(bool);
    void setBought(bool);
    void setPowerPlant(PowerPlant,int);


	//get methods
	int getMoney();
	int getNumOfCity();
	int getNumOfPowerPlant();
	int getNumOfPoweredCities();
	int getCoalNum();
	int getOilNum();
	int getGarbageNum();
	int getUraniumNum();
	bool getAuction();
	int getPrice();
	string getName() const;
    bool getRoundStatus();
    bool getBought();
	PowerPlant getPowerPlant(int);

	//add methods
	void addNumOfPoweredCities(int);

	//decrease methods
	void deCoalNum(int);
	void deOilNum(int);
	void deGarbageNum(int);
	void deUraniumNum(int);

	//print information
	string toString();
	static void printPlayerPossession(Player*, int);
	
	void addCity(string);
};


#endif // !PLAYER_H__H_
#pragma once

