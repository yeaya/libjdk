#ifndef _jdk_nio_zipfs_ZipFileAttributeView$AttrID_h_
#define _jdk_nio_zipfs_ZipFileAttributeView$AttrID_h_
//$ class jdk.nio.zipfs.ZipFileAttributeView$AttrID
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileAttributeView$AttrID : public ::java::lang::Enum {
	$class(ZipFileAttributeView$AttrID, 0, ::java::lang::Enum)
public:
	ZipFileAttributeView$AttrID();
	static $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* valueOf($String* name);
	static $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>* values();
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* size;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* creationTime;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* lastAccessTime;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* lastModifiedTime;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* isDirectory;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* isRegularFile;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* isSymbolicLink;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* isOther;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* fileKey;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* compressedSize;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* crc;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* method;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* owner;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* group;
	static ::jdk::nio::zipfs::ZipFileAttributeView$AttrID* permissions;
	static $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>* $VALUES;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileAttributeView$AttrID_h_