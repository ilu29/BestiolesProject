#ifndef _GREGAIRE_BEHAVIOUR_H_
#define _GREGAIRE_BEHAVIOUR_H_

#include "Behaviour.h"



class GregaireBehaviour: public Behaviour
{
    //private:
    //    Bestiole* owner;
    public:
    GregaireBehaviour()
    {
        
    }
    void calculateDir(Milieu & monMilieu) override;

    GregaireBehaviour* clone(Bestiole* ownr);
    ~GregaireBehaviour(){}
};

#endif