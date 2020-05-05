#ifndef __PARSER_H_
#define __PARSER_H_

#include <stack>
#include <string>
#include <iostream>
#include <vector>

class Parser
{
	public:
		void 	feed(const std::string &);
		int 	result() const;
		void 	reset();

		Parser();
		~Parser();

	public:
		std::stack<char>			_operands;
		std::vector<std::string> 	_entree;
		std::vector<std::string> 	_sortie;
		int 						_result;
};

#endif	/* __PARSER_H_ */