#ifndef _sun_datatransfer_DataFlavorUtil$StandardEncodingsHolder_h_
#define _sun_datatransfer_DataFlavorUtil$StandardEncodingsHolder_h_
//$ class sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class SortedSet;
	}
}

namespace sun {
	namespace datatransfer {

class DataFlavorUtil$StandardEncodingsHolder : public ::java::lang::Object {
	$class(DataFlavorUtil$StandardEncodingsHolder, 0, ::java::lang::Object)
public:
	DataFlavorUtil$StandardEncodingsHolder();
	void init$();
	static ::java::util::SortedSet* load();
	static ::java::util::SortedSet* standardEncodings;
};

	} // datatransfer
} // sun

#endif // _sun_datatransfer_DataFlavorUtil$StandardEncodingsHolder_h_