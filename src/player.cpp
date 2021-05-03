#include <iostream>
#include "player.hpp"
#include "inventory.hpp"

using namespace RO;

Player::Player(): Character() {
    m_my_inventory = new Inventory;
    me();
}

Player::Player(std::string name, int level, int skill_level): Character(name, level, skill_level) {
    m_my_inventory = new Inventory;
    me();
}

Player::~Player() {
    delete m_my_inventory;
    std::cout << "Player deleted ans is inventory too" << std::endl;
}

void Player::level_up() {
    m_level++;
    update_stat();
}

void Player::update_stat() {

}

void Player::me() {
    std::cout << "Instance of Player class, my name is " << m_name << std::endl;
    std::cout << "My level is " << m_level << " and my skill level is " << m_skill_level << std::endl;
    std::cout << "Curently I have " << m_current_hp << "/" << m_max_hp << " hp." << std::endl;
    std::cout << "Curently I have " << m_current_mp << "/" << m_max_mp << " mp." <<std::endl;
}

/*
Character Player::select() {

}
*/