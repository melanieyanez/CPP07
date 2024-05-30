/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:36:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/30 09:12:10 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template<typename T>
void iter(T *add, size_t len, void (&f)(T &)){
	for(size_t i = 0; i < len; i++)
		f(add[i]);
}