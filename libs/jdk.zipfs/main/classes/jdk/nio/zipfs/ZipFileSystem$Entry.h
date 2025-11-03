#ifndef _jdk_nio_zipfs_ZipFileSystem$Entry_h_
#define _jdk_nio_zipfs_ZipFileSystem$Entry_h_
//$ class jdk.nio.zipfs.ZipFileSystem$Entry
//$ extends jdk.nio.zipfs.ZipFileSystem$IndexNode
//$ implements jdk.nio.zipfs.ZipFileAttributes

#include <java/lang/Array.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>

#pragma push_macro("CEN")
#undef CEN
#pragma push_macro("COPY")
#undef COPY
#pragma push_macro("FILECH")
#undef FILECH
#pragma push_macro("NEW")
#undef NEW

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$Entry : public ::jdk::nio::zipfs::ZipFileSystem$IndexNode, public ::jdk::nio::zipfs::ZipFileAttributes {
	$class(ZipFileSystem$Entry, $NO_CLASS_INIT, ::jdk::nio::zipfs::ZipFileSystem$IndexNode, ::jdk::nio::zipfs::ZipFileAttributes)
public:
	ZipFileSystem$Entry();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* name, bool isdir, int32_t method);
	void init$($bytes* name, int32_t type, bool isdir, int32_t method, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void init$($bytes* name, ::java::nio::file::Path* file, int32_t type, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void init$(::jdk::nio::zipfs::ZipFileSystem$Entry* e, int32_t type, int32_t compressionMethod);
	void init$(::jdk::nio::zipfs::ZipFileSystem$Entry* e, int32_t type);
	void init$(::jdk::nio::zipfs::ZipFileSystem* zipfs, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode);
	virtual $bytes* comment() override;
	virtual int64_t compressedSize() override;
	virtual int64_t crc() override;
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual $bytes* extra() override;
	virtual $Object* fileKey() override;
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int32_t method() override;
	void readCEN(::jdk::nio::zipfs::ZipFileSystem* zipfs, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode);
	void readExtra(::jdk::nio::zipfs::ZipFileSystem* zipfs);
	void readLocEXTT(::jdk::nio::zipfs::ZipFileSystem* zipfs);
	virtual int64_t size() override;
	virtual ::java::util::Optional* storedPermissions() override;
	virtual $String* toString() override;
	int32_t version(bool zip64);
	int32_t versionMadeBy(int32_t version);
	int32_t writeCEN(::java::io::OutputStream* os);
	int32_t writeEXT(::java::io::OutputStream* os);
	int32_t writeLOC(::java::io::OutputStream* os);
	static const int32_t CEN = 1;
	static const int32_t NEW = 2;
	static const int32_t FILECH = 3;
	static const int32_t COPY = 4;
	$bytes* bytes = nullptr;
	::java::nio::file::Path* file = nullptr;
	int32_t type = 0;
	int32_t version$ = 0;
	int32_t flag = 0;
	int32_t posixPerms = 0;
	int32_t method$ = 0;
	int64_t mtime = 0;
	int64_t atime = 0;
	int64_t ctime = 0;
	int64_t crc$ = 0;
	int64_t csize = 0;
	int64_t size$ = 0;
	$bytes* extra$ = nullptr;
	int64_t locoff = 0;
	$bytes* comment$ = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#pragma pop_macro("CEN")
#pragma pop_macro("COPY")
#pragma pop_macro("FILECH")
#pragma pop_macro("NEW")

#endif // _jdk_nio_zipfs_ZipFileSystem$Entry_h_