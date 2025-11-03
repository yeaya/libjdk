#ifndef _jdk_nio_zipfs_ZipFileSystem$2_h_
#define _jdk_nio_zipfs_ZipFileSystem$2_h_
//$ class jdk.nio.zipfs.ZipFileSystem$2
//$ extends java.util.zip.InflaterInputStream

#include <java/util/zip/InflaterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Inflater;
		}
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$2 : public ::java::util::zip::InflaterInputStream {
	$class(ZipFileSystem$2, $NO_CLASS_INIT, ::java::util::zip::InflaterInputStream)
public:
	ZipFileSystem$2();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::java::io::InputStream* arg0, ::java::util::zip::Inflater* arg1, int32_t arg2, int64_t val$size);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void fill() override;
	using ::java::util::zip::InflaterInputStream::read;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	int64_t val$size = 0;
	bool isClosed = false;
	bool eof = false;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$2_h_