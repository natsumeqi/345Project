#include "Subject.h"

Subject::Subject()
{
	_observers = new std::list<Observer*>;
}


Subject::~Subject()
{
	delete _observers;
}

void Subject::attach(Observer *o) {
	_observers->push_back(o);
}

void Subject::detach(Observer *o) {
	_observers->remove(o);
}

void Subject::notify() {
	std::list<Observer *>::iterator i = _observers->begin();
	for (; i != _observers->end(); i++) {
		(*i)->update();
	}
}

//void Subject::notifyStep() {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updateStep();
//	}
//}
//
//void Subject::notifyTurn() {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updateTurn();
//	}
//}
//
//void Subject::notifyPhase() {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updatePhase();
//	}
//}
//void Subject::notifyPlayer() {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updatePlayer();
//	}
//}
//
//void Subject::notifyHeader() {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updateHeader();
//	}
//}
//
//void Subject::notifyAuctionResult(Player p, PowerPlant card) {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updateAuctionResult(p,card);
//	}
//}
//
//void Subject::notifyOnePlayerTurn(Player p) {
//	std::list<Observer *>::iterator i = _observers->begin();
//	for (; i != _observers->end(); i++) {
//		(*i)->updateOnePlayerTurn(p);
//	}
//}

