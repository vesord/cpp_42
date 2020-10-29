/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:02:27 by matrus            #+#    #+#             */
/*   Updated: 2020/10/30 01:02:28 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <iostream>
#include <string>

class Sample {
public:
	Sample() : _str( "default creation string") {};
	std::string getStr() const { return this->_str; }
private:
	std::string _str;
};

std::ostream & operator<<(std::ostream & o, Sample const & sample) {
	o << sample.getStr();
	return o;
}

int main()
{
	std::cout << "<--- DEFAULT ARRAY TEST --->" << std::endl;
	Array<int> defArray;
	std::cout << "defArray size: " << defArray.size() << std::endl;
	try {
		std::cout << "Try access defArray[0]: " << defArray[0] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<--- ARRAY FLOAT 87 TEST --->" << std::endl;
	Array<float>* arrayFloatP = new Array<float>(87);
	std::cout << "arrayFloat size: " << arrayFloatP->size() << std::endl;
	try {
		std::cout << "Try access arrayFloat[42]: " << (*arrayFloatP)[42] << std::endl;
		std::cout << "Try access arrayFloat[0] : " << (*arrayFloatP)[0] << std::endl;
		std::cout << "Try access arrayFloat[86]: " << (*arrayFloatP)[86] << std::endl;
		std::cout << "Try access arrayFloat[87]: " << (*arrayFloatP)[87] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<--- ARRAY WRITE TEST --->" << std::endl;
	std::cout << "arrayFloat size: " << arrayFloatP->size() << std::endl;
	try {
		(*arrayFloatP)[42] = 420.042f;
		(*arrayFloatP)[0] = 0.00000000000042f;
		(*arrayFloatP)[86] = 65498651.f;
		std::cout << "Try access arrayFloat[42]: " << (*arrayFloatP)[42] << std::endl;
		std::cout << "Try access arrayFloat[0] : " << (*arrayFloatP)[0] << std::endl;
		std::cout << "Try access arrayFloat[86]: " << (*arrayFloatP)[86] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<--- ARRAY COPY CONSTRUCTOR TEST --->" << std::endl;
	Array<float>* anotherArrayFloatP = new Array<float>(*arrayFloatP);
	std::cout << "anotherArrayFloat size: " << arrayFloatP->size() << std::endl;
	try {
		std::cout << "Try access anotherArrayFloat[42]: " << (*anotherArrayFloatP)[42] << std::endl;
		std::cout << "Try access anotherArrayFloat[0] : " << (*anotherArrayFloatP)[0] << std::endl;
		std::cout << "Try access anotherArrayFloat[86]: " << (*anotherArrayFloatP)[86] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<--- ARRAY ASSIGNATION TEST --->" << std::endl;
	try {
		(*arrayFloatP)[21] = 21.f;
		*anotherArrayFloatP = *arrayFloatP;
		std::cout << "Try access anotherArrayFloat[21]: " << (*anotherArrayFloatP)[21] << std::endl;
		std::cout << "Try access anotherArrayFloat[42]: " << (*anotherArrayFloatP)[42] << std::endl;
		std::cout << "Try access anotherArrayFloat[0] : " << (*anotherArrayFloatP)[0] << std::endl;
		std::cout << "Try access anotherArrayFloat[86]: " << (*anotherArrayFloatP)[86] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<--- ARRAY DEFAULT VALUE CREATION TEST --->" << std::endl;
	Array<Sample> sampleClassArray(23);
	try {
		std::cout << "Try access sampleClassArray[21]: " << (sampleClassArray)[21] << std::endl;
		std::cout << "Try access sampleClassArray[0] : " << (sampleClassArray)[0] << std::endl;
	} catch (std::out_of_range & e) {
		std::cout << e.what() << std::endl;
	}

	delete arrayFloatP;
	delete anotherArrayFloatP;
	return 0;
}