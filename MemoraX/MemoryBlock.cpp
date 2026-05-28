#include "MemoryBlock.h"

MemoryBlock::MemoryBlock()
{
    for (int& iterator : data)
    {
        iterator = 0;
    }
}

int& MemoryBlock::at(int index)
{
    return data[index];
}

const int& MemoryBlock::at(int index) const
{
    return data[index];
}

int MemoryBlock::get(int index) const
{
    return data[index];
}

int& MemoryBlock::operator[](int index)
{
    return data[index];
}

const int& MemoryBlock::operator[](int index) const
{
    return data[index];
}