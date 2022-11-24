#ifndef VIEW_CHARACTER_INFO_VISITOR_H
#define VIEW_CHARACTER_INFO_VISITOR_H

#include <QWidget>
#include "../CharacterVisitorInterface.h"

namespace Game {
namespace View {

class CharacterInfoVisitor: public Game::CharacterVisitorInterface {
  private:
    QWidget* widget;

  public:
    QWidget* getWidget();
    virtual void visitHero(Hero& hero);
    virtual void visitMonster(Monster& monster);
};

}
}

#endif