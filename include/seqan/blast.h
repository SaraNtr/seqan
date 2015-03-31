// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2015, Knut Reinert, FU Berlin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================
// Author: Hannes Hauswedell <hannes.hauswedell@fu-berlin.de>
// ==========================================================================
// Module for handling NCBI Blast I/O and E-Value computation
// ==========================================================================

#ifndef SEQAN_BLAST_H
#define SEQAN_BLAST_H

#ifdef SEQAN_CXX11_STANDARD

#include <cinttypes>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <type_traits>
#include <unordered_map>

// FREEBSD lacks some defines in its libc
#ifdef __FreeBSD__
#define _GLIBCXX_USE_C99 1
#include <math.h>
#define ROUND lround
#else
#define ROUND std::lround
#endif

#include <seqan/basic.h>
#include <seqan/version.h>
#include <seqan/align.h>
#include <seqan/score.h>

#include "blast/blast_base.h"
#include "blast/blast_record.h"
#include "blast/blast_tabular.h"
#include "blast/blast_io_context.h"
#include "blast/blast_statistics.h"
// #include "blast/blast_tabular_in.h"
#include "blast/blast_tabular_out.h"
// #include "blast/blast_report_out.h"

#else //SEQAN_C++11_STANDARD

#error The blast module requires C++11 support. \
If your compiler supports C++11, please define SEQAN_CXX11_STANDARD

#endif //SEQAN_C++11_STANDARD

#endif
