#if !defined(IUIComponent_H)
#define IUIComponent_H
#include <iostream>
using namespace std;
class UIComponent
{
public:
    virtual void draw() = 0;
    virtual void add(UIComponent *uiComponent) = 0;
    virtual void remove(UIComponent *uiComponent) = 0;
};
#endif