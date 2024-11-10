#if !defined(IButton_H)
#define IButton_H
#include <iostream>
#include "UIComponent.hpp"
using namespace std;
class Button : public UIComponent
{
public:
    void draw()
    {
        cout << "drawing the component" << endl;
    };
    void add(UIComponent *uiComponent)
    {
        cout << "adding the component" << endl;
    }
    void remove(UIComponent *uiComponent)
    {
        cout << "removing the component" << endl;
    };
};
#endif