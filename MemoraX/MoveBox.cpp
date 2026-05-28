#include "MoveBox.h"
#include <iostream>

MoveBox::MoveBox(int s)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = i;
	}
}

MoveBox::~MoveBox()
{
	delete[] data;
}

MoveBox::MoveBox(const MoveBox& other)
{
	size = other.size;
	data = new int[size];
	for (int i = 0; i < size; ++i)
	{
		data[i] = other.data[i];
	}
}

MoveBox& MoveBox::operator=(const MoveBox& other)
{
	if (this == &other)
		return *this;
	size = other.size;
	delete[] data;

	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
	return *this;
}

MoveBox::MoveBox(MoveBox&& other) noexcept
{
	data = other.data;
	size = other.size;

	other.data = nullptr;
	other.size = 0;
}

MoveBox& MoveBox::operator=(MoveBox&& other) noexcept
{
	if (this == &other) {
		return *this;
	}
	size = other.size;
	data = other.data;
	size = other.size;
	data = nullptr;
	size = 0;
	return *this;
}
void MoveBox::display() const
{
	for (int i = 0; i < size; i++)
		std::cout << data[i] << " ";

	std::cout << "\n";
}


