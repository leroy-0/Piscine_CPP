//
// Error.cpp for Project-Master in /home/tekm/tek1/cpp_d14a/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 17:43:22 2017 leroy_0
// Last update Tue Jan 17 17:43:22 2017 leroy_0
//

#include <string>
#include <iostream>
#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component) : _message(message), _component(component)
{

}

NasaError::~NasaError() throw() {}

const char * NasaError::what() const throw()
{
	return (this->_message.c_str());
}

const std::string & NasaError::getComponent() const
{
    return (this->_component);
}

const std::string & CommunicationError::getComponent() const
{
    std::string *tmp = new std::string("CommunicationDevice");
    return (*tmp);
}

MissionCriticalError::MissionCriticalError(const std::string &message, const std::string &component) : NasaError(message, component)
{

}

LifeCriticalError::LifeCriticalError(const std::string &message, const std::string &component) : NasaError(message, component)
{

}

UserError::UserError(const std::string &message, const std::string &component) : NasaError(message, component)
{

}

CommunicationError::CommunicationError(const std::string &message) : NasaError(message)
{

}