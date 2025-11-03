#ifndef _jdk_nio_zipfs_ZipFileStore_h_
#define _jdk_nio_zipfs_ZipFileStore_h_
//$ class jdk.nio.zipfs.ZipFileStore
//$ extends java.nio.file.FileStore

#include <java/nio/file/FileStore.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileStoreAttributeView;
			}
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

class ZipFileStore : public ::java::nio::file::FileStore {
	$class(ZipFileStore, $NO_CLASS_INIT, ::java::nio::file::FileStore)
public:
	ZipFileStore();
	void init$(::jdk::nio::zipfs::ZipPath* zpath);
	virtual $Object* getAttribute($String* attribute) override;
	virtual ::java::nio::file::attribute::FileStoreAttributeView* getFileStoreAttributeView($Class* type) override;
	virtual int64_t getTotalSpace() override;
	virtual int64_t getUnallocatedSpace() override;
	virtual int64_t getUsableSpace() override;
	virtual bool isReadOnly() override;
	virtual $String* name() override;
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual bool supportsFileAttributeView($String* name) override;
	virtual $String* type() override;
	::jdk::nio::zipfs::ZipFileSystem* zfs = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileStore_h_