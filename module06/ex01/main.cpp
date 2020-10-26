/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 03:11:25 by matrus            #+#    #+#             */
/*   Updated: 2020/10/26 03:11:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct	s_data
{
	std::string s1;
	int n;
	std::string s2;
}				Data;

void	*serialize( void )
{
	void	*memory = new char[sizeof(char) * 16 + sizeof(int)];
	char	ch_to_check;
	char	*cp;
	int		int_to_check;
	int		*ip;

	cp = static_cast<char*>(memory);
	std::cout << "Creating s1:" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		ch_to_check = ' ' + rand() % (127 - ' ');
		std::cout << ch_to_check;
		cp[i] = ch_to_check;
	}

	ip = reinterpret_cast<int*>( &(static_cast<char*>(memory)[8]) );
	std::cout << std::endl << "Creating int:" << std::endl;
	int_to_check = rand();
	std::cout << int_to_check << std::endl;
	*ip = int_to_check;

	cp = reinterpret_cast<char*>( &(static_cast<char*>(memory)[8 + sizeof(int)]) );
	std::cout << "Creating s2:" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		ch_to_check = ' ' + rand() % (127 - ' ');
		std::cout << ch_to_check;
		cp[i] = ch_to_check;
	}
	std::cout << std::endl;
	return memory;
}

Data	*deserialize( void* raw )
{
	char	*s1p;
	char	*s2p;
	int		*ip;

	s1p = reinterpret_cast<char*>(raw);
	s2p = &reinterpret_cast<char*>(raw)[8 + sizeof(int)];
	ip = reinterpret_cast<int*>( &reinterpret_cast<char*>(raw)[8] );

	Data* data = new Data;
	data->s1 = std::string(s1p, 8);
	data->n = *ip;
	data->s2 = std::string(s2p, 8);
	return data;
}

int main()
{
	srand(time(nullptr));

	void* raw;
	Data* data;

	raw = serialize();
	data = deserialize(raw);

	std::cout << std::endl << "<--- Check data --->" << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n:  " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	std::cout << std::endl << "<--- Data size --->" << std::endl;
	std::cout << sizeof(*data) << std::endl;

	delete data;
	delete [] reinterpret_cast<char*>(raw);
	return 0;
}