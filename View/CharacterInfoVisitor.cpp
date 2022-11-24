#include "CharacterInfoVisitor.h"
#include <QLabel>
#include <QString>
#include "../Hero.h"
#include "../Monster.h"

namespace Game {
namespace View {

QWidget* CharacterInfoVisitor::getWidget() {
    return widget;
}

void CharacterInfoVisitor::visitHero(Hero& hero) {
    widget = new QLabel("Weapon Damage: " + QString::number(hero.getWeaponDamage()));
}

void CharacterInfoVisitor::visitMonster(Monster& monster) {
    widget = new QLabel("Arms Multiplier: " + QString::number(monster.getArms()));
}

}
}