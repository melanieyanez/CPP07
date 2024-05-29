/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:20:46 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/29 11:33:59 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &lhs, T &rhs){
	T tmp;
	tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<typename T>
T &min(T &lhs, T &rhs){
	return lhs < rhs ? lhs : rhs;
}

template<typename T>
T &max(T &lhs, T &rhs){
	return lhs > rhs ? lhs : rhs;
}

#endif