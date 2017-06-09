// -------------------------------------------------------------------------------------------------
//                              Copyright 2017 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor quadrant in simd mode for std::uint8_t type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/quadrant.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = bs::pack<std::uint8_t>;
  run<T>(bs::quadrant, nsbg::rand<T>(0, 10));
}

