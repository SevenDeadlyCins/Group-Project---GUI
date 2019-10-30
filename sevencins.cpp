#include 'sevencins.h'

void SevenCins::setupGUI()
{
//Creating buttons for the GUI
GUIButton *searchButton = createButton(tr("Search"), SLOT(searchClicked()));
GUIButton *randomDrinkButton = createButton(tr("Surprise Me"), SLOT(randomClicked()));
GUIButton *showFavoritesButton = createButton(tr("My Favorites"), SLOT(favoritesClicked()));
GUIButton *showCabinetButton = createButton(tr("My Cabinet"), SLOT(cabinetOpened()));

//The layout for the drink info
QTextFrame *drinkInfo = new QTextFrame;


//The Layout for the home screen
QGridLayout *homeScreen = new QGridLayout;

homeScreen->setSizeConstraint(QLayout::SetFixedSize);
homeScreen->addwidget(searchButton, 0, 0);
homeScreen->addWidget(drinkSlideshow, 4, 4, 4, 4);
homeScreen->addWidget(drinkInfo, 4, 4, 4, 4);

homeScreen->addwidget(randomDrinkButton, 2, 0);
homeScreen->addwidget(showFavoritesButton, 2, 1);
homeScreen->addwidget(showCabinetButton, 2, 1);

setLayout(homeScreen);
setWindowTitle(tr("7DC - V1.0"));
}

void SevenCins::randomClicked()
{
/*
Use a random number in the amount of drinks we have, lets say 20:
-clear the value in the drinkInfo QTextArea
-get the vector value corresponding to the random number, 
and display all of the drink info at said index inside the QTextArea
also change the slideshow to the picture of the random drink
*/
}

void SevenCins::favoritesClicked()
{
/*
Clear the entire upper portion of the gui, display a list of drinks
with a correspinding picture. Keep the random and search buttons at 
the bottom. The plan here is to change all of the data back to the 
homepage but with whatever drink the user clicks on.
*/

}
void SevenCins::cabinetOpened()
{
/*
clear the gui, show a list of all ingredients available in the cabinet
-add to cabinet
-remove from cabinet
*/
}

void SevenCins::searchClicked()
{
/*
Clear the gui, show a list of search results with corresponding 
pictures. This page will be similar to favoritesClicked, so the code 
may look identical.
*/
}

void SevenCins::drinkPictureClicked()
{
//link to drink page
}

void SevenCins::drinkNameClicked()
{
//link to drink page? similar to what happens if you click on the picture.
}
