#ifndef PLAYER_HPP_
#define PLAYER_HPP_
#include "character.hpp"

namespace RO {
    class Player : public Character {
    
    public:
        Player();
        ~Player();
        void level_up();
        void update_stat();
        Character select();
    };


}

#endif