#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Phonebook
{
	private:
		std::string	FirstName[8];
		std::string	LastName[8];
		std::string	NickName[8];
		std::string	Login[8];
		std::string	PostalAddress[8];
		std::string	PhoneNumber[8];
		std::string	BirthdayDate[8];
		std::string	FavoriteMeal[8];
		std::string	UnderwearColor[8];
		std::string	DarkestSecret[8];

	public:
	void	setFirstName(std::string str, int i){
		this->FirstName[i] = str;}
	void	setLastName(std::string str, int i){
		this->LastName[i] = str;}
	void	setNickName(std::string str, int i){
		this->NickName[i] = str;}
	void	setLogin(std::string str, int i){
		this->Login[i] = str;}
	void	setPostalAddress(std::string str, int i){
		this->PostalAddress[i] = str;}
	void	setPhoneNumber(std::string str, int i){
		this->PhoneNumber[i] = str;}
	void	setBirthdayDate(std::string str, int i){
		this->BirthdayDate[i] = str;}
	void	setFavoriteMeal(std::string str, int i){
		this->FavoriteMeal[i] = str;}
	void	setUnderwearColor(std::string str, int i){
		this->UnderwearColor[i] = str;}
	void	setDarkestSecret(std::string str, int i){
		this->DarkestSecret[i] = str;}

	std::string	getFirstName(int i){
		return this->FirstName[i];}
	std::string	getLastName(int i){
		return this->LastName[i];}
	std::string	getNickName(int i){
		return this->NickName[i];}
	std::string	getLogin(int i){
		return this->Login[i];}
	std::string	getPostalAddress(int i){
		return this->PostalAddress[i];}
	std::string	getPhoneNumber(int i){
		return this->PhoneNumber[i];}
	std::string	getBirthdayDate(int i){
		return this->BirthdayDate[i];}
	std::string	getFavoriteMeal(int i){
		return this->FavoriteMeal[i];}
	std::string	getUnderwearColor(int i){
		return this->UnderwearColor[i];}
	std::string	getDarkestSecret(int i){
		return this->DarkestSecret[i];}
};

/*
 * phonebook_utils
 */
std::string	trim_contact(std::string str);

#endif
