#ifndef _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamDef_h_
#define _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamDef_h_
//$ class jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef
//$ extends java.util.zip.DeflaterOutputStream

#include <java/lang/Array.h>
#include <java/util/zip/DeflaterOutputStream.h>

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

class ZipFileSystem$EntryOutputStreamDef : public ::java::util::zip::DeflaterOutputStream {
	$class(ZipFileSystem$EntryOutputStreamDef, $NO_CLASS_INIT, ::java::util::zip::DeflaterOutputStream)
public:
	ZipFileSystem$EntryOutputStreamDef();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$Entry* e, ::java::io::OutputStream* os);
	virtual void close() override;
	using ::java::util::zip::DeflaterOutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	::java::util::zip::CRC32* crc = nullptr;
	::jdk::nio::zipfs::ZipFileSystem$Entry* e = nullptr;
	bool isClosed = false;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$EntryOutputStreamDef_h_