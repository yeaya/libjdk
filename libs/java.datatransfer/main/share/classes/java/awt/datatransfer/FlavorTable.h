#ifndef _java_awt_datatransfer_FlavorTable_h_
#define _java_awt_datatransfer_FlavorTable_h_
//$ interface java.awt.datatransfer.FlavorTable
//$ extends java.awt.datatransfer.FlavorMap

#include <java/awt/datatransfer/FlavorMap.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $export FlavorTable : public ::java::awt::datatransfer::FlavorMap {
	$interface(FlavorTable, $NO_CLASS_INIT, ::java::awt::datatransfer::FlavorMap)
public:
	virtual ::java::util::List* getFlavorsForNative($String* nat) {return nullptr;}
	virtual ::java::util::List* getNativesForFlavor(::java::awt::datatransfer::DataFlavor* flav) {return nullptr;}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_FlavorTable_h_