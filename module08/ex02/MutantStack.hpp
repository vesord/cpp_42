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
	iterator();
	~iterator();

	MutantStack<T>::iterator & operator=( MutantStack<T>::iterator const & );
	iterator( MutantStack<T>::iterator const & );
	iterator( T * );

	bool operator==( MutantStack<T>::iterator const & );
	bool operator!=( MutantStack<T>::iterator const & );

	MutantStack<T>::iterator & operator++();
	MutantStack<T>::iterator operator++(int);

	MutantStack<T>::iterator & operator--();
	MutantStack<T>::iterator operator--(int);

	T & operator*();

private:

	T*		_ptr;

};

	MutantStack<T>::iterator begin();
	MutantStack<T>::iterator end();

private:

};

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return iterator(&this->top() - this->size());
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return iterator(&this->top());
}

template < typename T >
MutantStack<T>::iterator::iterator() {
	this->_ptr = nullptr;
}

template < typename T >
MutantStack<T>::iterator::~iterator() { }

template < typename T >
MutantStack<T>::iterator::iterator(const MutantStack<T>::iterator & iterator1) {
	*this = iterator1;
}

template < typename T >
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator=(
	const MutantStack<T>::iterator & rhs)
{
	if (this == &rhs)
		return *this;

	this->_ptr = rhs._ptr;
	return *this;
}

template < typename T >
MutantStack<T>::iterator::iterator(T * ptr) {
	this->_ptr = ptr;
}

template < typename T >
bool MutantStack<T>::iterator::operator==(const MutantStack<T>::iterator & rhs) {
	return this->_ptr == rhs._ptr;
}

template < typename T >
bool MutantStack<T>::iterator::operator!=(const MutantStack<T>::iterator & rhs) {
	return this->_ptr != rhs._ptr;
}

template < typename T >
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator++() {
	this->_ptr -= 1;
	return *this;
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator++(int) {
	MutantStack<T>::iterator tmp = *this;
	this->operator++();
	return tmp;
}

template < typename T >
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator--() {
	this->_ptr += 1;
	return *this;
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator--(int) {
	MutantStack<T>::iterator tmp = *this;
	this->operator--();
	return tmp;
}

template < typename T >
T & MutantStack<T>::iterator::operator*() {
	return *(this->_ptr);
}

#endif
