// $Id$

// ============================================================================
//
// = LIBRARY
//    examples
//
// = FILENAME
//    TSS_Data.cpp
//
// = AUTHOR
//    Prashant Jain and Doug Schmidt
//
// ============================================================================

#include "ace/Singleton.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Synch_Traits.h"

class TSS_Data
  // = TITLE
  //   Data that is stored in thread-specific storage.
{
public:
  void *data (void) { return this->data_; }
  void data (void *v) { this->data_ = v; }

private:
  // = data_ will be thread-specific data so it doesn't need a lock.
  void *data_;
};

typedef ACE_TSS_Singleton<TSS_Data, ACE_SYNCH_MUTEX> TSS_DATA;



