#pragma once
#include <list>
#include "observer.h"
class Subject
{
private:
	std::list<Observer*> *_observers;
public:
	Subject();
	~Subject();
	virtual void attach(Observer *o);
	virtual void detach(Observer *o);
	//virtual void notify();
};

