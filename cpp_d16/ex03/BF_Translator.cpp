//
// BF_Translator.cpp for Project-Master in /home/tekm/tek1/cpp_d16/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 19 19:51:22 2017 leroy_0
// Last update Thu Jan 19 19:51:23 2017 leroy_0
//

#include "BF_Translator.h"

int BF_Translator::translate(std::string in, std::string out)
{
    _in.open(in.data());
    _out.open(out.data());

    if (!_in.is_open() || !_out.is_open())
        return (1);
    _out << "#include <stdlib.h>" << std::endl;
    _out << "#include <string.h>" << std::endl;
    _out << "#include <unistd.h>" << std::endl;

    _out << "int main()" << std::endl;
    _out <<	"{" << std::endl;
    _out << "int i = 0;" << std::endl;
    _out << "char c[60 * 1024];" << std::endl;
    _out << "memset(&c, 0 , 60 * 1024);" << std::endl;

    while (_in.good())
        _out << _map[_in.get()] << std::endl;

    _out << "return (0);" << std::endl;
    _out << "}" << std::endl;
    _in.close();
    _out.close();
    return (0);
}

BF_Translator::BF_Translator()
{
    _map['+'] = "c[i]++;";
    _map['-'] = "c[i]--;";
    _map['>'] = "i++;";
    _map['<'] = "i--;";
    _map['.'] = "write(1, &c[i], 1);";
    _map[','] = "read(0, &c[i], 1);";
    _map['['] = "while (c[i]) {";
    _map[']'] = "}";
}

BF_Translator::~BF_Translator()
{

}