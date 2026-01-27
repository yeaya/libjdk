#ifndef _com_sun_xml_internal_stream_util_BufferAllocator_h_
#define _com_sun_xml_internal_stream_util_BufferAllocator_h_
//$ class com.sun.xml.internal.stream.util.BufferAllocator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LARGE_SIZE_LIMIT")
#undef LARGE_SIZE_LIMIT
#pragma push_macro("MEDIUM_SIZE_LIMIT")
#undef MEDIUM_SIZE_LIMIT
#pragma push_macro("SMALL_SIZE_LIMIT")
#undef SMALL_SIZE_LIMIT

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

class BufferAllocator : public ::java::lang::Object {
	$class(BufferAllocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferAllocator();
	void init$();
	virtual $bytes* getByteBuffer(int32_t size);
	virtual $chars* getCharBuffer(int32_t size);
	virtual void returnByteBuffer($bytes* b);
	virtual void returnCharBuffer($chars* c);
	static const int32_t SMALL_SIZE_LIMIT = 128;
	static const int32_t MEDIUM_SIZE_LIMIT = 2048;
	static const int32_t LARGE_SIZE_LIMIT = 8192;
	$chars* smallCharBuffer = nullptr;
	$chars* mediumCharBuffer = nullptr;
	$chars* largeCharBuffer = nullptr;
	$bytes* smallByteBuffer = nullptr;
	$bytes* mediumByteBuffer = nullptr;
	$bytes* largeByteBuffer = nullptr;
};

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("LARGE_SIZE_LIMIT")
#pragma pop_macro("MEDIUM_SIZE_LIMIT")
#pragma pop_macro("SMALL_SIZE_LIMIT")

#endif // _com_sun_xml_internal_stream_util_BufferAllocator_h_