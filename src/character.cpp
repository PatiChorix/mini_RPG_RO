#include <iostream>

#include "character.hpp"

using namespace RO;

Character::Character() {
    m_name = "Unknow Character";
    m_level = 1;
    m_skill_level = 1;
    m_current_hp = 1;
    m_max_hp = 1;
    m_current_mp = 1;
    m_max_mp = 1;
    m_alive = true;
}

Character::Character(std::string name, int level, int skill_level) : m_current_hp(1), m_current_mp(1), m_alive(true)
{
    m_name = name;
    m_skill_level = skill_level;
    m_level = level;
    m_current_hp = 1;
    m_max_hp = 1;
    m_current_mp = 1;
    m_max_mp = 1;
    m_alive = true;
}

Character::~Character()
{
}

void Character::me() {
    std::cout << "Instance of Character class, my name is " << m_name << std::endl;
    std::cout << "My level is " << m_level << " and my skill level is " << m_skill_level << std::endl;
    std::cout << "Curently I have " << m_current_hp << "/" << m_max_hp << " hp." << std::endl;
    std::cout << "Curently I have " << m_current_mp << "/" << m_max_mp << " mp." <<std::endl;
}