
#include <array>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdio.h>

#include "sin.hpp"

constexpr auto number_cases = 15;

constexpr std::array< long double, number_cases > testcases = {
  0.0L,
  ds::pi,
  ds::pi / 2.0L,
  3.0L * ds::pi / 2.0L,
  2.0L * ds::pi,
  0.5L,
  50.0L,
  71.0L,
  72.5L,
  72.0L * ds::pi,
  73.0L * ds::pi,
  7301.0L * ds::pi,
  7302.0L * ds::pi,
  7'000'301.0L * ds::pi,
  7'000'302.0L * ds::pi,
};

constexpr std::array< long double, number_cases > results = {
  ds::sin( 0.0L ),
  ds::sin( ds::pi ),
  ds::sin( ds::pi / 2.0L ),
  ds::sin( 3.0L * ds::pi / 2.0L ),
  ds::sin( 2.0L * ds::pi ),
  ds::sin( 0.5L ),
  ds::sin( 50.0L ),
  ds::sin( 71.0L ),
  ds::sin( 72.5L ),
  ds::sin( 72.0L * ds::pi ),
  ds::sin( 73.0L * ds::pi ),
  ds::sin( 7301.0L * ds::pi ),
  ds::sin( 7302.0L * ds::pi ),
  ds::sin( 7'000'301.0L * ds::pi ),
  ds::sin( 7'000'302.0L * ds::pi ),
};

auto main( ) -> int {
  for ( size_t i = 0; i < number_cases; ++i ) {
    auto test_case = testcases[i];
    std::printf( "current test case: %Lf\n", test_case );
    std::printf( "'const term' sin( %Lf ) = %18.15Lf\n", test_case,
                 results[i] );
    std::printf( "'const poly' sin( %Lf ) = %18.15Lf\n", test_case,
                 ds::sinp( test_case ) );
    std::printf( "'std'        sin( %Lf ) = %18.15Lf\n\n", test_case,
                 sinl( test_case ) );
  }
}
