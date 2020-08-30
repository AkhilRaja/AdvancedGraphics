//
//  player.hpp
//  graphics_asgn1
//
//  Created by Akhil Raja on 30/08/20.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "main.h"
#include "Cell.hpp"

//Use the directions here
enum Directions {bottomD,rightD,topD,leftD};

//For me :::
//TODO: The player will move from the center of one cell to the center of another
//For now it will be a jerky move which can be fixed later

class Player {
public:
    Player() {currentDirection = rightD;}
    void initPlayer(int x,int y);
    void drawPlayer();
    bool checkForWalls();
    
    //Getters and Setters
    int getX() {return x;}
    int getY() {return y;}
    void setDirection(int dir) {currentDirection = (Directions)dir;}
    
private:
    double x,y;
    Cell *currentCell;
    Directions currentDirection;
    bool canMove;
    int lives;
    
    void updateCell();
};


#endif /* player_hpp */
