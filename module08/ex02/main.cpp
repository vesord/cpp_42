/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:26:14 by matrus            #+#    #+#             */
/*   Updated: 2020/11/02 22:26:16 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	std::cout << "mstack top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack size: " << mstack.size() << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	MutantStack<int>::iterator msit = mstack.begin();
	MutantStack<int>::iterator msite = mstack.end();
	++msit;
	--msit;
	std::cout << std::endl << "<--- MSTACK output by iterator --->" << std::endl;
	while (msit != msite)
	{
		std::cout << *msit << std::endl;
		++msit;
	}

	std::list<int> lst;
	lst.push_front(1);
	lst.push_front(2);
	lst.push_front(3);
	lst.push_front(4);
	lst.push_front(5);
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	std::cout << std::endl << "<--- LIST output by iterator --->" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::cout << std::endl << "<--- copy mstack to normal one end output msit --->" << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	std::cout << std::endl << "<--- assignation of iterators --->" << std::endl;
	msit = mstack.begin();
	++msit;
	++msit;
	MutantStack<int>::iterator newit;
	newit = msit;
	while (msit != msite)
	{
		std::cout << *msit << std::endl;
		++msit;
	}

	std::cout << std::endl << "<--- stack copying --->" << std::endl;
	MutantStack<int> mstackCopy = mstack;
	mstack.push(99);
	msit = mstackCopy.begin();
	msite = mstackCopy.end();
	std::cout << "copy" << std::endl;
	while (msit != msite)
	{
		std::cout << *msit << std::endl;
		++msit;
	}
	msit = mstack.begin();
	msite = mstack.end();
	std::cout << "origin (with new elem)" << std::endl;
	while (msit != msite)
	{
		std::cout << *msit << std::endl;
		++msit;
	}

	return 0;
}

