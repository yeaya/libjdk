#ifndef _jdk_nio_zipfs_ZipFileStore$ZipFileStoreAttributes_h_
#define _jdk_nio_zipfs_ZipFileStore$ZipFileStoreAttributes_h_
//$ class jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class FileStore;
		}
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileStore;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileStore$ZipFileStoreAttributes : public ::java::lang::Object {
	$class(ZipFileStore$ZipFileStoreAttributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipFileStore$ZipFileStoreAttributes();
	void init$(::jdk::nio::zipfs::ZipFileStore* fileStore);
	virtual int64_t totalSpace();
	virtual int64_t unallocatedSpace();
	virtual int64_t usableSpace();
	::java::nio::file::FileStore* fstore = nullptr;
	int64_t size = 0;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileStore$ZipFileStoreAttributes_h_