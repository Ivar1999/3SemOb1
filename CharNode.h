#pragma once


class CharNode {
public:
	char val;
	CharNode* next;

	CharNode(char val) {
		this->val = val;
		next = NULL;
	}

};