//
// Created by Max Tyson on 01/11/2026.
//
#ifndef LIBCOMMON_BYTE_SPAN_H
#define LIBCOMMON_BYTE_SPAN_H

#include <cstdint>
#include <cstddef>

namespace MaxOS::common {

    typedef struct ByteSpan {
        uint8_t* data = nullptr;
        size_t size = 0;
    } byte_span_t;

}

#endif // LIBCOMMON_BYTE_SPAN_H
