#ifndef Game_h
#define Game_h
#include "Player.h"

class Game {
public:
    Game();
    Player& getPlayer(int id);
    void fire(Player&, int, int); //attacks enemy ship
private:
    Player p1;
    Player p2;
};

#endif /* Game_h */
