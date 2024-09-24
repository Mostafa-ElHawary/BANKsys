#define VALIDATION_H
#pragma once

#include <iostream>
#include <string>
#include <algorithm>

class Validation {
public:
    static constexpr int MIN_NAME_LENGTH = 5;
    static constexpr int MAX_NAME_LENGTH = 20;
    static constexpr int MIN_PASSWORD_LENGTH = 8;
    static constexpr int MAX_PASSWORD_LENGTH = 20;
    static constexpr double MIN_BALANCE = 1500.0;
    static constexpr double MIN_SALARY = 5000.0;

    static bool validName(const std::string& name) {
        if (name.size() < MIN_NAME_LENGTH || name.size() > MAX_NAME_LENGTH) {
            return false;
        }
        return std::all_of(name.begin(), name.end(), ::isalpha);
    }

    static bool validPassword(const std::string& password) {
        return password.size() >= MIN_PASSWORD_LENGTH && password.size() <= MAX_PASSWORD_LENGTH;
    }

    static bool validBalance(double balance) {
        return balance >= MIN_BALANCE;
    }

    static bool validSalary(double salary) {
        return salary >= MIN_SALARY;
    }
};

