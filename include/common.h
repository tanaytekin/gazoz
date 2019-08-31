#ifndef GAZOZ_COMMON_H
#define GAZOZ_COMMON_H

#if defined _WIN32 || defined __CYGWIN__
    #ifdef BUILDING_DLL
        #ifdef __GNUC__
            #define GAZOZ_API __attribute__ ((dllexport))
        #else
            #define GAZOZ_API __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define GAZOZ_API __attribute__ ((dllimport))
        #else
            #define GAZOZ_API __declspec(import)
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define GAZOZ_API __attribute__ ((visibility ("default")))
    #else
        #define GAZOZ_API
    #endif
#endif

#endif //GAZOZ_COMMON_H
