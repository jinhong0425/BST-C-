#pragma once
#include <memory>

class Node
{
private:
	
public:
	int value{};
	std::weak_ptr<Node> parent{};
	std::shared_ptr<Node> left{};
	std::shared_ptr<Node> right{};
	bool isRightChild();
	bool isLeftChild();
};

