#ifndef _jdk_nio_zipfs_ZipCoder_h_
#define _jdk_nio_zipfs_ZipCoder_h_
//$ class jdk.nio.zipfs.ZipCoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipCoder : public ::java::lang::Object {
	$class(ZipCoder, 0, ::java::lang::Object)
public:
	ZipCoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CharsetDecoder* decoder();
	::java::nio::charset::CharsetEncoder* encoder();
	static ::jdk::nio::zipfs::ZipCoder* get($String* csn);
	virtual $bytes* getBytes($String* s);
	virtual bool isUTF8();
	using ::java::lang::Object::toString;
	virtual $String* toString($bytes* ba);
	static ::jdk::nio::zipfs::ZipCoder* utf8;
	::java::nio::charset::Charset* cs = nullptr;
	::java::lang::ThreadLocal* decTL = nullptr;
	::java::lang::ThreadLocal* encTL = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipCoder_h_