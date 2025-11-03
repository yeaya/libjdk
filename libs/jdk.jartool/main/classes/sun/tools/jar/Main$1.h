#ifndef _sun_tools_jar_Main$1_h_
#define _sun_tools_jar_Main$1_h_
//$ class sun.tools.jar.Main$1
//$ extends java.util.HashSet

#include <java/util/HashSet.h>

namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class Main;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$1 : public ::java::util::HashSet {
	$class(Main$1, $NO_CLASS_INIT, ::java::util::HashSet)
public:
	Main$1();
	void init$(::sun::tools::jar::Main* this$0);
	virtual bool add(::java::util::zip::ZipEntry* e);
	virtual bool add(Object$* e) override;
	using ::java::util::HashSet::toArray;
	::sun::tools::jar::Main* this$0 = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$1_h_