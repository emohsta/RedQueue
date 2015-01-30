
#include<iostream>
#include<time.h>
#include "../inc/Object.hh"
#include "../inc/ObjectFactory.hh"
#include <cstdlib>

int main()
{
	clock_t sTime;
	sTime = clock();

	ObjectFactory* myFactory = new ObjectFactory();
	Object* objectList = myFactory->CreateObject();
	for (int i=1;i<10;i++) {
		objectList->addObject(300-i);
		std::cout <<"i " << i << std::endl;
	}
	objectList->printObject(objectList);
	objectList->printList(objectList);
  std::cout << "Total CPU tid använd: "<< (double) (clock()-sTime)/CLOCKS_PER_SEC  << " sekunder." << std::endl;
    return 0;

}
