#ifndef _jdk_nio_zipfs_ZipPath_h_
#define _jdk_nio_zipfs_ZipPath_h_
//$ class jdk.nio.zipfs.ZipPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class AccessMode;
			class CopyOption;
			class DirectoryStream;
			class DirectoryStream$Filter;
			class FileStore;
			class FileSystem;
			class LinkOption;
			class OpenOption;
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
			class WatchService;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileAttribute;
				class FileAttributeView;
				class FileTime;
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileAttributeView;
			class ZipFileAttributes;
			class ZipFileSystem;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipPath : public ::java::nio::file::Path {
	$class(ZipPath, 0, ::java::nio::file::Path)
public:
	ZipPath();
	void init$(::jdk::nio::zipfs::ZipFileSystem* zfs, $bytes* path);
	void init$(::jdk::nio::zipfs::ZipFileSystem* zfs, $bytes* path, bool normalized);
	void init$(::jdk::nio::zipfs::ZipFileSystem* zfs, $String* path);
	void checkAccess($Array<::java::nio::file::AccessMode>* modes);
	::jdk::nio::zipfs::ZipPath* checkPath(::java::nio::file::Path* path);
	virtual int32_t compareTo(::java::nio::file::Path* other) override;
	virtual int32_t compareTo(Object$* other) override;
	void copy(::jdk::nio::zipfs::ZipPath* target, $Array<::java::nio::file::CopyOption>* options);
	void copyToTarget(::jdk::nio::zipfs::ZipPath* target, $Array<::java::nio::file::CopyOption>* options);
	void createDirectory($Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static int32_t decode(char16_t c);
	static $String* decodeUri($String* s);
	void delete$();
	void deleteIfExists();
	virtual bool endsWith(::java::nio::file::Path* other) override;
	virtual bool endsWith($String* other) override;
	virtual bool equals(Object$* obj) override;
	bool equalsNameAt(::jdk::nio::zipfs::ZipPath* other, int32_t index);
	bool exists();
	::java::nio::file::attribute::FileAttributeView* getFileAttributeView($Class* type);
	::jdk::nio::zipfs::ZipFileAttributeView* getFileAttributeView($String* type);
	virtual ::jdk::nio::zipfs::ZipPath* getFileName() override;
	::java::nio::file::FileStore* getFileStore();
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::jdk::nio::zipfs::ZipPath* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::jdk::nio::zipfs::ZipPath* getParent() override;
	$bytes* getResolved();
	$bytes* getResolvedPath();
	virtual ::jdk::nio::zipfs::ZipPath* getRoot() override;
	virtual int32_t hashCode() override;
	void initOffsets();
	virtual bool isAbsolute() override;
	bool isHidden();
	bool isSameFile(::java::nio::file::Path* other);
	virtual ::java::util::Iterator* iterator() override;
	void move(::jdk::nio::zipfs::ZipPath* target, $Array<::java::nio::file::CopyOption>* options);
	::java::nio::channels::SeekableByteChannel* newByteChannel(::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::DirectoryStream$Filter* filter);
	::java::nio::channels::FileChannel* newFileChannel(::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::io::InputStream* newInputStream($Array<::java::nio::file::OpenOption>* options);
	::java::io::OutputStream* newOutputStream($Array<::java::nio::file::OpenOption>* options);
	virtual ::java::nio::file::Path* normalize() override;
	$bytes* normalize($bytes* path);
	$bytes* normalize($bytes* path, int32_t off);
	$bytes* normalize($String* path);
	$bytes* normalize($String* path, int32_t off, int32_t len);
	::jdk::nio::zipfs::ZipFileAttributes* readAttributes();
	::java::nio::file::attribute::BasicFileAttributes* readAttributes($Class* type);
	::java::util::Map* readAttributes($String* attributes, $Array<::java::nio::file::LinkOption>* options);
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events) override;
	virtual ::java::nio::file::Path* relativize(::java::nio::file::Path* other) override;
	virtual ::jdk::nio::zipfs::ZipPath* resolve(::java::nio::file::Path* other) override;
	::jdk::nio::zipfs::ZipPath* resolve($bytes* opath);
	virtual ::jdk::nio::zipfs::ZipPath* resolve($String* other) override;
	$bytes* resolve0();
	virtual ::java::nio::file::Path* resolveSibling(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* resolveSibling($String* other) override;
	void setAttribute($String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options);
	void setGroup(::java::nio::file::attribute::GroupPrincipal* group);
	void setOwner(::java::nio::file::attribute::UserPrincipal* owner);
	void setPermissions(::java::util::Set* perms);
	void setTimes(::java::nio::file::attribute::FileTime* mtime, ::java::nio::file::attribute::FileTime* atime, ::java::nio::file::attribute::FileTime* ctime);
	virtual bool startsWith(::java::nio::file::Path* other) override;
	virtual bool startsWith($String* other) override;
	virtual ::jdk::nio::zipfs::ZipPath* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::jdk::nio::zipfs::ZipPath* toAbsolutePath() override;
	virtual ::java::io::File* toFile() override;
	virtual ::jdk::nio::zipfs::ZipPath* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	static bool $assertionsDisabled;
	::jdk::nio::zipfs::ZipFileSystem* zfs = nullptr;
	$bytes* path = nullptr;
	$volatile($ints*) offsets = nullptr;
	int32_t hashcode = 0;
	$volatile($bytes*) resolved = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipPath_h_