#include "inventory.hpp"
#include "item.hpp"


using namespace RO;

Inventory::Inventory() {
    mp_items = new Item[MAX_ITEMS];
    m_max_weight = 0;
    m_name = "Unknown";
    m_nb_items = 0;
    
    std::cout << "Inventory by default created" << std::endl;
}

Inventory::Inventory(std::string name_inventory, float max_weight): m_name(name_inventory), m_max_weight(max_weight) {
    mp_items = new Item[MAX_ITEMS];
    std::cout << "Inventory name's " << m_name << " created with a max weight of:" << m_max_weight << std::endl;
}

Inventory::~Inventory() {
    delete [] mp_items;
    std::cout << "Inventory deleted from memory and items inside too" << std::endl;
}