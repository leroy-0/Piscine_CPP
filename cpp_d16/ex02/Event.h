#ifndef __EVENT_H_
#define __EVENT_H_

#include <iostream>
#include <string>

class Event {

public:
    Event(void);
    Event(unsigned int, const std::string&);
    ~Event(void);
    Event(const Event&);
    Event& operator=(const Event&);

public:
    unsigned int getTime(void) const;
    const std::string& getEvent(void) const;
    void setTime(unsigned int);
    void setEvent(const std::string&);

private:
    std::string _name;
    unsigned int _time;

};

#endif  /* _EVENT_H_ */