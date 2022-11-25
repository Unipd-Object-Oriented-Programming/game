#include "Battle.h"
#include <QString>
#include <QVBoxLayout>

#include <iostream>

namespace Game {
namespace View {

Battle::Battle(Game::Hero& hero, Game::Monster& monster, QWidget* parent)
    : QWidget(parent), hero(hero), monster(monster)
{
    QVBoxLayout* layout = new QVBoxLayout(this);

    monster_panel = new MonsterPanel(monster);
    layout->addWidget(monster_panel);

    layout->addStretch();

    hero_panel = new HeroPanel(hero);
    layout->addWidget(hero_panel);
    connect(hero_panel, &HeroPanel::attack, this, &Battle::playerAttacks);
}

void Battle::playerAttacks() {
    hero.attack(monster);
    monster.attack(hero);
}

}
}