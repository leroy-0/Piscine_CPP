#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <sstream>

#include "Parser.h"

Parser::Parser()
{
	_result = 0;
}

Parser::~Parser()
{

}

void 					Parser::feed(const std::string & operations)
{
	std::stringstream 	tmp;
	char 				my_operator;
	std::string 		tmp_str;
	int 				x, y = 0;
	int 				res = 0;

	for (unsigned int i = 0; i < operations.size(); ++i)
	{
		if (operations[i] != ' ' && operations[i] != '\t')
		{
			if ((operations[i] > '9' || operations[i] < '0'))
			{
				_entree.push_back(operations.substr(i, 1));
			}
			else
			{
				while (operations[i] <= '9' && operations[i] >= '0')
				{
					tmp << operations[i];
					i++;
				}
				i--;
				_entree.push_back(tmp.str());
				tmp.str("");
				tmp.clear();
			}
		}
	}

	for (std::vector<std::string>::iterator it = _entree.begin(); it != _entree.end() ;it++)
	{
		if (*it == "+" || *it == "-" || *it == "*" || *it == "/" || *it == "%" || *it == "(")
		{
			tmp << *it;
			tmp >> my_operator;
		
			if (!_operands.empty() && (_operands.top() == '/' || _operands.top() == '*' || _operands.top() == '%')
				&& *it != "(")
			{
				tmp << _operands.top();
				tmp >> tmp_str;
				_sortie.push_back(tmp_str);
				_operands.pop();
				_operands.push(my_operator);
			}
			else
			{
				_operands.push(my_operator);
			}
			tmp.str("");
			tmp.clear();
		}
		else if (*it == ")")
		{
			while (!_operands.empty() && _operands.top() != '(')
			{
				tmp << _operands.top();
				tmp >> tmp_str;
				_sortie.push_back(tmp_str);
				_operands.pop();
				tmp.str("");
				tmp.clear();
				tmp_str = "";
				tmp_str.clear();
			}
			_operands.pop();
		}
		else
		{
			_sortie.push_back(*it);
		}
	}
	while (!_operands.empty())
	{
		tmp << _operands.top();
		tmp >> tmp_str;
		_sortie.push_back(tmp_str);
		_operands.pop();
		tmp.str("");
		tmp.clear();
		tmp_str = "";
		tmp_str.clear();
	}

	for (std::vector<std::string>::iterator it = _sortie.begin(); it != _sortie.end(); it++)
	{
		if (*it == "+" || *it == "-" || *it == "*" || *it == "/" || *it == "%")
		{
			it--;
			tmp << *it;
			tmp >> y;
			tmp.str("");
			tmp.clear();
			it--;
			tmp << *it;
			tmp >> x;
			tmp.str("");
			tmp.clear();
			it += 2;

			if (*it == "+")
				res = (x + y);
			else if (*it == "-")
				res = (x - y);
			else if (*it == "*")
				res = (x * y);
			else if (*it == "/")
				res = (x / y);
			else if (*it == "%")
				res = (x % y);

			_sortie.erase(it);
			it -= 2;
			tmp << res;
			_sortie[std::distance(_sortie.begin(), it)] = tmp.str();
			tmp.str("");
			tmp.clear();
			it++;
			_sortie.erase(it);
			it = _sortie.begin();
		}
	}

	tmp << _sortie[0];
	tmp >> x;
	_result += x;

	_sortie.clear();
	_entree.clear();

}

int 	Parser::result() const
{
	return (_result);
}

void 	Parser::reset()
{
	_result = 0;
}