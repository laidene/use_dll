#if WIN32
    #ifdef LIB_TOOLS_EXPOETS
        #define LIB_TOOLS_API extern "C" __declspec(dllexport)
    #else
        #define LIB_TOOLS_API extern "C" __declspec(dllimport)
    #endif
#else
    #define LIB_TOOLS_API extern "C"
#endif

LIB_TOOLS_API int test_add(int a, int b);