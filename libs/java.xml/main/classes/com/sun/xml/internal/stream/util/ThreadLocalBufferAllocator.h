#ifndef _com_sun_xml_internal_stream_util_ThreadLocalBufferAllocator_h_
#define _com_sun_xml_internal_stream_util_ThreadLocalBufferAllocator_h_
//$ class com.sun.xml.internal.stream.util.ThreadLocalBufferAllocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TL")
#undef TL

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {
						class BufferAllocator;
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

class ThreadLocalBufferAllocator : public ::java::lang::Object {
	$class(ThreadLocalBufferAllocator, 0, ::java::lang::Object)
public:
	ThreadLocalBufferAllocator();
	void init$();
	static ::com::sun::xml::internal::stream::util::BufferAllocator* getBufferAllocator();
	static ::java::lang::ThreadLocal* TL;
};

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("TL")

#endif // _com_sun_xml_internal_stream_util_ThreadLocalBufferAllocator_h_