/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09) *
 *******************************************************************/
#ifndef __wrappedlibncurses6TYPES_H_
#define __wrappedlibncurses6TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFv_t)(void);
typedef int32_t (*iFpV_t)(void*, void*);
typedef int32_t (*iFppV_t)(void*, void*, void*);
typedef int32_t (*iFiipV_t)(int32_t, int32_t, void*, void*);
typedef int32_t (*iFpiipV_t)(void*, int32_t, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(initscr, pFv_t) \
	GO(printw, iFpV_t) \
	GO(vw_printw, iFppV_t) \
	GO(mvprintw, iFiipV_t) \
	GO(mvwprintw, iFpiipV_t)

#endif // __wrappedlibncurses6TYPES_H_
