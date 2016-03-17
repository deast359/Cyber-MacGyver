#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "GameModel.h"

class Runner : public QLabel
{
    Q_OBJECT

    QLabel * display;
    QPixmap * picture;

public:

    Runner(MainWindow * parent) : Qlabel(parent)
    {
        display = new Qlabel(parent);
        display->setScaledContents(true);
        display->setGeometry(parent->x(),parent->y,parent->width(), parent->height());
        display->setPixmap();
    }

    QLabel* getLabel() {return dispaly;}

};

#endif // BACKGROUND_H
