
#include <chrono>
#include <cmath>
#include <iostream>

#include "sin.hpp"

using hpc = std::chrono::high_resolution_clock;

constexpr auto sum_to( std::size_t n ) {
  long double sum = 0.0L;
  for ( std::size_t i = 0; i < n; ++i ) {
    sum += ds::sin( static_cast< long double >( i ) );
  }
  return sum;
}

auto main( ) -> int {
  auto start = hpc::now( );
  for ( int i = 0; i < 10'000; ++i ) {
    static constexpr auto value = sum_to( 1'000 );
    // std::cout << value << '\n';
    (void)value;
  }
  auto end = hpc::now( );
  std::cout << "constexpr: " << ( end - start ).count( ) << " ns\n\n";

  auto sum = 0.0L;
  start    = hpc::now( );
  for ( int i = 0; i < 10'000'000; ++i ) {
    sum += sinl( static_cast< long double >( i ) );
  }
  (void)sum;
  // std::cout << sum << '\n';
  end = hpc::now( );
  std::cout << "standard: " << ( end - start ).count( ) << " ns\n\n";
}
