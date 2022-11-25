#ifndef HERO_H
#define HERO_H

#include "Character.h"

namespace Game {

class Hero: public Character {
  private:
    unsigned int weapon_damage;

  public:
    Hero(
        const std::string name,
        const unsigned int max_hit_points,
        const int hit_points,
        const int strength,
        const unsigned int weapon_damage
    );
    unsigned int getWeaponDamage() const;
    virtual void attack(Character& target);
    virtual void accept(CharacterVisitorInterface& visitor);
};

}

#endif