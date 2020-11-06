#include "BST.h"
#include "gotoXY.h"
#include <iostream>

void BST::DisplayTree(std::shared_ptr<Node> node, int xpos, int ypos, int width)
{
	gotoXY coord;
	if (root == nullptr)
	{
		throw("BST is empty!");
	}
	coord.goToXY(xpos, ypos);
	std::cout << node->value;
	width = width / 2;
	//display tree recursively
	DisplayTree(node->left, xpos + width, ypos + 1, width);
	DisplayTree(node->right, xpos - width, ypos + 1, width);
}