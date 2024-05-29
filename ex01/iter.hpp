/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:36:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/29 11:46:06 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

template<typename T>
void iter(T *add, size_t len, void (&f)(T &)){
	for(i = 0; i < len; i++)
		f(add[i]);
}

