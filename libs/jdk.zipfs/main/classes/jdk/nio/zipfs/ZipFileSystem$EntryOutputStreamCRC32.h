#ifndef _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamCRC32_h_
#define _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamCRC32_h_
//$ class jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class CRC32;
		}
	}
}
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

class ZipFileSystem$EntryOutputStreamCRC32 : public ::java::io::FilterOutputStream {
	$class(ZipFileSystem$EntryOutputStreamCRC32, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	ZipFileSystem$EntryOutputStreamCRC32();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$Entry* e, ::java::io::OutputStream* os);
	virtual void close() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	::java::util::zip::CRC32* crc = nullptr;
	::jdk::nio::zipfs::ZipFileSystem$Entry* e = nullptr;
	int64_t written = 0;
	bool isClosed = false;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamCRC32_h_