
#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdio.h>

#include "sin.hpp"

constexpr auto value = ds::sin( 15.0L );

auto main( ) -> int {
  std::printf( "sin( 15.0L ) = %Lf\n\n", value );

  std::printf( "\nTaylor version: \n" );
  std::fprintf( stdout, "sin( 0 ) \t\t\t= %.*Lf\n", 15, ds::sin( 0.0L ) );
  std::fprintf( stdout, "sin( pi ) \t\t\t= %.*Lf\n", 15, ds::sin( ds::pi ) );
  std::fprintf( stdout, "sin( pi / 2 ) \t\t= %.*Lf\n", 15,
                ds::sin( ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 3 * pi / 2 ) \t= %.*Lf\n", 15,
                ds::sin( 3.0L * ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 2 * pi ) \t\t= %.*Lf\n", 15,
                ds::sin( 2.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 0.5 ) \t\t= %.*Lf\n", 15, ds::sin( 0.5L ) );
  std::fprintf( stdout, "sin( 50 ) \t\t\t= %.*Lf\n", 15, ds::sin( 50.0L ) );
  std::fprintf( stdout, "sin( 71.0 ) \t\t= %.*Lf\n", 15, ds::sin( 71.0L ) );
  std::fprintf( stdout, "sin( 72.5 ) \t\t= %.*Lf\n", 15, ds::sin( 72.5L ) );
  std::fprintf( stdout, "sin( 72 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 72.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 73 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 73.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7301 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 7301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7302 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 7302.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'301 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 7'000'301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'302 * pi ) \t= %.*Lf\n", 15,
                ds::sin( 7'000'302.0L * ds::pi ) );

  std::printf( "\nPolynom version: \n" );
  std::fprintf( stdout, "sin( 0 ) \t\t\t= %.*Lf\n", 15, ds::sinp( 0.0L ) );
  std::fprintf( stdout, "sin( pi ) \t\t\t= %.*Lf\n", 15, ds::sinp( ds::pi ) );
  std::fprintf( stdout, "sin( pi / 2 ) \t\t= %.*Lf\n", 15,
                ds::sinp( ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 3 * pi / 2 ) \t= %.*Lf\n", 15,
                ds::sinp( 3.0L * ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 2 * pi ) \t\t= %.*Lf\n", 15,
                ds::sinp( 2.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 0.5 ) \t\t= %.*Lf\n", 15, ds::sinp( 0.5L ) );
  std::fprintf( stdout, "sin( 50 ) \t\t\t= %.*Lf\n", 15, ds::sinp( 50.0L ) );
  std::fprintf( stdout, "sin( 71 ) \t\t\t= %.*Lf\n", 15, ds::sinp( 71.0L ) );
  std::fprintf( stdout, "sin( 72.5 ) \t\t= %.*Lf\n", 15, ds::sinp( 72.5L ) );
  std::fprintf( stdout, "sin( 72 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 72.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 73 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 73.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7301 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 7301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7302 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 7302.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'301 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 7'000'301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'302 * pi ) \t= %.*Lf\n", 15,
                ds::sinp( 7'000'302.0L * ds::pi ) );

  std::printf( "\nStandard lib version: \n" );
  std::fprintf( stdout, "sin( 0 ) \t\t\t= %.*Lf\n", 15, sinl( 0.0L ) );
  std::fprintf( stdout, "sin( pi ) \t\t\t= %.*Lf\n", 15, sinl( ds::pi ) );
  std::fprintf( stdout, "sin( pi / 2 ) \t\t= %.*Lf\n", 15,
                sinl( ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 3 * pi / 2 ) \t= %.*Lf\n", 15,
                sinl( 3.0L * ds::pi / 2.0L ) );
  std::fprintf( stdout, "sin( 2 * pi ) \t\t= %.*Lf\n", 15,
                sinl( 2.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 0.5 ) \t\t= %.*Lf\n", 15, sinl( 0.5L ) );
  std::fprintf( stdout, "sin( 50 ) \t\t\t= %.*Lf\n", 15, sinl( 50.0L ) );
  std::fprintf( stdout, "sin( 71 ) \t\t\t= %.*Lf\n", 15, sinl( 71.0L ) );
  std::fprintf( stdout, "sin( 72.5 ) \t\t= %.*Lf\n", 15, sinl( 72.5L ) );
  std::fprintf( stdout, "sin( 72 * pi ) \t= %.*Lf\n", 15,
                sinl( 72.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 73 * pi ) \t= %.*Lf\n", 15,
                sinl( 73.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7301 * pi ) \t= %.*Lf\n", 15,
                sinl( 7301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7302 * pi ) \t= %.*Lf\n", 15,
                sinl( 7302.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'301 * pi ) \t= %.*Lf\n", 15,
                sinl( 7'000'301.0L * ds::pi ) );
  std::fprintf( stdout, "sin( 7'000'302 * pi ) \t= %.*Lf\n", 15,
                sinl( 7'000'302.0L * ds::pi ) );
}
