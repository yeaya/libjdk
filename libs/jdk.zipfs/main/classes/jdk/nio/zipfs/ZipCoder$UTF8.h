#ifndef _jdk_nio_zipfs_ZipCoder$UTF8_h_
#define _jdk_nio_zipfs_ZipCoder$UTF8_h_
//$ class jdk.nio.zipfs.ZipCoder$UTF8
//$ extends jdk.nio.zipfs.ZipCoder

#include <java/lang/Array.h>
#include <jdk/nio/zipfs/ZipCoder.h>

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipCoder$UTF8 : public ::jdk::nio::zipfs::ZipCoder {
	$class(ZipCoder$UTF8, $NO_CLASS_INIT, ::jdk::nio::zipfs::ZipCoder)
public:
	ZipCoder$UTF8();
	void init$();
	virtual $bytes* getBytes($String* s) override;
	using ::jdk::nio::zipfs::ZipCoder::toString;
	virtual $String* toString($bytes* ba) override;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipCoder$UTF8_h_