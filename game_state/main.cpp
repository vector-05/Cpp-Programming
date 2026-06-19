#include <iostream>

    /*
    we determine the state of the game depending on the state of the individual players in the game considering n players...
    Assuming n players are playing a game, we need to figure out the state of the gam depending on the state of the individual players
    we assume the game has ended/paused even if one of the players has paused/ended the game...
    */

enum class AllState {

    /*
    enum containing all the possible game states...
    states are arranged in increasing order of priority
        */

    PLAYING,    // = 0 : lowest priority
    PAUSED,     // = 1 : second priority
    ENDED       // = 2 : first priority
};

struct player {

    // players info

    int code;
    AllState state;
};

int main() {

    // players
    player p1;
    p1.code = 101;
    p1.state = AllState::PAUSED;

    player p2;
    p2.code = 108;
    p2.state = AllState::PLAYING;

    /*
    evalutaing final gameState
    */
    AllState currentState = std::max(p1.state, p2.state); // resolving mathematically using enums to determine currentState

    // returning current state of the game
    switch(currentState) {
        case AllState::PLAYING: std::cout << "Game in Progress..." << std::endl; break;
        case AllState::PAUSED: std::cout << "Game is paused..." << std::endl; break;
        case AllState::ENDED: std::cout << "Game has ended..." << std::endl; break;
    }

    return 0;   
}