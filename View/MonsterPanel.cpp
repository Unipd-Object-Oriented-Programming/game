#include "MonsterPanel.h"
#include <QHBoxLayout>

namespace Game {
namespace View {

MonsterPanel::MonsterPanel(Game::Monster& monster, QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->setAlignment(Qt::AlignRight | Qt::AlignTop);

    info = new Info(monster);
    info->show();
    layout->addWidget(info);

    QPixmap image(":assets/" + QString::fromStdString(monster.getName()) + ".png");
    artwork = new QLabel();
    artwork->setPixmap(image.scaledToHeight(256));
    layout->addWidget(artwork);
}

}
}