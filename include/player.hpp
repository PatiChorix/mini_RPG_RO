#ifndef PLAYER_HPP_
#define PLAYER_HPP_
#include "character.hpp"

namespace RO {
    class Player : public Character {
    protected:
        Inventory *m_my_inventory;
    public:
        Player();
        Player(std::string name, int level, int skill_level);
        ~Player();
        void level_up();
        void update_stat();
        Character select(); //??
        void me();
        
    };
}

#endif