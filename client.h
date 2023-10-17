//
// Created by HUBERT Mateo on 14/10/2023.
//
#include <string>
#ifndef TD1_CLIENT_H
#define TD1_CLIENT_H

class Client {
public:
    Client(int client_id, std::string name, std::string firstname, int nb_account, std::string phone);
    void updateNbAccount(int nb_account);
    void updatePhone(std::string phone);
    void toString() const;
    std::string getName() const;
    std::string getFirstname() const;
    int getNbAccount() const;
    std::string getPhone() const;
    int getClientId() const;
private:
    int _client_id;
    std::string _name;
    std::string _firstname;
    int _nb_account;
    std::string _phone;
};

#endif //TD1_CLIENT_H
