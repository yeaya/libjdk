#ifndef _sun_tools_jar_Main$StreamedModuleInfoEntry_h_
#define _sun_tools_jar_Main$StreamedModuleInfoEntry_h_
//$ class sun.tools.jar.Main$StreamedModuleInfoEntry
//$ extends sun.tools.jar.Main$ModuleInfoEntry

#include <java/lang/Array.h>
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

namespace sun {
	namespace tools {
		namespace jar {

class Main$StreamedModuleInfoEntry : public ::sun::tools::jar::Main$ModuleInfoEntry {
	$class(Main$StreamedModuleInfoEntry, $NO_CLASS_INIT, ::sun::tools::jar::Main$ModuleInfoEntry)
public:
	Main$StreamedModuleInfoEntry();
	void init$($String* name, $bytes* bytes);
	virtual ::java::io::InputStream* bytes() override;
	virtual $String* name() override;
	virtual ::java::util::Optional* uriString() override;
	$String* name$ = nullptr;
	$bytes* bytes$ = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$StreamedModuleInfoEntry_h_