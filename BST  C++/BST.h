#pragma once
#include "Node.h"

class BST
{
private:
	int count{};
	std::shared_ptr<Node> root{};
public:
	std::shared_ptr<Node> Find();

	//Draw Tree recursively
	void DisplayTree(std::shared_ptr<Node> node,int xpos, int ypos, int width);
};

