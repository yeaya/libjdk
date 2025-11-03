#ifndef _java_awt_datatransfer_SystemFlavorMap$SoftCache_h_
#define _java_awt_datatransfer_SystemFlavorMap$SoftCache_h_
//$ class java.awt.datatransfer.SystemFlavorMap$SoftCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class LinkedHashSet;
		class Map;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class SystemFlavorMap$SoftCache : public ::java::lang::Object {
	$class(SystemFlavorMap$SoftCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SystemFlavorMap$SoftCache();
	void init$();
	::java::util::LinkedHashSet* check(Object$* key);
	void put(Object$* key, ::java::util::LinkedHashSet* value);
	void remove(Object$* key);
	::java::util::Map* cache = nullptr;
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_SystemFlavorMap$SoftCache_h_