#ifndef VIEW_MAIN_WINDOW_H
#define VIEW_MAIN_WINDOW_H

#include <QMainWindow>
#include "../Hero.h"
#include "../Monster.h"

namespace Game {
namespace View {

class MainWindow: public QMainWindow {
    Q_OBJECT

  public:
    MainWindow(Game::Hero& hero, Game::Monster& monster);
};

}
}

#endif