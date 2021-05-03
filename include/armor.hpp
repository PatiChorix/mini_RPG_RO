#ifndef ARMOR_HPP_
#define ARMOR_HPP_
#include <iostream>

#include "equipment.hpp"


namespace RO {
    class armor: public Equipment {
        int m_required_lv;
        int m_type;
    };
}
#endif