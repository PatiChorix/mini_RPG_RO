#ifndef EQUIPMENT_HPP_
#define EQUIPMENT_HPP_

#include <iostream>

#include "item.hpp"
#include "card.hpp"

namespace RO {
    class Equipment: public Item {
        std::string m_name;
        int m_id;
        uint8_t m_nb_slot;
        Card *mp_cards;
    public:
        Equipment();
        ~Equipment();
        void add_card(Card new_card);
        void remove_card(int index_card_to_remouve);
    };
}
#endif
