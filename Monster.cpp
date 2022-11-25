#include "Monster.h"

namespace Game {

Monster::Monster(
    const std::string name,
    const unsigned int max_hit_points,
    const int hit_points,
    const int strength,
    const unsigned int arms
):
    Character(name, max_hit_points, hit_points, strength), arms(arms)
{
}

unsigned int Monster::getArms() const {
    return arms;
}

void Monster::attack(Character& target) {
    unsigned int damage = getStrength() * arms;
    target.takeDamage(damage);
}

void Monster::accept(CharacterVisitorInterface& visitor) {
    visitor.visitMonster(*this);
}

}
