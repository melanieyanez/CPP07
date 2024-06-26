/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:24:47 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/03 14:10:13 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Function to print the elements of an array
template<typename T>
void printArray(const Array<T>& array) {
    for (size_t i = 0; i < array.getSize(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(void){
    // Test creating an array of integers
    std::cout << "Creating an array of integers of size 5" << std::endl;
    Array<int> intArray(5);
    for (size_t i = 0; i < intArray.getSize(); ++i) {
        intArray[i] = static_cast<int>(i * 2);
    }
    std::cout << "Integer array: ";
    printArray(intArray);
	std::cout << std::endl;

    // Test creating an array of strings
    std::cout << "Creating an array of strings of size 3" << std::endl;
    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "Array";
    std::cout << "String array: ";
    printArray(strArray);
	std::cout << std::endl;

    // Test copying the array
    std::cout << "Testing copy constructor with the integer array" << std::endl;
    Array<int> copyArray(intArray);
    std::cout << "Copied array: ";
    printArray(copyArray);
	std::cout << std::endl;

    // Test the assignment operator
    std::cout << "Testing assignment operator with the string array" << std::endl;
    Array<std::string> assignArray;
    assignArray = strArray;
    std::cout << "Assigned array: ";
    printArray(assignArray);
	std::cout << std::endl;

    // Test accessing elements
    std::cout << "Testing element access in the assigned array" << std::endl;
    for (size_t i = 0; i < assignArray.getSize(); ++i)
        std::cout << "Element " << i << ": " << assignArray[i] << std::endl;
	std::cout << std::endl;

      // Test with a non-const array of floats to add values
    std::cout << "Creating an array of floats of size 4" << std::endl;
    Array<float> nonConstFloatArray(4);
    for (size_t i = 0; i < nonConstFloatArray.getSize(); ++i) {
        nonConstFloatArray[i] = i * 1.1f;
    }
    std::cout << "Non-const float array: ";
    printArray(nonConstFloatArray);

    // Make the array const and test access
    const Array<float> constFloatArray(nonConstFloatArray);
    std::cout << "Const float array: ";
    printArray(constFloatArray);
    //constFloatArray[0] = 3.14f;
    std::cout << std::endl;

    // Test exceptions for out-of-bounds access
    std::cout << "Testing exceptions for out-of-bounds access" << std::endl;
    try
	{
        std::cout << assignArray[3] << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
	{
        intArray[-1] = 10;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}