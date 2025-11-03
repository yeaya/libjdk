#ifndef _jdk_nio_zipfs_ZipFileSystem$END_h_
#define _jdk_nio_zipfs_ZipFileSystem$END_h_
//$ class jdk.nio.zipfs.ZipFileSystem$END
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$END : public ::java::lang::Object {
	$class(ZipFileSystem$END, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipFileSystem$END();
	void init$();
	virtual void write(::java::io::OutputStream* os, int64_t offset, bool forceEnd64);
	int32_t centot = 0;
	int64_t cenlen = 0;
	int64_t cenoff = 0;
	int64_t endpos = 0;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$END_h_