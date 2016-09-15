#ifndef PYTHONIC_NUMPY_LOG1P_HPP
#define PYTHONIC_NUMPY_LOG1P_HPP

#include "pythonic/include/numpy/log1p.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME log1p
#define NUMPY_NARY_FUNC_SYM boost::simd::log1p
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
