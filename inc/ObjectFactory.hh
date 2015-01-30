/*
 * ObjectFactory.hh
 *
 *  Created on: 27 jan 2015
 *      Author: ankunge
 */

#ifndef INC_OBJECTFACTORY_HH_
#define INC_OBJECTFACTORY_HH_


class ObjectFactory {
	public:
//	Object* objectList;
	Object* CreateObject();
	Object* CreateObject(int val);

};
#endif /* INC_OBJECTFACTORY_HH_ */
