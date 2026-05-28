#pragma once

struct MemoryBlock
{
    int data[10];

    MemoryBlock();

    int& at(int index);
    const int& at(int index) const;

    int get(int index) const;

    int& operator[](int index);
    const int& operator[](int index) const;
};