// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/function/simd/multiplies.hpp>
#include <boost/simd/pack.hpp>
#include <cmath>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SIMD_BENCH(simd_multiplies_s, bs::saturated_(bs::multiplies));

int main(int argc, char** argv) {
  nsb::parse_args(argc, argv);
  nsb::for_each<simd_multiplies_s, NS_BENCH_NUMERIC_TYPES>(-10, 10, -10, 10);
  print_results();
  return 0;
}
