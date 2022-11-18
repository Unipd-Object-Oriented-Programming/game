#ifndef VIEW_BATTLE_H
#define VIEW_BATTLE_H

#include <QWidget>
#include "../Hero.h"
#include "../Monster.h"
#include "HeroPanel.h"
#include "MonsterPanel.h"

namespace Game {
namespace View {

class Battle: public QWidget {
  Q_OBJECT

  private:
    Game::Hero& hero;
    Game::Monster& monster;
    HeroPanel* hero_panel;
    MonsterPanel* monster_panel;

  public:
    Battle(Game::Hero& hero, Game::Monster& monster, QWidget* parent = 0);
  
  public slots:
    void playerAttacks();
};

}
}

#endif