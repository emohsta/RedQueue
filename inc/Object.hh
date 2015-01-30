/*
 * Object.hh
 *
 *  Created on: 2 nov 2014
 *      Author: ankunge
 */

#ifndef INC_OBJECT_HH_
#define INC_OBJECT_HH_

class Object {
public:
	int value;
	Object* next_object;

	Object();

	Object(int val);

	Object* operator=(Object* list);

	Object*  addObject( int value) ;

	void printObject (Object*  item) const;

	void printList (Object*  list) const;


};


#endif /* INC_OBJECT_HH_ */
