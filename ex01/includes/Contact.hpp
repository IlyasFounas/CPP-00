#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "iostream"
#include "string"

class Contact {
    public:
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _darkest_secret;
        int             _phone_number;
        Contact();
        ~Contact();
    private:
        void set_firstname(std::string first_name);
        void set_lastname(std::string last_name);
        void set_nickname(std::string nickname);
        void set_darkest_secret(std::string darkest_secret);
        void set_phone_number(int phone_number);
};

#endif