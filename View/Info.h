#ifndef VIEW_INFO_H
#define VIEW_INFO_H

#include <QWidget>
#include <QLabel>
#include "../Character.h"
#include "../CharacterObserverInterface.h"

namespace Game {
namespace View {

class Info: public QWidget, public CharacterObserverInterface {
    Q_OBJECT
  private:
    Character& character;
    QLabel* name_label;
    QLabel* hit_points_label;
    QLabel* strength_label;

  public:
    Info(Character& character, QWidget* parent = 0);
    void show();
    virtual void notify(Character& character);
};

}
}

#endif