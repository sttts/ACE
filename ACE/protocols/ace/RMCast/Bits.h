// file      : ace/RMCast/Bits.h
// author    : Boris Kolpackov <boris@kolpackov.net>
// cvs-id    : $Id$

#ifndef ACE_RMCAST_BITS_H
#define ACE_RMCAST_BITS_H

#include "ace/Auto_Ptr.h"
#include "ace/Thread_Mutex.h"
#include "ace/Condition_T.h"
#include "ace/Synch_Traits.h"

namespace ACE_RMCast
{
  typedef ACE_SYNCH_MUTEX Mutex;
  typedef ACE_Guard<Mutex> Lock;
  typedef ACE_Condition<Mutex> Condition;

  // tmp
  //
  //using std::cerr;
  //using std::endl;
}


#endif  // ACE_RMCAST_BITS_H
