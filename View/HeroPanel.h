#include <QWidget>
#include <QLabel>
#include "../Hero.h"
#include "Info.h"

#ifndef VIEW_HERO_PANEL_H
#define VIEW_HERO_PANEL_H

namespace Game {
namespace View {

class HeroPanel: public QWidget {
    Q_OBJECT
  private:
    QLabel* artwork;
    Info* info;
  
  public:
    HeroPanel(Game::Hero& hero, QWidget* parent = 0);
  
  signals:
    void attack();
};

}
}

#endif