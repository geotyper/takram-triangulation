//
//  takram/triangulation/edge.h
//
//  The MIT License
//
//  Copyright (C) 2014-2015 Shota Matsuda
//
//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.
//

#pragma once
#ifndef TAKRAM_TRIANGULATION_EDGE_H_
#define TAKRAM_TRIANGULATION_EDGE_H_

#include "takram/triangulation/types.h"

namespace takram {
namespace triangulation {

class Edge final {
 public:
  Edge();

  // Copy semantics
  Edge(const Edge&) = default;
  Edge& operator=(const Edge&) = default;

 public:
  union {
    Line line;
    struct { Vec a; Vec b; };
    struct { Real x1; Real y1; Real x2; Real y2; };
  };
  bool finite;
};

#pragma mark -

inline Edge::Edge() : finite() {}

}  // namespace triangulation
}  // namespace takram

#endif  // TAKRAM_TRIANGULATION_EDGE_H_
