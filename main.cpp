#include <iostream>
#include "date.h"
#include <vector>
#include "client.h"

void menu(){
    std::cout << "1. Create a client" << std::endl;
    std::cout << "2. Show all clients" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

int main() {
    std::vector<Client> clients;
    int choice = 0;
    int client_id = 0;
    int nb_account =  0;
    int i = 0;
    std::string name;
    std::string firstname;
    std::string phone;
    menu();
    std::cin >> choice;
    while (choice != 3){
        switch (choice) {
            case 1:
                std::cout << "Enter the client id: ";
                std::cin >> client_id;
                std::cout << "Enter the name: ";
                std::cin >> name;
                std::cout << "Enter the firstname: ";
                std::cin >> firstname;
                std::cout << "Enter the number of account: ";
                std::cin >> nb_account;
                std::cout << "Enter the phone number: ";
                std::cin >> phone;
                break;
            case 2:
                for (const auto& client : clients) {
                    client.toString();
                }
                break;
            default:
                std::cout << "Wrong choice" << std::endl;
                break;
        }
        Client client(client_id, name, firstname, nb_account, phone);
        clients.push_back(client);
        i++;
        menu();
        std::cin >> choice;
    }
    return 0;
}
