#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

namespace Game {

class Monster: public Character {
  private:
    unsigned int arms;

  public:
    Monster(
        const std::string name,
        const unsigned int max_hit_points,
        const int hit_points,
        const int strength,
        const unsigned int arms
    );
    unsigned int getArms() const;
    virtual void attack(Character& target);
    virtual void accept(CharacterVisitorInterface& visitor);
};

}

#endif