/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09) *
 *******************************************************************/
#ifndef __wrappedpangoTYPES_H_
#define __wrappedpangoTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(pango_attribute_init, vFpp_t)

#endif // __wrappedpangoTYPES_H_
