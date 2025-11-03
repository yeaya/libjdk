#ifndef _sun_tools_jar_Main$CRC32OutputStream_h_
#define _sun_tools_jar_Main$CRC32OutputStream_h_
//$ class sun.tools.jar.Main$CRC32OutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace zip {
			class CRC32;
			class ZipEntry;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$CRC32OutputStream : public ::java::io::OutputStream {
	$class(Main$CRC32OutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	Main$CRC32OutputStream();
	void init$();
	virtual void updateEntry(::java::util::zip::ZipEntry* e);
	using ::java::io::OutputStream::write;
	virtual void write(int32_t r) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::util::zip::CRC32* crc = nullptr;
	int64_t n = 0;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$CRC32OutputStream_h_