/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:29:42 by matrus            #+#    #+#             */
/*   Updated: 2020/11/02 02:29:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <list>
#include <iterator>

class Span {

public:

	~Span();
	Span( unsigned int n );

	void addNumber( int n );
//	void addNumber( std::iterator<int,std::forward_iterator_tag>,
//	    std::iterator<int,std::forward_iterator_tag>);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	class SpanOverflowException : public std::exception {
	public:
		const char * what() const throw();
	};

	class SpanNotEnoughNumbersException : public std::exception {
	public:
		const char * what() const throw();
	};

private:

	unsigned int		_size;
	std::list<int>		_span;
	unsigned int		_curSize;
	bool				_isSorted;

	void	_sortSpan();

	Span();
	Span( Span const & span );
	Span & operator=( Span const & span );

};


#endif
