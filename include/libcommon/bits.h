//
// Created by Max Tyson on 03/11/2026.
//

#ifndef MAXOS_COMMON_BITS_H
#define MAXOS_COMMON_BITS_H

namespace MaxOS::common {

    template<typename T> constexpr bool test_flag(T value, T flag) {
        return (value & flag) == flag;
    }

}


#endif //MAXOS_COMMON_BITS_H
