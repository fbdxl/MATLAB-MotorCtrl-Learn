/* Include files */

#include "slexCCallerExample_cgxe.h"
#include "m_FHYdnqWNzY9kpx9XFuJztB.h"

unsigned int cgxe_slexCCallerExample_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 2168869689 &&
      ssGetChecksum1(S) == 4188143349 &&
      ssGetChecksum2(S) == 887086220 &&
      ssGetChecksum3(S) == 2331889770) {
    method_dispatcher_FHYdnqWNzY9kpx9XFuJztB(S, method, data);
    return 1;
  }

  return 0;
}
