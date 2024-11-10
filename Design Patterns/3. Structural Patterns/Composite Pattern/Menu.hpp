#if !defined(IMenu_H)
#define IMenu_H
#include <iostream>
#include "UIComponent.hpp"
using namespace std;
class Menu : public UIComponent
{
    // menu ke ander bahut sare parts ho skte h
    // iske ander ke sare parts ko main children keh rha hu
public:
    vector<UIComponent *> children;
    void draw()
    {
        for (int i = 0; i < children.size(); i++)
        {
            children[i]->draw();
        }
    }
    void add(UIComponent *uiComponent)
    {
        children.push_back(uiComponent);
    }
    void remove(UIComponent *uiComponent)
    {
        children.pop_back();
    };
};
#endif