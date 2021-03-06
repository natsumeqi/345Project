#include <iostream>
#include "Player.h"
#include <string>


using namespace std;

// default 
Player::Player() {
	name = "";
	money = 50;
	numOfCity = 0;
	ownedCity = "";
	numOfPowerPlant = 0;
	numOfPoweredCities = 0;
	//powerPlant;
	coalNum = 0;
	oilNum = 0;
	garbageNum = 0;
	uraniumNum = 0;
	auction = true;
	auctionPrice = 0;
	roundStatus = true;
	bought = false;
}

//set method: change value
void Player::setMoney(int m) {
	money = m;
}
//set method: change value
void Player::setNumOfCity(int c) {
	numOfCity = c;
}
//set method: change value
void Player::setNumOfPowerPlant(int p) {
	numOfPowerPlant = p;
}
//set method: change value
void Player::setNumOfPoweredCities(int pc){
	numOfPoweredCities = pc;
}
//set method: change value
void Player::setCoalNum(int c) {
	coalNum = c;
}
//set method: change value
void Player::setOilNum(int o) {
	oilNum = o;
}
//set method: change value
void Player::setGarbageNum(int g) {
	garbageNum = g;
}
//set method: change value
void Player::setUraniumNum(int u) {
	uraniumNum = u;
}
//set method: change value
void Player::setAuction(bool b) {
	auction = b;
}
//set method: change value
void Player::setPrice(int p) {
	auctionPrice = p;
}
//set method: change value
void Player::setRoundStatus(bool b) {
	roundStatus = b;
}
//set method: change value
void Player::setBought(bool b) {
	bought = b;
}
//set method: change value
void Player::setPowerPlant(PowerPlant p,int n) {
	powerPlant[n] = p;
}
//get method: get value
int Player::getMoney(void) {
	return money;
}
//get method: get value
int Player::getNumOfCity(void) {
	return numOfCity;
}
//get method: get value
int Player::getNumOfPowerPlant(void) {
	return numOfPowerPlant;
}
//get method: get value
int Player::getNumOfPoweredCities(){
	return numOfPoweredCities;
}
//get method: get value
int Player::getCoalNum(void) {
	return coalNum;
}
//get method: get value
int Player::getOilNum(void) {
	return oilNum;
}
//get method: get value
int Player::getGarbageNum(void) {
	return garbageNum;
}
//get method: get value
int Player::getUraniumNum(void) {
	return uraniumNum;
}
//get method: get value
bool Player::getAuction() {
	return auction;
}
//get method: get value
bool Player::getRoundStatus() {
	return roundStatus;
}
//get method: get value
bool Player::getBought() {
	return bought;
}
//get method: get value
int Player::getPrice() {
	return auctionPrice;
}
//get method: get value
PowerPlant Player::getPowerPlant(int n) {
	return powerPlant[n];
}


void Player::setName(string n) {
	name = n;
}

string Player::getName() const{
	return name;
}

// print the data of players
string Player::toString() {
	string print = "Overview card for Player: " + name + "\n->Money: " + to_string(money);
	print += " | coal: " + to_string(coalNum) + " | oil: " + to_string(oilNum) + "  | garbage: " + to_string(garbageNum) + " | uranium: " + to_string(uraniumNum) + "\n";
	print += "->Num of City: " + to_string(numOfCity) + " | Num Of PoweredCity: " + to_string(numOfPoweredCities)+ "\n";
	print += "->Owned City: " + ownedCity + "\n";
	print += "->Cards:\n";
	for (int i = 0; i < numOfPowerPlant; i++) {
		print += "  " + powerPlant[i].toString()+"\n";
	}
	print += "\n";
	return print;
}

void Player::printPlayerPossession(Player* players, int n){
	for(int i = 0; i<n;i++){
		cout << players[i].toString() << endl;
	}
}




//add methods
void Player::addNumOfPoweredCities(int c){
	numOfPoweredCities += c;
}


//decrease methods
void Player::deCoalNum(int c){
	coalNum -= c;
}
void Player::deOilNum(int o){
	oilNum -= o;
}
void Player::deGarbageNum(int g){
	garbageNum -= g;
}
void Player::deUraniumNum(int u){
	uraniumNum -= u;
}

void Player::addCity(string city) {
	ownedCity += city + " ";
}