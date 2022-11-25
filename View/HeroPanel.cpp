#include "HeroPanel.h"
#include <QHBoxLayout>
#include <QPushButton>

namespace Game {
namespace View {

HeroPanel::HeroPanel(Game::Hero& hero, QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    QPixmap image(":assets/" + QString::fromStdString(hero.getName()) + ".png");
    artwork = new QLabel();
    artwork->setPixmap(image.scaledToHeight(256));
    layout->addWidget(artwork);

    info = new Info(hero);
    info->show();
    layout->addWidget(info);

    // Adds commands
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);

    QPushButton* attack = new QPushButton("attack");
    commands->addWidget(attack, 0, 0, 1, 1);
    connect(attack, &QPushButton::pressed, this, &HeroPanel::attack);

    QPushButton* items = new QPushButton("items");
    items->setEnabled(false);
    commands->addWidget(items, 0, 1, 1, 1);

    QPushButton* skills = new QPushButton("skills");
    skills->setEnabled(false);
    commands->addWidget(skills, 1, 0, 1, 1);

    QPushButton* magic = new QPushButton("magic");
    magic->setEnabled(false);
    commands->addWidget(magic, 1, 1, 1, 1);
}

}
}