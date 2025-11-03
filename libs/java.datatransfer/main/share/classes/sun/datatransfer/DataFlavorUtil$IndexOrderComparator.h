#ifndef _sun_datatransfer_DataFlavorUtil$IndexOrderComparator_h_
#define _sun_datatransfer_DataFlavorUtil$IndexOrderComparator_h_
//$ class sun.datatransfer.DataFlavorUtil$IndexOrderComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("FALLBACK_INDEX")
#undef FALLBACK_INDEX

namespace java {
	namespace lang {
		class Integer;
		class Long;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace datatransfer {

class DataFlavorUtil$IndexOrderComparator : public ::java::util::Comparator {
	$class(DataFlavorUtil$IndexOrderComparator, 0, ::java::util::Comparator)
public:
	DataFlavorUtil$IndexOrderComparator();
	void init$(::java::util::Map* indexMap);
	virtual int32_t compare(::java::lang::Long* obj1, ::java::lang::Long* obj2);
	virtual int32_t compare(Object$* obj1, Object$* obj2) override;
	::java::util::Map* indexMap = nullptr;
	static ::java::lang::Integer* FALLBACK_INDEX;
};

	} // datatransfer
} // sun

#pragma pop_macro("FALLBACK_INDEX")

#endif // _sun_datatransfer_DataFlavorUtil$IndexOrderComparator_h_