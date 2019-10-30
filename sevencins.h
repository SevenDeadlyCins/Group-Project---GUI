#ifndef SEVENCINS_H
#define SEVENCINS_H

#include <time>
#include <QWidget>

#include "guibutton.h"
//include other files once this is complete


//Seed random number generator. This is for the random drink button.
srand (unsigned)time(NULL);
class SevenCins : public QWidget
{
Q_OBJECT

private:


private slots:
void randomClicked();
void favoritesClicked();
void cabinetOpened();
void searchClicked();
void drinkPictureClicked();
void drinkNameClicked();

public:
SevenCins(QWidget *parent = nullptr);

}

#endif