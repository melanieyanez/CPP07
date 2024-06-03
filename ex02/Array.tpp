/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:24:36 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/03 13:55:15 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _data(nullptr), _size(0){}

template<typename T>
Array<T>::Array(size_t n): _data(new T[n]), _size(n){}

template<typename T>
Array<T>::Array(const Array &src) : _data(nullptr), _size(0){*this = src;}
	
template<typename T>
Array<T>::~Array(){delete [] this->_data;}

template<typename T>
Array<T> 	&Array<T>::operator=(const Array &rhs){
	if (this != &rhs)
	{
		delete[] this->_data;
		this->_size = rhs.getSize();
		this->_data = new T[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_data[i] = rhs._data[i];
	}
	return *this;
}

template<typename T>
T	&Array<T>::operator[](size_t index){
	if (index >= this->_size)
		throw OutOfBoundsException();
	return this->_data[index];
}

template<typename T>
const T	&Array<T>::operator[](size_t index) const{
	if (index >= this->_size)
		throw OutOfBoundsException();
	return this->_data[index];
}

template<typename T>
size_t 		Array<T>::getSize() const{return this->_size;}