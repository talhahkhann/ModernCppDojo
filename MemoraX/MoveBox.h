#pragma once
struct MoveBox {
	int* data;
	int size;
	MoveBox(int s);
	~MoveBox();

	MoveBox(const MoveBox& other); //copy
	MoveBox& operator=(const MoveBox& other); //copy assignment
	MoveBox(MoveBox&& other) noexcept; //move
	MoveBox& operator=(MoveBox&& other) noexcept; //move assignment	
	void display() const;
};