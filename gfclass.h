#ifndef GIRLFRIEND_CLASS_H
#define GIRLFRIEND_CLASS_H

#include "botClass.h"
#include <string>

// Bot class's derived class
class girlfriend : public Bot{
    public:
    using Bot::Bot;  // Inherit parent class Bot's constructors

    void praise(int /*hour*/) const;

    void show_days_inlove() const; // Set days in love
    void set_days_inlove(int days);


    private:
    int days_Inlove_ = 0;   // Girlfriend class's unique attributes
    

};



#endif // GIRLFRIEND_CLASS_H