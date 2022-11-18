#include "MainWindow.h"
#include "Battle.h"

namespace Game {
namespace View {

MainWindow::MainWindow(Game::Hero& hero, Game::Monster& monster) {
    Battle* battle_scene = new Battle(hero, monster);
    setCentralWidget(battle_scene);
}

}
}