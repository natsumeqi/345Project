#pragma once
#include <time.h>
#include "mapLoader.h"
#include "Player.h"
#include "ResourceMarket.h"


class Game {
private:
    int step;
    int turn;
    int numOfPlayer;
    Player *players;
    Resources* resources;
    //Resources* resources;

    House house[132];
    vector<PowerPlant> powerPlants;
    vector<PowerPlant> market;
    Graph *graph;
    Resources recycle;


    //phase1_2
    void shufflePlayers( );

    void setPlayerOrder(Player p[], int n);

    void setMarketOrder(vector<PowerPlant> &p);

    void setCardOwnedByPlayer(Player &p);

    void checkReturnResources(Player &p);

    void buyCard(Player &p, PowerPlant card);

    bool checkNoOneBuyCard();

    void changeMarketToStep3(vector<PowerPlant> &p);

    void abilityOfPurchase(int c);

    void pass(Player &p);

    void auction(Player &p, PowerPlant n,int &passNum);

    void auctionPhase();

    //phase3_4
    void buyResources(int);

    bool adjustMarket(int &step);




    //phase5
    void earnCash();                    //the players earn cash

    bool validUsingPowerPlant(int, PowerPlant);    //return true if the input is valid for the number of cities the player wants to power

    void reSupplyResource();  //Based on the number of players and the step of the game, the players re-supply the resource market from the supply of resources.

    void updateMarket();//Place the highest numbered power plant from the future market face down under the draw stack and draw a new one to replace it. Rearrange the market appropriately.



public:
    Game();

    Game(int numOfPlayer);

    void loader();

    void phase1();

    void phase2();

    void phase3();

    void phase4();

    //check winning
    bool checkWin();

    void phase5();


};