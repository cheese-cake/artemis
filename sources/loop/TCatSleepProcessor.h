/* $Id:$ */
/**
 * @file   TCatSleepProcessor.h
 * @date   Created : Apr 27, 2012 19:27:30 JST
 *   Last Modified : May 03, 2012 11:28:58 JST
 * @author Shinsuke OTA <ota@cns.s.u-tokyo.ac.jp>
 *  
 *  
 *    Copyright (C)2012
 */
#ifndef TCATSLEEPPROCESSOR_H
#define TCATSLEEPPROCESSOR_H

#include "TCatProcessor.h"
#include "TCatOstream.h"

class TCatSleepProcessor  : public TCatProcessor {

public:
   TCatSleepProcessor(std::ostream *out = &std::cout);
   ~TCatSleepProcessor();

   virtual void Process();

};
#endif // end of #ifdef TCATSLEEPPROCESSOR_H
