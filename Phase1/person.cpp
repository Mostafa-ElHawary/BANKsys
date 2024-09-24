#include "Validation.cpp"
#pragma once

class Person {
private:
    std::string name, password;
    int id;

public:
    Person() : id(0), name(""), password("") {}

    Person(const std::string& name, const std::string& password, int id) : id(id) {
        setName(name);
        setPassword(password);
    }

    bool setName(const std::string& name) {
        if (Validation::validName(name)) {
            this->name = name;
            return true;
        }
        else {
            std::cerr << "Invalid name. It must be alphabetic and between 5 to 20 characters.\n";
            return false;
        }
    }

    bool setPassword(const std::string& password) {
        if (Validation::validPassword(password)) {
            this->password = password;
            return true;
        }
        else {
            std::cerr << "Invalid password. It must be between 8 to 20 characters.\n";
            return false;
        }
    }

    // Getters
    std::string getName() const { return name; }
    int getId() const { return id; }

    void display() const {
        std::cout << "ID: " << id << "\n"
            << "Name: " << name << "\n";
        // must to avoid displaying the password in real scenarios.
        //    << "Password: " << password << "\n"; 
    }
};
