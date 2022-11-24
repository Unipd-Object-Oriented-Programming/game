#ifndef CHARACTER_VISITOR_INTERFACE_H
#define CHARACTER_VISITOR_INTERFACE_H

namespace Game {

class Hero;
class Monster;

class CharacterVisitorInterface {
  public:
    virtual ~CharacterVisitorInterface() = default;
    virtual void visitHero(Hero& hero) = 0;
    virtual void visitMonster(Monster& monster) = 0;
};

}

#endif