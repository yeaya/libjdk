#ifndef _jdk_nio_zipfs_ZipFileAttributes_h_
#define _jdk_nio_zipfs_ZipFileAttributes_h_
//$ interface jdk.nio.zipfs.ZipFileAttributes
//$ extends java.nio.file.attribute.BasicFileAttributes

#include <java/lang/Array.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$interface(ZipFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	virtual $bytes* comment() {return nullptr;}
	virtual int64_t compressedSize() {return 0;}
	virtual int64_t crc() {return 0;}
	virtual $bytes* extra() {return nullptr;}
	virtual int32_t method() {return 0;}
	virtual ::java::util::Optional* storedPermissions() {return nullptr;}
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileAttributes_h_