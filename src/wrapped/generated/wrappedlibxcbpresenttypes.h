/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09) *
 *******************************************************************/
#ifndef __wrappedlibxcbpresentTYPES_H_
#define __wrappedlibxcbpresentTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef my_xcb_cookie_t (*xFpuu_t)(void*, uint32_t, uint32_t);
typedef my_xcb_cookie_t (*xFpuuu_t)(void*, uint32_t, uint32_t, uint32_t);
typedef my_xcb_cookie_t (*xFpuuUUU_t)(void*, uint32_t, uint32_t, uint64_t, uint64_t, uint64_t);
typedef my_xcb_cookie_t (*xFpuuuuuwwuuuuUUUup_t)(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int16_t, int16_t, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t, uint64_t, uint64_t, uint32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(xcb_present_query_version, xFpuu_t) \
	GO(xcb_present_select_input_checked, xFpuuu_t) \
	GO(xcb_present_notify_msc, xFpuuUUU_t) \
	GO(xcb_present_pixmap, xFpuuuuuwwuuuuUUUup_t) \
	GO(xcb_present_pixmap_checked, xFpuuuuuwwuuuuUUUup_t)

#endif // __wrappedlibxcbpresentTYPES_H_
