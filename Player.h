#include <string>


class Player {
public:
    Player(std::string name);

    std::string_view GetName();
private:
    std::string name_;

};

class PlayerClass : public Player {
};

class Sniper : public PlayerClass {
};

class Warrior : public PlayerClass {
};
