#ifndef _SENSOR_H_
#define _SENSOR_H_
#include "UImg.h"

#include "component.h"



class Sensor:public Component
{

    
public:
    Sensor()
    {
        
    }
    virtual bool canSense(const Bestiole &b2)=0;
    virtual Sensor* clone(Bestiole* ownr)=0;

    virtual ~Sensor();



};


#endif