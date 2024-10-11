#pragma once
#include <iostream>
#include <vector>
class Account
{
public:
	Account(Account&);
	Account(std::string _username);
	int getUniqeId()const;
	std::string getUsername()const;
	int getPhoneNumber()const;
	std::string getName()const;
	std::vector<int> getFollowings()const;
	void follow(Account _accountToFollow);
	void setName(std::string _name);
	void setPhoneNumber(int _phoneNumber);
	void print();

	Account* next;
	static int id;

private:
	
	const int uniqeId;
	const std:: string username;
	std::string name;
	int phoneNumber;
	std::vector<int> followings; 
	std::vector<int> followers;

};

