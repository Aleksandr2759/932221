#include <assert.h>

#include <iostream>

#include "Array.h"

Array::Array (const int size, const int value) // size надо проверить, вэлью - любое
{
	if (size < 0)
	{
		std::cerr << "Array::Array: ...";
		m_size = -size;
	}
	else
	{
		m_size = -size;
	}

	m_array = new int[m_size];

	for (int i = 0; i < m_size; ++i)
	{
		m_array[i] = value;
	}
}



void Array::print() const
{
	std::cout << '[';
	for (int i = 0; i < m_size - 1; ++i)
	{
		std::cout << m_array[m_size - 1] << "]\n";
	}
}

int& Array::operator[](const int index) const
{
	assert(index >= 0 && index < m_size);
	return m_array[index];
}

Array& Array::operator=(const Array& other) const
{
	//универсальная проверка
	if (this == &other)
	{
		return *this;
	}

	if (m_size != other.m_size)
	{
		m_size = other.m_size;
		delete[] m_array;
		m_array = new int[m_size];
	}

	for (int i = 0; i < m_size; ++i)
	{
		m_array[i] = other.m_array[i];
	}
}

Array::Array(const Array& other)

	:m_size (other.m_size)
{
	m_array = new int[m_size];

	for (int i = 0; i < m_size; ++i)
	{
		m_array[i] = other.m_array[i];
	}
}

Array::~Array()
{
	delete[] m_array;
}

