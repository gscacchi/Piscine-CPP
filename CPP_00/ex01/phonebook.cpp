/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:10:04 by gscala            #+#    #+#             */
/*   Updated: 2021/08/21 14:10:07 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

//align names in search function and truncate them when larger than 9 width
//fix when put chars instead of integers in phone number
//fix triple repetiion of "welcome .." after add action

class  contact{

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        long long int         phone_number;
        std::string darkest_secret;

    public:
        void set_first_name(std::string name){
            first_name = name;
        }
        std::string get_first_name(){
            return(first_name);
        }

        void set_last_name(std::string name){
            last_name = name;
        }
        std::string get_last_name(){
            return(last_name);
        }

        void set_nickname(std::string name){
            nickname = name;
        }
        std::string get_nickname(){
            return(nickname);
        }
        void set_phone_number(long long int number){
            phone_number = number;
        }
        long long int get_phone_number(){
            return(phone_number);
        }

        void set_darkest_secret(std::string secret)
        {
            darkest_secret = secret;
        }
        std::string get_darkest_secret(){
            return(darkest_secret);
        }
};

std::string     ft_align(std::string string)
{
    size_t i;
    std::string string1;

    i = string.length();
    if (i == 13)
        return (string);
    else if (i > 13)
    {
        string1 = string.substr(0, 9);
        return (string1);
    }
    else if (i < 13)
    {
        string1 = string;
        while (i < 13)
        {
            string1 = string1 + ' ';
            i++;
        }
        return(string1);
    }
    return(0);
}

contact    ft_add_contact(contact contact)
{
    std::string string;
    long long int number;

    std::cout << "Insert contact name\n";
    std::cin >> string;
    contact.set_first_name(string);
    std::cout << "Insert contact last name\n";
    std::cin >> string;
    contact.set_last_name(string);
    std::cout << "Insert contact nickname\n";
    std::cin >> string;
    contact.set_nickname(string);
    std::cout << "Insert contact phone number\n";
    // only if contains only integers otherwise wrong input and repeat
    std::cin >> number;
    contact.set_phone_number(number);
    std::cout << "Insert contact darkest secret\n";
    std::cin >> string;
    contact.set_darkest_secret(string);
    return(contact);
}

void    ft_search_contact(contact contact[], int i)
{
    int k = 0;
    std::string string;

    std::cout << "INDEX";
    std::cout << " | ";
    std::cout << "FIRST NAME";
    std::cout << " | ";
    std::cout << "LAST NAME";
    std::cout << " | ";
    std::cout << "NICKNAME";
    std::cout << "\n";
    while (k < i)
    {
        std::cout << k;
        std::cout << "       ";
        string = contact[k].get_first_name();
        string = ft_align(string);
        std::cout << string;
        string = contact[k].get_last_name();
        string = ft_align(string);
        std::cout << string;
        string = contact[k].get_nickname();
        string = ft_align(string);
        std::cout << string;
        std::cout << "\n";
        k++;
    }
}

int     main(void)
{
    contact contact[8];
    int i;
    std::string input;
    int test;

    i = 0;
    while (1)
    {
        std::cout << "Welcome, user! Please ADD or SEARCH for a contact, or just EXIT the program\n";
        std::cin >> input;
        if (input == "ADD" || input == "add")
        {
            contact[i] = ft_add_contact(contact[i]);
            i++;
        }
        else if (input == "exit")
            break;
        else if (input == "SEARCH" || input == "search")
            ft_search_contact(contact, i);
        /*
        else if (input == "EXIT" || input == "exit")
            ft_exit();
        */
        else
            std::cout << "wrong input\n";
    }
}
