//
// Created by flint on 17.05.2022.
//


#ifndef LAB06_FUNCS_H
#define LAB06_FUNCS_H

#include <functional>

template<class T, class pr_t>
bool none_of(T* begin, T* end, pr_t pr){
    for (;begin != end; ++begin){
        if (pr(*begin)) {
            return false;
        }
    }

    return true;
}

template<class T, class A, class cmp_t = std::less<A>>
bool is_sorted(T begin, T end, cmp_t cmp = std::less<A>()){
    ++begin;
    for (;begin != end; ++begin){
        if (cmp(*begin, *(begin - 1))) {
            return false;
        }
    }

    return true;
}

template<class T, class A, class cmp_t = std::equal_to<A>>
 A find_not(T begin, T end, A ref, cmp_t cmp = std::equal_to<A>()){
    for (;begin != end; ++begin){
        if (!cmp(*begin, ref)) {
            return *begin;
        }
    }

    return ref;
}
#endif //LAB06_FUNCS_H
