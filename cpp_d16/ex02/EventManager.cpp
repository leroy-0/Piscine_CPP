#include <string>
#include <iostream>
#include "EventManager.h"

EventManager::EventManager()
{
_currentTime = 0;
}

EventManager::EventManager(EventManager const &event)
{
    _list = event._list;
    _currentTime = event._currentTime;
}

EventManager::~EventManager()
{

}

bool sortByTime(const Event &event, const Event &event2)
{
    return ((event.getTime() < event2.getTime()));
}

void EventManager::addEvent(const Event &event)
{
    if (_currentTime <= event.getTime())
    {
        _list.push_back(event);
        _list.sort(sortByTime);
    }
}

void EventManager::addEventList(std::list <Event> &event)
{
    std::list<Event>::const_iterator i = event.begin();
    while (i != event.end())
    {
        addEvent((*i));
        i++;
    }
}

void EventManager::addTime(unsigned int time)
{
    _currentTime += time;

    std::list<Event>::iterator i = _list.begin();

    while (i != _list.end())
    {
        while (_currentTime >= (*i).getTime())
        {
            std::cout << (*i).getEvent() << std::endl;
            _list.erase(i);
            i = _list.begin();
        }
        i++;
    }

}

void EventManager::dumpEventAt(unsigned int time) const
{
    std::list<Event>::const_iterator i = _list.begin();

    while (i != _list.end())
    {
        if (time == (*i).getTime())
            std::cout << (*i).getTime() << ": "<< (*i).getEvent() << std::endl;
        i++;
    }

}

void EventManager::dumpEvents() const
{
    std::list<Event>::const_iterator i = _list.begin();

    while (i != _list.end())
    {
        std::cout << (*i).getTime() << ": "<<(*i).getEvent() << std::endl;
        i++;
    }
}

EventManager& EventManager::operator=(EventManager const &event)
{
    _list = event._list;
    _currentTime = event._currentTime;
    return (*this);
}

void EventManager::removeEventsAt(unsigned int time)
{
    std::list<Event>::iterator i = _list.begin();

    while (i != _list.end())
    {
        if (time == (*i).getTime()) {
            _list.erase(i);
            i = _list.begin();
        }
        i++;
    }
}