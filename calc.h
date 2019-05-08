#pragma once
#include "node.h"

class calculator {
public:
	std::string getRPN(std::string &str);//���������� ������ � �������� �������� �������
	token count(std::string &str);//���������� �������������� ��������� ���������
private:
	void getAllTokens(std::string &str);
	int sort();
	customStack bufferStack;
	customQueue exitQueue;
	std::vector<token> tokens;
};