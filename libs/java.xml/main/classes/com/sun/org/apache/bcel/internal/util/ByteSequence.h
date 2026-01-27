#ifndef _com_sun_org_apache_bcel_internal_util_ByteSequence_h_
#define _com_sun_org_apache_bcel_internal_util_ByteSequence_h_
//$ class com.sun.org.apache.bcel.internal.util.ByteSequence
//$ extends java.io.DataInputStream

#include <java/io/DataInputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class ByteSequence$ByteArrayStream;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ByteSequence : public ::java::io::DataInputStream {
	$class(ByteSequence, $NO_CLASS_INIT, ::java::io::DataInputStream)
public:
	ByteSequence();
	void init$($bytes* bytes);
	int32_t getIndex();
	using ::java::io::DataInputStream::read;
	void unreadByte();
	::com::sun::org::apache::bcel::internal::util::ByteSequence$ByteArrayStream* byteStream = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_ByteSequence_h_