//==================================================================================================
/*
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
//! [allocator]
#include <boost/simd/memory/allocator.hpp>
#include <boost/simd/range/aligned_range.hpp>
#include <boost/simd/pack.hpp>
#include <vector>
#include <iostream>

int main()
{
  std::vector<float, boost::simd::allocator<float>> x = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

  auto r = boost::simd::aligned_range(x);
  for(auto p : r) std::cout << p << "\n";
}
//! [allocator]
