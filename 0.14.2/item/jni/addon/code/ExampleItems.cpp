#include "ExampleItems.h"
#include "ExampleItem.h"

Item* ExampleItems::example;

void ExampleItems::initItems()
{
	example = new ExampleItem("example", 420);
}

void ExampleItems::initCreativeItems()
{
	addCreativeItem(example, 0);
}