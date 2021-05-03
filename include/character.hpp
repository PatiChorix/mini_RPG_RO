#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <iostream>

#include "inventory.hpp"

namespace RO {

    class Character {
    protected:
        std::string m_name;
        int m_current_hp;
        int m_max_hp;
        int m_current_mp;
        int m_max_mp;
        //mstats
        bool m_alive;
        int m_level;
        int m_skill_level;
        
    public:
        Character();
        Character(std::string name, int level, int skill_level);
        ~Character();
        void attack(Character &other);
        void move();
        void use_skill();
        void speak();
        void apply_buff();
        void me();
    };
}
#endif