//==================================================================================================
/*!
    @file

    @Copyright 2016 Numscale SAS
    @copyright 2016 J.T.Lapreste

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_X86_SSE1_SIMD_FUNCTION_LDEXP_HPP_INCLUDED
#define BOOST_SIMD_ARCH_X86_SSE1_SIMD_FUNCTION_LDEXP_HPP_INCLUDED
#include <boost/simd/detail/overload.hpp>

// #include <boost/simd/detail/dispatch/meta/as_integer.hpp>
// #include <boost/simd/detail/dispatch/meta/scalar_of.hpp>

// namespace boost { namespace simd { namespace ext
// {
//   namespace bd =  boost::dispatch;
//   namespace bs =  boost::simd;
//   BOOST_DISPATCH_OVERLOAD ( ldexp_
//                           , (typename A0, typename A1)
//                           , bs::sse1_
//                           , bs::pack_<bd::single_<A0>, bs::sse_>
//                           , bd::scalar_<bd::integer_<A1>>
//                          )
//   {
//     BOOST_FORCEINLINE A0 operator() ( const A0 & a0
//                                     , const A1 & a1 ) const BOOST_NOEXCEPT
//     {
//       using sA0 = bd::meta::scalar_of_t<A0>;
//       using iA0 = bd::as_integer_t<A0>;
//       return ldexp(a0, iA0(a1));
//     }
//   };
// } } }

#endif

