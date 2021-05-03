#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include <iostream>

#include "item.hpp"

namespace RO {
    class Inventory {
    public:
        const static int MAX_ITEMS = 200;
    protected:
        std::string m_name;
        Item *mp_items;
        float m_max_weight;
        int m_nb_items;
    public:
        Inventory();
        Inventory(std::string name_inventory, float max_weight);
        ~Inventory();
        void add_item(Item *new_item);
        void remouve_item(Item *item_to_remouve);
    };
}

#endif