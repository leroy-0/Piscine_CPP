#ifndef __EVENTMANAGER_H_
#define __EVENTMANAGER_H_

#include "Event.h"
#include <list>
#include <iostream>
#include <string>

class EventManager {

public:

    EventManager();
    ~EventManager();
    EventManager(EventManager const &);
    EventManager& operator=(EventManager const &);

    void addEvent(const Event&);

    void removeEventsAt(unsigned int);

    void dumpEvents(void) const;

    void dumpEventAt(unsigned int) const;

    void addTime(unsigned int);

    void addEventList(std::list<Event>&);

private:
    std::list <Event>   _list;
    unsigned int        _currentTime;
};

#endif  /* __EVENTMANAGER_H_ */
