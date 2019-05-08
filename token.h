#pragma once

enum tokenType {
	NO_TYPE = 0,
	NUMBER = 1,
	OPERATOR_LOW_PRIOR = 2,
	OPERATOR_HIGH_PRIOR = 3,
	OPERATOR_MAX_PRIOR = 4,
	OPEN_BRACKET = 5,
	CLOSE_BRACKET = 6
};

struct token {
	std::string value;
	tokenType type;
	void clear();
	token();
};