#ifndef _sun_tools_jar_Main$ZipFileModuleInfoEntry_h_
#define _sun_tools_jar_Main$ZipFileModuleInfoEntry_h_
//$ class sun.tools.jar.Main$ZipFileModuleInfoEntry
//$ extends sun.tools.jar.Main$ModuleInfoEntry

#include <sun/tools/jar/Main$ModuleInfoEntry.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$ZipFileModuleInfoEntry : public ::sun::tools::jar::Main$ModuleInfoEntry {
	$class(Main$ZipFileModuleInfoEntry, $NO_CLASS_INIT, ::sun::tools::jar::Main$ModuleInfoEntry)
public:
	Main$ZipFileModuleInfoEntry();
	void init$(::java::util::zip::ZipFile* zipFile, ::java::util::zip::ZipEntry* entry);
	virtual ::java::io::InputStream* bytes() override;
	virtual $String* name() override;
	virtual ::java::util::Optional* uriString() override;
	::java::util::zip::ZipFile* zipFile = nullptr;
	::java::util::zip::ZipEntry* entry = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$ZipFileModuleInfoEntry_h_