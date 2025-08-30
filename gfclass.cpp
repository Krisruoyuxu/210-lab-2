#include "gfclass.h"
#include <iostream>
using namespace std;

void girlfriend::praise(int /*hour*/) const {
    // Judge by the base class's public member variable: study_hours_
    if (study_hours_ < 4) {
        std::cout << "You barely studied today ha? What are you doing Back to work, champ!" << std::endl;
    } else if (study_hours_ < 9) {
        std::cout << "Nice work babe~ keep going and I'll reward you 😉" << std::endl;
    } else { //
        std::cout << "Fantastic! I'm so proud of you 💖" << std::endl;
    }
}

// Show the days in love
void girlfriend::show_days_inlove() const {
    cout << "This is the " << days_Inlove_ << " days that we fall in love💕" << endl;
}

// Set the variable
void girlfriend::set_days_inlove(int days) {
    if (days >= 0) {
        days_Inlove_ = days;
    }
}