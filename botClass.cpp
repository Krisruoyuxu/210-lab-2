#include <string>
#include "botClass.h"
#include <iostream>
using namespace std;


    // constructors
    Bot::Bot()
    : bot_type_("your_Bot"), name_(""), gender_(""),
    age_(0), height_(0.0), weight_(0.0) {}

    Bot::Bot(std::string name, std::string gender, int age, double height, double weight)
    : bot_type_("your_Bot"), name_(std::move(name)), gender_(std::move(gender)),
    age_(age), height_(height), weight_(weight) {}

     // Promt the user to select what virtual identity they want to assign to their bot, like girlfriend .etc LOL~
    string Bot::type_selector() {
        cout << "HI, first time to see you~, whom you want me to be? " << endl;
        getline(cin, bot_type_);
        return bot_type_;
    }

    // setters and getters, setting the basic info
    void Bot::set_name(const std::string name) { name_ = name; }
    std::string Bot::get_name() const { return name_; }

    void Bot::set_gender(const std::string gender) { gender_ = gender; }
    std::string Bot::get_gender() const { return gender_; }

    void Bot::set_age(int age) { age_ = age; }
    int Bot::get_age() const { return age_; }

    void Bot::set_height(double height) { height_ = height; }
    double Bot::get_height() const { return height_; }

    void Bot::set_weight(double weight) { weight_ = weight; }
    double Bot::get_weight() const { return weight_; }
    
    // Some bot's behaviors, these are just exs, we can later inherit form the bot class and add other special behaviors
    void Bot::greet(string name_, string bot_type_){
        cout << "Hello~ I'm "<< name_ <<", your "<< bot_type_ <<" really nice to meet you!"<<endl;
    }

    void Bot::caring(int hour){
    // ask you how many hours you study today, and according to different range, giving different answers.
    if (hour >= 0) study_hours_ = hour;
    int h = study_hours_;
    
    if (h < 0 || h > 24) {
        std::cout << "Hour out of range, give me 0~24." << std::endl;
        return;
    }

    if (h <= 4) {
        std::cout << "What are you doing today bro? enjoy the vacation ha? "
                     "Go back to your room and start studying right now!" << std::endl;
    } else if (h > 4 && h <= 6) {
        std::cout << "Oh this is Roolie's number~ , you still need to work hard!" << std::endl;
    } else if (h > 6 && h <= 10) {
        std::cout << "This is the most suitable time for study, keep going boy, "
                     "you can definitely make it!" << std::endl;
    } else { // h > 10
        std::cout << "You are working very hard,  have some rest today~ " << std::endl;
    }
}


    

