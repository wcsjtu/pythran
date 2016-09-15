#ifndef PYTHONIC_NUMPY_ARCTAN2_HPP
#define PYTHONIC_NUMPY_ARCTAN2_HPP

#include "pythonic/include/numpy/arctan2.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/numpy_broadcast.hpp"
#include "pythonic/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {

#define NUMPY_NARY_FUNC_NAME arctan2
#define NUMPY_NARY_FUNC_SYM boost::simd::atan2
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
