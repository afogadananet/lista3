#include <iostream>
using namespace std;
#include "Player.hpp"

Player::~Player(){}

Player:: Player(int id, std::string name, int score, int timestamp){
    this->id = id; 
    this->name = name; 
    this->score = score; 
    this->timestamp = timestamp; 
}; 

Player::~Player(){}

