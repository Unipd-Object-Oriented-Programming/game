#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

namespace Game {

class Character {
  private:
    std::string name;
    unsigned int max_hit_points;
    unsigned int hit_points;
    int strength;

  public:
    Character(
        const std::string name,
        const unsigned int max_hit_points,
        const int hit_points,
        const int strength
    );

    virtual ~Character();

    const std::string& getName() const;
    unsigned int getMaxHitPoints() const;
    unsigned int getHitPoints() const;
    unsigned int getStrength() const;

    void takeDamage(const unsigned int damage);

    virtual void attack(Character& target) = 0;
};

}

#endif
