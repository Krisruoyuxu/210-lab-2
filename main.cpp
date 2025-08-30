#include "botClass.h"
#include "gfclass.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    girlfriend Natalie;

    Natalie.set_name("Natalie");
    Natalie.set_gender("female");
    Natalie.set_age(20);
    Natalie.set_height(165.0);
    Natalie.set_weight(50.0);

    Natalie.greet(Natalie.get_name(), "girlfriend");

    Natalie.set_days_inlove(42);   

    Natalie.caring(7);            
    

}