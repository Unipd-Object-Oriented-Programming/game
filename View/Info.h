#ifndef VIEW_INFO_H
#define VIEW_INFO_H

#include <QWidget>
#include <QLabel>
#include "../Character.h"

namespace Game {
namespace View {

class Info: public QWidget {
    Q_OBJECT
  private:
    Character& character;
    QLabel* name_label;
    QLabel* hit_points_label;
    QLabel* strength_label;

  public:
    Info(Character& character, QWidget* parent = 0);
    void show();
};

}
}

#endif