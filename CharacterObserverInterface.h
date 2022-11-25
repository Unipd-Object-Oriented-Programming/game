#ifndef CHARACTER_OBSERVER_INTERFACE_H
#define CHARACTER_OBSERVER_INTERFACE_H

namespace Game {

class Character;

class CharacterObserverInterface {
  public:
    virtual ~CharacterObserverInterface() = default;
    virtual void notify(Character& character) = 0;
};

}

#endif