#include "Account.h"

int Account::id = 0;
Account::Account(std::string _username) :
	username(_username), uniqeId(id++)
{
	next = nullptr;
}

Account::Account(Account& a)
	:uniqeId(a.uniqeId), username(a.username) 
{
	name = a.name;
	phoneNumber = a.phoneNumber;
	followings = a.followings;
	followers = a.followers;
}



int Account::getUniqeId()const { return uniqeId; }

std::string Account::getUsername()const { return username; }

int Account::getPhoneNumber()const { return phoneNumber; }

std::string Account::getName()const { return name; }

std:: vector<int> Account::getFollowings()const { return followings; }

void Account::follow(Account _accountToFollow)
{
	followings.push_back(_accountToFollow.getUniqeId());
	_accountToFollow.followers.push_back(this->uniqeId);
}

void Account::setName(std::string _name) { name = _name; }

void Account::setPhoneNumber(int _phoneNumber) { phoneNumber = _phoneNumber; }

void Account::print()
{
	std::cout << "id: " << uniqeId << "\tusername: " << username << std::endl;
}