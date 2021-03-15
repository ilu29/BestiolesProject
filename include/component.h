#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include "UImg.h"
#include "vec2.h"
#include "Config.h"

class Bestiole;
class Milieu;

class Component
{
protected:
    Bestiole* owner;
    
public:
    Component()
    {
        
    }

    //virtual Component* clone(Bestiole* ownr);

    virtual void setOwner(Bestiole* ownr){owner= ownr;}

    virtual Component* clone(Bestiole* ownr)=0;

    Bestiole* getOwner(){return owner;}

    virtual ~Component(){}

    virtual void Draw(UImg & support){}


};


#endif