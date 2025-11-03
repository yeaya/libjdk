#ifndef _java_awt_datatransfer_FlavorMap_h_
#define _java_awt_datatransfer_FlavorMap_h_
//$ interface java.awt.datatransfer.FlavorMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import FlavorMap : public ::java::lang::Object {
	$interface(FlavorMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Map* getFlavorsForNatives($StringArray* natives) {return nullptr;}
	virtual ::java::util::Map* getNativesForFlavors($Array<::java::awt::datatransfer::DataFlavor>* flavors) {return nullptr;}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_FlavorMap_h_