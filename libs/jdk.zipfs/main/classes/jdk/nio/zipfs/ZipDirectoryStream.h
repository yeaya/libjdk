#ifndef _jdk_nio_zipfs_ZipDirectoryStream_h_
#define _jdk_nio_zipfs_ZipDirectoryStream_h_
//$ class jdk.nio.zipfs.ZipDirectoryStream
//$ extends java.nio.file.DirectoryStream

#include <java/nio/file/DirectoryStream.h>

namespace java {
	namespace nio {
		namespace file {
			class DirectoryStream$Filter;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
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

class ZipDirectoryStream : public ::java::nio::file::DirectoryStream {
	$class(ZipDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	ZipDirectoryStream();
	void init$(::jdk::nio::zipfs::ZipPath* dir, ::java::nio::file::DirectoryStream$Filter* filter);
	virtual void close() override;
	virtual ::java::util::Iterator* iterator() override;
	::jdk::nio::zipfs::ZipFileSystem* zipfs = nullptr;
	::jdk::nio::zipfs::ZipPath* dir = nullptr;
	::java::nio::file::DirectoryStream$Filter* filter = nullptr;
	$volatile(bool) isClosed = false;
	$volatile(::java::util::Iterator*) itr = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipDirectoryStream_h_