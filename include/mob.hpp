#ifndef MOB_HPP_
#define MOB_HPP_
#include "character.hpp"

namespace RO {
    class Mob : public Character {
    
    public:
        Mob();
        ~Mob();
        void auto_move();
        void auto_combat();
        void agro();
    };


}

#endif