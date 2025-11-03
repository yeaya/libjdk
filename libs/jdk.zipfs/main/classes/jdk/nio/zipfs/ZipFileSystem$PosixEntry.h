#ifndef _jdk_nio_zipfs_ZipFileSystem$PosixEntry_h_
#define _jdk_nio_zipfs_ZipFileSystem$PosixEntry_h_
//$ class jdk.nio.zipfs.ZipFileSystem$PosixEntry
//$ extends jdk.nio.zipfs.ZipFileSystem$Entry
//$ implements java.nio.file.attribute.PosixFileAttributes

#include <java/lang/Array.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>

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
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
			class ZipFileSystem$IndexNode;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$PosixEntry : public ::jdk::nio::zipfs::ZipFileSystem$Entry, public ::java::nio::file::attribute::PosixFileAttributes {
	$class(ZipFileSystem$PosixEntry, $NO_CLASS_INIT, ::jdk::nio::zipfs::ZipFileSystem$Entry, ::java::nio::file::attribute::PosixFileAttributes)
public:
	ZipFileSystem$PosixEntry();
	virtual $Object* clone() override;
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual bool equals(Object$* other) override;
	virtual $Object* fileKey() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, $bytes* name, bool isdir, int32_t method);
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, $bytes* name, int32_t type, bool isdir, int32_t method, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, $bytes* name, ::java::nio::file::Path* file, int32_t type, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$PosixEntry* e, int32_t type, int32_t compressionMethod);
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$PosixEntry* e, int32_t type);
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem* zipfs, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode);
	virtual ::java::nio::file::attribute::GroupPrincipal* group() override;
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual ::java::nio::file::attribute::UserPrincipal* owner() override;
	virtual ::java::util::Set* permissions() override;
	virtual int64_t size() override;
	virtual $String* toString() override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	::java::nio::file::attribute::UserPrincipal* owner$ = nullptr;
	::java::nio::file::attribute::GroupPrincipal* group$ = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$PosixEntry_h_