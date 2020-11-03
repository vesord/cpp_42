/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:27:30 by matrus            #+#    #+#             */
/*   Updated: 2020/11/02 22:27:32 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template < typename T >
class MutantStack : public std::stack< T > {

public:

	MutantStack() : std::stack<T>() { };
	virtual ~MutantStack() { };
	MutantStack(MutantStack const & mutantstack) : std::stack<T>( mutantstack ) { };

	MutantStack & operator=(MutantStack const & mutantstack) {
		*this = mutantstack;
		return *this;
	};

class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {

public:
	iterator() { this->_ptr = nullptr; };
	~iterator() { };

	MutantStack<T>::iterator & operator=( MutantStack<T>::iterator const & rhs ) {
		if (this == &rhs)
			return *this;
		this->_ptr = rhs._ptr;
		return *this;
	}
	iterator( MutantStack<T>::iterator const & iterator1 ) { *this = iterator1; };
	iterator( T * ptr ) { this->_ptr = ptr; };

	bool operator==( MutantStack<T>::iterator const & rhs ) { return this->_ptr == rhs._ptr; };
	bool operator!=( MutantStack<T>::iterator const & rhs ) { return this->_ptr != rhs._ptr; };

	MutantStack<T>::iterator & operator++() { this->_ptr -= 1; return *this; };
	MutantStack<T>::iterator operator++(int) {
		MutantStack<T>::iterator tmp = *this;
		this->operator++();
		return tmp;
	};

	MutantStack<T>::iterator & operator--() { this->_ptr += 1; return *this; };
	MutantStack<T>::iterator operator--(int) {
		MutantStack<T>::iterator tmp = *this;
		this->operator--();
		return tmp;
	};

	T & operator*() { return *(this->_ptr); };

private:

	T*		_ptr;

};

	MutantStack<T>::iterator begin() { return iterator(&this->top()); };
	MutantStack<T>::iterator end() { return iterator(&this->top() - this->size()); };

private:

};

#endif
