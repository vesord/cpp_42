/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 00:33:19 by matrus            #+#    #+#             */
/*   Updated: 2020/10/30 00:33:21 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <cstdlib>
#include <stdexcept>

template < typename T>
class Array {

public:

	Array() : _begin( nullptr ), _size( 0 ) { }
	~Array() {
		delete [] this->_begin;
	}

	Array( unsigned int size ) : _begin( nullptr ), _size( size ) {
		this->_begin = new T[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_begin[i] = T();
	}

	Array( Array const & array ) : _begin( nullptr ), _size(array.size()) {
		*this = array;
	}

	Array & operator=( Array const & array ) {
		if (this == &array)
			return *this;
		delete [] this->_begin;
		this->_size = array.size();
		this->_begin = new T[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_begin[i] = array[i];
		return *this;
	}

	T & operator[](size_t i) const {
		if (i >= this->_size)
			throw std::out_of_range("index out of bounds");
		return this->_begin[i];
	}

	size_t size() const { return this->_size; }

private:

	T *		_begin;
	size_t	_size;

};

#endif
