#include "Hero.h"

namespace Game {

Hero::Hero(
    const std::string name,
    const unsigned int max_hit_points,
    const int hit_points,
    const int strength,
    const unsigned int weapon_damage
):
    Character(name, max_hit_points, hit_points, strength), weapon_damage(weapon_damage)
{
}

unsigned int Hero::getWeaponDamage() const {
    return weapon_damage;
}

void Hero::attack(Character& target) {
    unsigned int damage = getStrength() + weapon_damage;
    target.takeDamage(damage);
}

void Hero::accept(CharacterVisitorInterface& visitor) {
    visitor.visitHero(*this);
}

}
