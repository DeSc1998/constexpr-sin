#pragma once

#include <numbers>

namespace ds {
  constexpr long double pi            = std::numbers::pi_v< long double >;
  constexpr long double interval_size = 5.0L;
  constexpr long double scale_factor  = 2.0L * pi / interval_size;
  constexpr long double factors[]     = { 0.0L, -1.0L, 0.0L, 1.0L };

  constexpr long double floor( long double x ) {
    return (long double)( (int64_t)x );
  }

  constexpr long double mod( long double x, long double base ) {
    auto factor = floor( x / base );
    return x - factor * base;
  }

  constexpr uint64_t fac( uint64_t x ) { return x > 1 ? x * fac( x - 1 ) : 1; }

  template < uint64_t >
  struct Fac;

  template <>
  struct Fac< 0 > {
    static constexpr uint64_t value = 1;
  };

  template <>
  struct Fac< 1 > {
    static constexpr uint64_t value = 1;
  };

  template < uint64_t N >
  struct Fac {
    static constexpr uint64_t value = Fac< N - 1 >::value * N;
  };

  constexpr long double power( long double x, int32_t n ) {
    long double result = 1.0L;

    while ( n != 0 ) {
      if ( n > 0 ) {
        result *= x;
        --n;
      } else {
        result /= x;
        ++n;
      }
    }

    return result;
  }

  template < uint64_t N, bool = !( N & 1 ) >
  struct Term;

  template < uint64_t N >
  struct Term< N, true > {
    constexpr long double operator( )( long double x ) {
      if constexpr ( N == 0 ) {
        return factors[0];
      } else {
        return Term< ( N - 1 ) > { }( x );
      }
    }
  };

  template < uint64_t N >
  struct Term< N, false > {
    constexpr long double operator( )( long double x ) {
      const auto rest = Term< N - 1 > { }( x );

      return factors[N % 4]
               * power( scale_factor * ( x - interval_size / 2.0L ), N )
               / Fac< N >::value
             + rest;
    }
  };

  constexpr long double sin( long double x ) {
    long double clamped = mod( x / scale_factor, interval_size );

    return Term< 15 > { }( clamped );
  }

  constexpr long double sinp( long double x ) {
    long double clamped        = mod( x / scale_factor, interval_size );
    long double half_interval  = interval_size / 2.0L;
    long double stretch_factor = 16.0L / ( interval_size * interval_size );
    if ( clamped > half_interval ) {
      return stretch_factor * ( clamped - half_interval )
             * ( clamped - interval_size );
    } else {
      return -stretch_factor * clamped * ( clamped - half_interval );
    }
  }
}