/*
 * ObjectFactory.cc
 *
 *  Created on: 26 jan 2015
 *      Author: ankunge
 */
#include "../inc/Object.hh"
#include "../inc/ObjectFactory.hh"

Object* ObjectFactory::CreateObject() {
	return new Object();
}

Object* ObjectFactory::CreateObject(int val) {
	return new Object(val);
	/*if (objectList) {
		objectList->next_object->value=val;
	} else {
		objectList->value = val;
	}
	return objectList; // Object(val);*/
}





