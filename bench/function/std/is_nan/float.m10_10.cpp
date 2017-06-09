// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor is_nan in std mode for float type with std_.
#include <simd_bench.hpp>
#include <boost/simd/function/is_nan.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = float;
  run<T>(bs::std_(bs::is_nan), nsbg::rand<T>(-10, 10));
}
