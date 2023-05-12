#include "Player.h"



Player::Player(std::string name) : name_(name) {};


std::string_view Player::GetName() {
    return name_;
}
