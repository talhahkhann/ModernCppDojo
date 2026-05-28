#pragma once

int& getX();

int& subscriptIndex(int arr[], int index);

void setValueAtAddress(int* ptr, int value);
void setValueAtStructure(int* ptr, int value);
void setValueAtIncrement( int &value);
void setValueAtDecrement(int &value);