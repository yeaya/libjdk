#ifndef _com_sun_org_apache_bcel_internal_util_ByteSequence$ByteArrayStream_h_
#define _com_sun_org_apache_bcel_internal_util_ByteSequence$ByteArrayStream_h_
//$ class com.sun.org.apache.bcel.internal.util.ByteSequence$ByteArrayStream
//$ extends java.io.ByteArrayInputStream

#include <java/io/ByteArrayInputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ByteSequence$ByteArrayStream : public ::java::io::ByteArrayInputStream {
	$class(ByteSequence$ByteArrayStream, $NO_CLASS_INIT, ::java::io::ByteArrayInputStream)
public:
	ByteSequence$ByteArrayStream();
	void init$($bytes* bytes);
	int32_t getPosition();
	using ::java::io::ByteArrayInputStream::read;
	using ::java::io::ByteArrayInputStream::readNBytes;
	void unreadByte();
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ByteSequence$ByteArrayStream_h_