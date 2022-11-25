#include "Character.h"

namespace Game {

Character::Character(const std::string name, const unsigned int max_hit_points, const int hit_points, const int strength)
: name(name), max_hit_points(max_hit_points), hit_points(hit_points), strength(strength)
{
}

Character::~Character() {
}

const std::string& Character::getName() const {
    return name;
}

unsigned int Character::getMaxHitPoints() const {
    return max_hit_points;
}

unsigned int Character::getHitPoints() const {
    return hit_points;
}

unsigned int Character::getStrength() const {
    return strength;
}

void Character::takeDamage(const unsigned int damage) {
    if (damage > hit_points) {
        hit_points = 0;
    }
    else {
        hit_points = hit_points - damage;
    }
    for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(*this);
    }
}

void Character::registerObserver(CharacterObserverInterface* observer) {
    observers.push_back(observer);
}

}
