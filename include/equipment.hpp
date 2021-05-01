#ifndef EQUIPMENT_HPP_
#define EQUIPMENT_HPP_
#include <iostream>
#include "item.hpp"

namespace RO {
    class Equipment: public Item {
        std::string m_name;
        int m_id;
    };
}
#endif
