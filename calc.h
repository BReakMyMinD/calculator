#pragma once
#include "node.h"

class calculator {
public:
	std::string getRPN(std::string &str);//возвращает строку в обратной польской нотации
	token count(std::string &str);//возвращает математический результат выражения
private:
	void getAllTokens(std::string &str);
	int sort();
	customStack bufferStack;
	customQueue exitQueue;
	std::vector<token> tokens;
};