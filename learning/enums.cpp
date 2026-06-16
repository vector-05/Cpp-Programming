#include <iostream>

enum class AllState {
    // enum class defining the different states of the game
    PLAYING, // = 0 : lowest priority
    PAUSED, // = 1 : second priority
    ENDED // = 2 : first priority
};

struct player {
    // players info struct
    int code;
    AllState state;
};

int main() {

    // enums, as example of a game
    /*
    we determine the state of the game depending on the state of the individual players in the game
    considering two players, p1 and p2, we determine the currentState of the game depending on the 
    combination of the players state
    */

    // players
    player p1;
    p1.code = 101;
    p1.state = AllState::PAUSED;

    player p2;
    p2.code = 108;
    p2.state = AllState::PLAYING;

    // determine state of the game based on player states
    AllState currentState = std::max(p1.state, p2.state); // resolving mathematically using enums to determine currentState

    // current state of the game
    switch(currentState) {
        case AllState::PLAYING: std::cout << "Game in Progress..." << std::endl; break;
        case AllState::PAUSED: std::cout << "Game is paused..." << std::endl; break;
        case AllState::ENDED: std::cout << "Game has ended..." << std::endl; break;
    }

    return 0;
}