#include <iostream>
#include "NewSubscriber.h"
#include "PersonalData.h"
#include "PhoneNumbers.h"
#include "Address.h"
#include "Group.h"
#include "Comments.h"

using namespace std;

int main() {
	//при использовании конструктора по умолчанию
	NewSubscriber newSubscriber;
	newSubscriber.personalData.firstName = "Alexandr";
	newSubscriber.personalData.middleName = "Alexandrovich";
	newSubscriber.personalData.lastName = "Kryuchkov";
	newSubscriber.phoneNumbers.mobileNumber = "+79009459277";
	newSubscriber.phoneNumbers.homeNumber = "no";
	newSubscriber.phoneNumbers.workNumber = "no";
	newSubscriber.address.city = "Voronezh";
	newSubscriber.address.street = "Depovskay";
	newSubscriber.address.house = "20";
	newSubscriber.address.flat = "no";
	newSubscriber.group.group = "family";
	newSubscriber.comments.comment = "novice programmer";

	//заполнение данных и попытка создать объект класса использу€ конструктор
	PersonalData personalData("Alexandr", "Alexandrovich", "Kryuchkov");
	PhoneNumbers phoneNumbers("+79009459277", "no", "no");
	Address address("Voronezh", "Depovskay", "20", "no");
	Group group("family");
	Comments comments("novice programmer");
	NewSubscriber newSubscriber2(PersonalData personalData, PhoneNumbers phoneNumbers, Address address, Group group, Comments comments);
	/*ѕосле создани€ объекта отсутствует возможность обратитьс€ к пол€м класса через объект
	* newSubscriber2.
	*/

	/* не рабочий вариант создани€ объекта класса использу€ конструктор 
	NewSubscriber newSubscriber3(PersonalData personalData("Alexandr", "Alexandrovich", "Kryuchkov"), PhoneNumbers phoneNumbers("+79009459277", "no", "no"), Address address("Voronezh", "Depovskay", "20", "no"), Group group("family"), Comments comments("novice programmer"));
	*/
	
	return 0;
}