#include <string>
#include <iostream>
#include "Event.h"

Event::Event(const Event &event)
{
    _time = event.getTime();
    _name = event.getEvent();
}

Event::Event(unsigned int time, const std::string & name) : _name(name), _time(time)
{

}

Event::Event()
{
	_time = 0;
}

Event::~Event()
{

}

Event& Event::operator=(const Event &event)
{
    _time = event.getTime();
    _name = event.getEvent();
    return (*this);
}

const std::string & Event::getEvent() const
{
    return (this->_name);
}

unsigned int Event::getTime() const
{
    return (this->_time);
}

void Event::setEvent(const std::string &name)
{
    this->_name = name;
}

void Event::setTime(unsigned int time)
{
    this->_time = time;
}