#include <QWidget>
#include <QLabel>
#include "../Monster.h"
#include "Info.h"

#ifndef VIEW_MONSTER_PANEL_H
#define VIEW_MONSTER_PANEL_H

namespace Game {
namespace View {

class MonsterPanel: public QWidget {
    Q_OBJECT
  private:
    QLabel* artwork;
    Info* info;
  
  public:
    MonsterPanel(Game::Monster& monster, QWidget* parent = 0);
};

}
}

#endif