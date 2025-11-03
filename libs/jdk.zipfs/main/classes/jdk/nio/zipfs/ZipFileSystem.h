#ifndef _jdk_nio_zipfs_ZipFileSystem_h_
#define _jdk_nio_zipfs_ZipFileSystem_h_
//$ class jdk.nio.zipfs.ZipFileSystem
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

#pragma push_macro("COMPRESSION_METHOD_DEFLATED")
#undef COMPRESSION_METHOD_DEFLATED
#pragma push_macro("COMPRESSION_METHOD_STORED")
#undef COMPRESSION_METHOD_STORED
#pragma push_macro("DEFAULT_PERMISSIONS")
#undef DEFAULT_PERMISSIONS
#pragma push_macro("GLOB_SYNTAX")
#undef GLOB_SYNTAX
#pragma push_macro("LOOKUPKEY")
#undef LOOKUPKEY
#pragma push_macro("MAX_FLATER")
#undef MAX_FLATER
#pragma push_macro("PROPERTY_COMPRESSION_METHOD")
#undef PROPERTY_COMPRESSION_METHOD
#pragma push_macro("PROPERTY_DEFAULT_GROUP")
#undef PROPERTY_DEFAULT_GROUP
#pragma push_macro("PROPERTY_DEFAULT_OWNER")
#undef PROPERTY_DEFAULT_OWNER
#pragma push_macro("PROPERTY_DEFAULT_PERMISSIONS")
#undef PROPERTY_DEFAULT_PERMISSIONS
#pragma push_macro("PROPERTY_MULTI_RELEASE")
#undef PROPERTY_MULTI_RELEASE
#pragma push_macro("PROPERTY_POSIX")
#undef PROPERTY_POSIX
#pragma push_macro("PROPERTY_RELEASE_VERSION")
#undef PROPERTY_RELEASE_VERSION
#pragma push_macro("REGEX_SYNTAX")
#undef REGEX_SYNTAX
#pragma push_macro("ROOTPATH")
#undef ROOTPATH

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Integer;
		class Iterable;
		class Void;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
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
			class CopyOption;
			class DirectoryStream$Filter;
			class FileStore;
			class OpenOption;
			class Path;
			class PathMatcher;
			class WatchService;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
				class FileTime;
				class GroupPrincipal;
				class PosixFileAttributeView;
				class PosixFileAttributes;
				class UserPrincipal;
				class UserPrincipalLookupService;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace spi {
				class FileSystemProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Iterator;
		class LinkedHashMap;
		class List;
		class Map;
		class Set;
		class TreeMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Deflater;
			class Inflater;
		}
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipCoder;
			class ZipFileAttributes;
			class ZipFileSystem$END;
			class ZipFileSystem$Entry;
			class ZipFileSystem$IndexNode;
			class ZipFileSystemProvider;
			class ZipPath;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem : public ::java::nio::file::FileSystem {
	$class(ZipFileSystem, $HAS_FINALIZE, ::java::nio::file::FileSystem)
public:
	ZipFileSystem();
	void init$(::jdk::nio::zipfs::ZipFileSystemProvider* provider, ::java::nio::file::Path* zfpath, ::java::util::Map* env);
	void beginRead();
	void beginWrite();
	void buildNodeTree();
	virtual void checkAccess($bytes* path);
	void checkEncoding($bytes* a);
	void checkOptions(::java::util::Set* options);
	void checkParents($bytes* path);
	void checkUTF8($bytes* a);
	void checkWritable();
	virtual void close() override;
	virtual void copyFile(bool deletesrc, $bytes* src, $bytes* dst, $Array<::java::nio::file::CopyOption>* options);
	int64_t copyLOCEntry(::jdk::nio::zipfs::ZipFileSystem$Entry* e, bool updateHeader, ::java::io::OutputStream* os, int64_t written, $bytes* buf);
	virtual void createDirectory($bytes* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::nio::file::Path* createTempFileInSameDirectoryAs(::java::nio::file::Path* path);
	void createVersionedLinks(int32_t version);
	virtual void deleteFile($bytes* path, bool failIfNotExists);
	void endRead();
	void endWrite();
	void ensureOpen();
	virtual bool exists($bytes* path);
	virtual void finalize() override;
	::jdk::nio::zipfs::ZipFileSystem$END* findEND();
	$bytes* getBytes($String* name);
	int32_t getDefaultCompressionMethod(::java::util::Map* env);
	::java::util::zip::Deflater* getDeflater();
	::jdk::nio::zipfs::ZipFileSystem$Entry* getEntry($bytes* path);
	virtual ::jdk::nio::zipfs::ZipFileAttributes* getFileAttributes($bytes* path);
	virtual ::java::nio::file::FileStore* getFileStore(::jdk::nio::zipfs::ZipPath* path);
	virtual ::java::lang::Iterable* getFileStores() override;
	::java::util::zip::Inflater* getInflater();
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* getInode($bytes* path);
	::java::io::InputStream* getInputStream(::jdk::nio::zipfs::ZipFileSystem$Entry* e);
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* getOrCreateInode($bytes* path, bool isdir);
	::java::io::OutputStream* getOutputStream(::jdk::nio::zipfs::ZipFileSystem$Entry* e);
	static $bytes* getParent($bytes* path);
	static int32_t getParentOff($bytes* path);
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndInput) override;
	::java::nio::file::attribute::PosixFileAttributes* getPosixAttributes(::java::nio::file::Path* path);
	virtual ::jdk::nio::zipfs::ZipPath* getRootDir();
	virtual ::java::lang::Iterable* getRootDirectories() override;
	$bytes* getRootName(::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* prefix);
	virtual $String* getSeparator() override;
	$String* getString($bytes* name);
	::java::nio::file::Path* getTempPathForEntry($bytes* path);
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	::java::lang::Integer* getVersion(::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* metaInfVersions);
	::java::util::TreeMap* getVersionMap(int32_t version, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* metaInfVersions);
	virtual ::java::nio::file::Path* getZipFile();
	$bytes* initCEN();
	::java::nio::file::attribute::GroupPrincipal* initGroup(::java::nio::file::Path* zfpath, ::java::util::Map* env);
	::java::nio::file::attribute::UserPrincipal* initOwner(::java::nio::file::Path* zfpath, ::java::util::Map* env);
	::java::util::Set* initPermissions(::java::util::Map* env);
	void initializeReleaseVersion(::java::util::Map* env);
	virtual bool isDirectory($bytes* path);
	bool isMultiReleaseJar();
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	static bool isTrue(::java::util::Map* env, $String* name);
	virtual ::java::util::Iterator* iteratorOf(::jdk::nio::zipfs::ZipPath* dir, ::java::nio::file::DirectoryStream$Filter* filter);
	static ::java::lang::Boolean* lambda$close$10(::java::nio::file::Path* p);
	::java::lang::Void* lambda$close$9();
	void lambda$createVersionedLinks$11(::java::util::HashMap* aliasMap, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* versionNode, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* entryNode);
	void lambda$createVersionedLinks$12(::java::util::HashMap* aliasMap, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* versionNode);
	static $bytes* lambda$createVersionedLinks$13(::java::util::HashMap* aliasMap, $bytes* path);
	static bool lambda$getPathMatcher$8(::java::util::regex::Pattern* pattern, ::java::nio::file::Path* path);
	static ::java::nio::file::attribute::GroupPrincipal* lambda$initGroup$6(::java::nio::file::attribute::PosixFileAttributeView* zfpv);
	static ::java::nio::file::attribute::UserPrincipal* lambda$initOwner$2(::java::nio::file::Path* zfpath);
	static $String* lambda$initOwner$3();
	static $String* lambda$initOwner$4($String* userName);
	static $String* lambda$initOwner$5(Object$* o);
	static ::java::lang::Boolean* lambda$new$1(::java::nio::file::Path* zfpath);
	static ::java::lang::Boolean* lambda$static$0();
	void makeParentDirs(::jdk::nio::zipfs::ZipFileSystem$IndexNode* node, ::jdk::nio::zipfs::ZipFileSystem$IndexNode* root);
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel($bytes* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual ::java::nio::channels::FileChannel* newFileChannel($bytes* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual ::java::io::InputStream* newInputStream($bytes* path);
	virtual ::java::io::OutputStream* newOutputStream($bytes* path, $Array<::java::nio::file::OpenOption>* options);
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	int64_t readFullyAt($bytes* buf, int32_t off, int64_t len, int64_t pos);
	int64_t readFullyAt(::java::nio::ByteBuffer* bb, int64_t pos);
	void releaseDeflater(::java::util::zip::Deflater* def);
	void releaseInflater(::java::util::zip::Inflater* inf);
	void removeFromTree(::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode);
	void removeTempPathForEntry(::java::nio::file::Path* path);
	virtual void setGroup($bytes* path, ::java::nio::file::attribute::GroupPrincipal* group);
	virtual void setOwner($bytes* path, ::java::nio::file::attribute::UserPrincipal* owner);
	virtual void setPermissions($bytes* path, ::java::util::Set* perms);
	virtual void setReadOnly();
	virtual void setTimes($bytes* path, ::java::nio::file::attribute::FileTime* mtime, ::java::nio::file::attribute::FileTime* atime, ::java::nio::file::attribute::FileTime* ctime);
	virtual ::java::util::Set* supportedFileAttributeViews() override;
	void sync();
	virtual $String* toString() override;
	void update(::jdk::nio::zipfs::ZipFileSystem$Entry* e);
	void updateDelete(::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode);
	void walk(::jdk::nio::zipfs::ZipFileSystem$IndexNode* inode, ::java::util::function::Consumer* consumer);
	int64_t writeEntry(::jdk::nio::zipfs::ZipFileSystem$Entry* e, ::java::io::OutputStream* os);
	void writeTo(::jdk::nio::zipfs::ZipFileSystem$Entry* e, ::java::io::OutputStream* os);
	static bool isWindows;
	static $bytes* ROOTPATH;
	static $String* PROPERTY_POSIX;
	static $String* PROPERTY_DEFAULT_OWNER;
	static $String* PROPERTY_DEFAULT_GROUP;
	static $String* PROPERTY_DEFAULT_PERMISSIONS;
	static $String* PROPERTY_RELEASE_VERSION;
	static $String* PROPERTY_MULTI_RELEASE;
	static ::java::util::Set* DEFAULT_PERMISSIONS;
	static $String* PROPERTY_COMPRESSION_METHOD;
	static $String* COMPRESSION_METHOD_DEFLATED;
	static $String* COMPRESSION_METHOD_STORED;
	::jdk::nio::zipfs::ZipFileSystemProvider* provider$ = nullptr;
	::java::nio::file::Path* zfpath = nullptr;
	::jdk::nio::zipfs::ZipCoder* zc = nullptr;
	::jdk::nio::zipfs::ZipPath* rootdir = nullptr;
	bool readOnly = false;
	int64_t zfsDefaultTimeStamp = 0;
	bool noExtt = false;
	bool useTempFile = false;
	bool forceEnd64 = false;
	int32_t defaultCompressionMethod = 0;
	::java::util::function::Function* entryLookup = nullptr;
	bool supportPosix = false;
	::java::nio::file::attribute::UserPrincipal* defaultOwner = nullptr;
	::java::nio::file::attribute::GroupPrincipal* defaultGroup = nullptr;
	::java::util::Set* defaultPermissions = nullptr;
	::java::util::Set* supportedFileAttributeViews$ = nullptr;
	static $String* GLOB_SYNTAX;
	static $String* REGEX_SYNTAX;
	::java::util::Set* streams = nullptr;
	::java::util::Set* tmppaths = nullptr;
	$volatile(bool) isOpen$ = false;
	::java::nio::channels::SeekableByteChannel* ch = nullptr;
	$bytes* cen = nullptr;
	::jdk::nio::zipfs::ZipFileSystem$END* end = nullptr;
	int64_t locpos = 0;
	::java::util::concurrent::locks::ReadWriteLock* rwlock = nullptr;
	::java::util::LinkedHashMap* inodes = nullptr;
	bool hasUpdate = false;
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* LOOKUPKEY = nullptr;
	static const int32_t MAX_FLATER = 20;
	::java::util::List* inflaters = nullptr;
	::java::util::List* deflaters = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#pragma pop_macro("COMPRESSION_METHOD_DEFLATED")
#pragma pop_macro("COMPRESSION_METHOD_STORED")
#pragma pop_macro("DEFAULT_PERMISSIONS")
#pragma pop_macro("GLOB_SYNTAX")
#pragma pop_macro("LOOKUPKEY")
#pragma pop_macro("MAX_FLATER")
#pragma pop_macro("PROPERTY_COMPRESSION_METHOD")
#pragma pop_macro("PROPERTY_DEFAULT_GROUP")
#pragma pop_macro("PROPERTY_DEFAULT_OWNER")
#pragma pop_macro("PROPERTY_DEFAULT_PERMISSIONS")
#pragma pop_macro("PROPERTY_MULTI_RELEASE")
#pragma pop_macro("PROPERTY_POSIX")
#pragma pop_macro("PROPERTY_RELEASE_VERSION")
#pragma pop_macro("REGEX_SYNTAX")
#pragma pop_macro("ROOTPATH")

#endif // _jdk_nio_zipfs_ZipFileSystem_h_