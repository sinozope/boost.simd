// -------------------------------------------------------------------------------------------------
//                              Copyright 2017 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor if_else_allbits in scalar mode for std::uint64_t type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/if_else_allbits.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = std::uint64_t;
  run<T>(bs::if_else_allbits, nsbg::rand<T>(-10, 10), nsbg::rand<T>(-10, 10));
}

