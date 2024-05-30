/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:24:22 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/30 10:49:37 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template<typename T>
class Array{

	public:

		Array();
		Array(size_t n);
		Array(const Array &src);
	
		~Array();

		Array 		&operator=(const Array &rhs);
		T 			&operator[](size_t index) const;

		size_t 		getSize() const;

		class OutOfBoundsException : public std::exception{
        	const char* what() const throw() {
            	return "Index out of bounds";
        }
    };
	
	private:
	
		T 		*_data;
		size_t 	_size;
	
};

#include "Array.tpp"

#endif