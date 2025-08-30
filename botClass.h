#ifndef BOT_CLASS_H
#define BOT_CLASS_H

#include <string>
#include <iostream>


class Bot {
    public:
    int study_hours_;
    
    // constructors
    Bot();
    Bot(std::string name, std::string gender, int age, double height, double weight);

     // Selecting what virtual identity you want to assign to your bot, like girlfriend.etc 
    std::string type_selector(); 

    // setters and getters, setting the basic info
    void set_name(const std::string name);
    std::string get_name() const;

    void set_gender(const std::string gender);
    std::string get_gender() const;

    void set_age(int age);
    int get_age() const;

    void set_height(double height);
    double get_height() const;

    void set_weight(double weight);
    double get_weight() const;

    void greet(std::string name_, std::string bot_type_);
    
    void caring(int hour); 
    // ask you how many hours you study today, and according to different range, giving different answers.


    private:  // bot's basic information
        std::string bot_type_;
        std::string name_;
        std::string gender_;
        int age_;
        double height_;
        double weight_;

};

#endif // BOT_CLASS_H