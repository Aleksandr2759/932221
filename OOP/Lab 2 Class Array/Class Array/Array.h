#pragma once

class Array
{
public:
	Array(const int size = 10, const int value = 0);
	//конструктор копирования:
	Array(const Array& other); // стандартная сигнатура конструктора копирования

	~Array();


	int size() const;

	void print() const;

	Array operator=(const Array other) const;

	const int& operator[] (const int index) const;


private:
	int* m_array = nullptr;
	int m_size = 0;
};
