#ifndef _jdk_nio_zipfs_ZipFileSystem$EntryInputStream_h_
#define _jdk_nio_zipfs_ZipFileSystem$EntryInputStream_h_
//$ class jdk.nio.zipfs.ZipFileSystem$EntryInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
			class ZipFileSystem$Entry;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$EntryInputStream : public ::java::io::InputStream {
	$class(ZipFileSystem$EntryInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ZipFileSystem$EntryInputStream();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$Entry* e);
	virtual int32_t available() override;
	virtual void close() override;
	void initDataPos();
	using ::java::io::InputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	virtual int64_t skip(int64_t n) override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	int64_t pos = 0;
	int64_t rem = 0;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$EntryInputStream_h_