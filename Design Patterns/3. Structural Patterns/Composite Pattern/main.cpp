#include <iostream>
#include "UIComponent.hpp"
#include "Menu.hpp"
#include "Button.hpp"
using namespace std;
int main()
{
    UIComponent *uiCmpMenu = new Menu();

    uiCmpMenu->add(new Button());
    uiCmpMenu->add(new Button());
    uiCmpMenu->add(new Button());
    uiCmpMenu->draw();
    uiCmpMenu->remove(new Button());
    uiCmpMenu->draw();
}