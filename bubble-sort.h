#pragma once
#include <utility>

template<typename ForwardIt>
void bubblesort(ForwardIt begin, ForwardIt end) {
  bool done = false;

  while (not done) {
    done = true;

    ForwardIt pos = begin;

    while (begin != end) {
      ForwardIt next = pos;
      ++next;

      if (next == end) {
        break;
      }

      if (*next < *pos) {
        std::swap(*next, *pos);
        done = false;
      }

      pos++;
    }
  }
}
