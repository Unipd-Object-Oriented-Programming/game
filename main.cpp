#include <QApplication>
#include "Hero.h"
#include "Monster.h"
#include "View/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Game::Hero beowulf("Beowulf", 100, 100, 50, 10);
    Game::Monster grendel("Grendel", 250, 250, 5, 2);
    Game::View::MainWindow main_window(beowulf, grendel);
    main_window.resize(1024, 512);
    main_window.show();
    return app.exec();
}
