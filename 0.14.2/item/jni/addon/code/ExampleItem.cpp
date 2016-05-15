#include "ExampleItem.h"

ExampleItem::ExampleItem(const std::string& name, short id) : Item(name, id)
{
	Item::mItems[id] = this;
	setCategory(CreativeItemCategory::ITEMS);
	setIcon(apple, 0);
}