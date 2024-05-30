/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_eval.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:29:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/30 09:29:54 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome a(2), b(4);

  swap(a, b);
  std::cout << a << " " << b << std::endl;
  std::cout << max(a, b) << std::endl;
  std::cout << min(a, b) << std::endl;
  return (0);
}