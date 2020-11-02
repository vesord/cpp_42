/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:29:41 by matrus            #+#    #+#             */
/*   Updated: 2020/11/02 02:29:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _size( 0 ), _span(), _curSize( 0 ) { }
Span::Span(const Span & span) : _size( 0 ), _span(), _curSize( 0 ) { (void)span; }
Span & Span::operator=(const Span & span) { (void)span; return *this; }
Span::~Span() { }

Span::Span( unsigned int n ) : _size( n ), _span(), _curSize( 0 ), _isSorted( false ) { }

void Span::addNumber(int n) {
	if (_curSize == _size)
		throw SpanOverflowException();
	_span.push_front(n);
	_isSorted = false;
	++_curSize;
}

//void Span::addNumber(std::iterator<int, std::list<int> > it,
//					 std::iterator<int, std::forward_iterator_tag> ite) {
//	while ( it != ite)
//	{
//
//	}
//}

unsigned int Span::longestSpan() {
	if (_curSize < 2)
		throw SpanNotEnoughNumbersException();
	_sortSpan();
	return _span.back() - _span.front();
}

unsigned int Span::shortestSpan() {
	if (_curSize < 2)
		throw SpanNotEnoughNumbersException();
	_sortSpan();

	std::list<int>::iterator 	it = _span.begin();
	std::list<int>::iterator 	itn = it;
	std::list<int>::iterator 	ite = _span.end();
	unsigned int				minSpan = UINT32_MAX;

	++itn;
	while ( itn != ite ) {
		if ( static_cast<unsigned int>(*itn - *it) < minSpan )
			minSpan = *itn - *it;
		++itn;
		++it;
	}
	return minSpan;
}

void Span::_sortSpan() {
	if (!_isSorted) {
		_span.sort();
		_isSorted = !_isSorted;
	}
}

const char * Span::SpanOverflowException::what() const throw() {
	return "span overflow";
}

const char * Span::SpanNotEnoughNumbersException::what() const throw() {
	return "not enough objects";
}

