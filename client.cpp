//
// Created by HUBERT Mateo on 14/10/2023.
//
#include <iostream>
#include <string>
#include "client.h"

Client::Client(int client_id, std::string name, std::string firstname, int nb_account, std::string phone) : _client_id(client_id), _name(name), _firstname(firstname), _nb_account(nb_account), _phone(phone) {}

void Client::updateNbAccount(int nb_account) {
    _nb_account = nb_account;
}

void Client::updatePhone(std::string phone) {
    _phone = phone;
}

void Client::toString() const {
    std::cout << "client id: " << _client_id << std::endl <<"name: " << _name << std::endl << "firstname: " << _firstname << std::endl  << "nb of account: " << _nb_account << std::endl << "phone number: " << _phone << std::endl;
}

std::string Client::getName() const {
    return _name;
}

std::string Client::getFirstname() const {
    return _firstname;
}

int Client::getNbAccount() const {
    return _nb_account;
}

std::string Client::getPhone() const {
    return _phone;
}

int Client::getClientId() const {
    return _client_id;
}


