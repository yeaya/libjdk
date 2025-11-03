#ifndef _jdk_nio_zipfs_ZipFileSystemProvider_h_
#define _jdk_nio_zipfs_ZipFileSystemProvider_h_
//$ class jdk.nio.zipfs.ZipFileSystemProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

namespace java {
	namespace io {
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
			class AsynchronousFileChannel;
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
			class Path;
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
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
			class ZipPath;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystemProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(ZipFileSystemProvider, $NO_CLASS_INIT, ::java::nio::file::spi::FileSystemProvider)
public:
	ZipFileSystemProvider();
	void init$();
	virtual void checkAccess(::java::nio::file::Path* path, $Array<::java::nio::file::AccessMode>* modes) override;
	virtual void copy(::java::nio::file::Path* src, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* path, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void delete$(::java::nio::file::Path* path) override;
	bool ensureFile(::java::nio::file::Path* path);
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* path) override;
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) override;
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) override;
	virtual $String* getScheme() override;
	::jdk::nio::zipfs::ZipFileSystem* getZipFileSystem(::java::nio::file::Path* path, ::java::util::Map* env);
	virtual bool isHidden(::java::nio::file::Path* path) override;
	virtual bool isSameFile(::java::nio::file::Path* path, ::java::nio::file::Path* other) override;
	static ::java::nio::file::Path* lambda$removeFileSystem$0(::java::nio::file::Path* rec$);
	virtual void move(::java::nio::file::Path* src, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, ::java::util::concurrent::ExecutorService* exec, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* path, ::java::nio::file::DirectoryStream$Filter* filter) override;
	virtual ::java::nio::channels::FileChannel* newFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) override;
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path, ::java::util::Map* env) override;
	virtual ::java::io::InputStream* newInputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options) override;
	virtual ::java::io::OutputStream* newOutputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* path, $String* attributes, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* link) override;
	virtual void removeFileSystem(::java::nio::file::Path* zfpath, ::jdk::nio::zipfs::ZipFileSystem* zfs);
	virtual void setAttribute(::java::nio::file::Path* path, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) override;
	static ::jdk::nio::zipfs::ZipPath* toZipPath(::java::nio::file::Path* path);
	virtual ::java::nio::file::Path* uriToPath(::java::net::URI* uri);
	::java::util::Map* filesystems = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystemProvider_h_