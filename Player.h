#include <iostream>

// Singleton Pattern - Player Class
class Player {
private:
    static Player* instance;

    Player() {}

public:
    static Player* getInstance() {
        if (!instance) {
            instance = new Player();
        }
        return instance;
    }

};

Player* Player::instance = nullptr;
