#ifndef PYTHONIC_NUMPY_MAXIMUM_HPP
#define PYTHONIC_NUMPY_MAXIMUM_HPP

#include "pythonic/include/numpy/maximum.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/numpy_broadcast.hpp"
#include "pythonic/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME maximum
#define NUMPY_NARY_FUNC_SYM boost::simd::max
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
