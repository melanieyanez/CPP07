/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:36:44 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/30 09:13:16 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &n){
	n++;
}

void toUpper(std::string &str){
	for (std::string::size_type i = 0; i < str.size(); ++i)
        str[i] = std::toupper(str[i]);
}

template<typename T>
void print(T &var){
	std::cout << var << std::endl;
}

int main(void){
	// initializing dynamic arrays
    int intArray[] = {21, 42, 84};
    std::string stringArray[] = {"Hello", "World"};
    
    // Printing initial arrays
    std::cout << "Initial integer array: " << std::endl;
    iter(intArray, 3, print<int>);
    std::cout << std::endl;
    
    std::cout << "Initial string array: " << std::endl;
    iter(stringArray, 2, print<std::string>);
    std::cout << std::endl;

    // Applying increment and toUpper functions
    iter(intArray, 3, increment);
    iter(stringArray, 2, toUpper);

    // Printing modified arrays
    std::cout << "Modified integer array: " << std::endl;
    iter(intArray, 3, print<int>);
    std::cout << std::endl;
    
    std::cout << "Modified string array: " << std::endl;
    iter(stringArray, 2, print<std::string>);

    return 0;
}