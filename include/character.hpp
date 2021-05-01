#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <iostream>


namespace RO {

    class Character {
        std::string m_name;
        int m_current_hp;
        int m_current_mp;
        //mstats
        bool m_alive;
        int m_level;
        int m_skill_level;
        int m_id;
    public:
        Character();
        ~Character();
        void attack(Character &other);
        void move();
        void use_skill();
        void speak();
        void apply_buff();
    };

}


#endif