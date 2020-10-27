/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 22:59:33 by matrus            #+#    #+#             */
/*   Updated: 2020/10/27 22:59:36 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>


class Base {
public:
	virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base::~Base() {}

Base * generate(void)
{
	int r;

	r = rand() % 3;
	if (r == 0)
	{
		std::cout << "Generated A" << std::endl;
		return new A;
	}
	else if (r == 1)
	{
		std::cout << "Generated B" << std::endl;
		return new B;
	}
	else if (r == 2)
	{
		std::cout << "Generated C" << std::endl;
		return new C;
	}
	return nullptr;
}

void identify_from_pointer(Base * p)
{
	Base *identify;

	identify = dynamic_cast<A*>(p);
	if (identify != nullptr)
	{
		std::cout << "It's A!" << std::endl;
		return ;
	}

	identify = dynamic_cast<B*>(p);
	if (identify != nullptr)
	{
		std::cout << "It's B!" << std::endl;
		return ;
	}

	identify = dynamic_cast<C*>(p);
	if (identify != nullptr)
	{
		std::cout << "It's C!" << std::endl;
		return ;
	}
}

void identify_from_reference( Base & p)
{
	try
	{
		A & ref = dynamic_cast<A &>(p);
		std::cout << "It's A!" << std::endl;
		(void)ref;
		return ;
	}
	catch (std::bad_cast & e) { ; }

	try
	{
		B & ref = dynamic_cast<B &>(p);
		std::cout << "It's B!" << std::endl;
		(void)ref;
		return ;
	}
	catch (std::bad_cast & e) { ; }

	try
	{
		C & ref = dynamic_cast<C &>(p);
		std::cout << "It's C!" << std::endl;
		(void)ref;
		return ;
	}
	catch (std::bad_cast & e) { throw; }
}

int main()
{
	Base *p;

	srand(time(nullptr));
	p = generate();
	std::cout << "<--- Identify from pointer --->" << std::endl;
	identify_from_pointer(p);
	std::cout << "<--- Identify from reference --->" << std::endl;
	identify_from_reference(*p);
	return 0;
}

