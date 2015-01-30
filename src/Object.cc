#include "../inc/Object.hh"
#include <iostream>

/* default constructor */
Object::Object(){
	next_object = NULL;
}

Object::Object(int val){
	value = val;
	next_object = NULL;
}

Object* Object::operator=(Object* list){
	std::cout << "item->value: " << value << std::endl;

	this->value = list->value;
	std::cout << "item->value: " << value << std::endl;
    this->next_object = list->next_object;
	return this;
}

Object* Object::addObject(int val) {
	if (this->value == NULL) {
		this->value = val;
		 return this;
	} else {
		Object* tmpObject = new Object(val);
		std::cout << "11tmpObject->value: " << tmpObject->value << std::endl;
		tmpObject->next_object->value = this->value;
		tmpObject->next_object->next_object = this->next_object;

		return tmpObject;
	}
}

void Object::printList(Object* list) const {
	Object* tmpList = new Object();
	std::cout << "hej"  << std::endl;

	tmpList->value = list->value;
	tmpList->next_object = list->next_object;
	std::cout << "tmpList->value: " << tmpList->value << std::endl;
	std::cout << "list->value: " << list->value << std::endl;
//	std::cout << "tmpList->value: " << ist->next_object->value << std::endl;

	std::cout << "hej 6"  << std::endl;

	while (tmpList->next_object != NULL) {
		std::cout << "item->value: 5" << tmpList->value << std::endl;
		tmpList = tmpList->next_object;

	}
}

void Object::printObject(Object*  item) const {
	std::cout << "item->value: " << item->value << std::endl;
}


