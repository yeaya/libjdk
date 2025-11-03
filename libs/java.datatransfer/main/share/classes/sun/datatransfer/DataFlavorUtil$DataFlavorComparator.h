#ifndef _sun_datatransfer_DataFlavorUtil$DataFlavorComparator_h_
#define _sun_datatransfer_DataFlavorUtil$DataFlavorComparator_h_
//$ class sun.datatransfer.DataFlavorUtil$DataFlavorComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("UNKNOWN_OBJECT_LOSES")
#undef UNKNOWN_OBJECT_LOSES
#pragma push_macro("UNKNOWN_OBJECT_WINS")
#undef UNKNOWN_OBJECT_WINS

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace datatransfer {

class DataFlavorUtil$DataFlavorComparator : public ::java::util::Comparator {
	$class(DataFlavorUtil$DataFlavorComparator, 0, ::java::util::Comparator)
public:
	DataFlavorUtil$DataFlavorComparator();
	void init$();
	virtual int32_t compare(::java::awt::datatransfer::DataFlavor* flavor1, ::java::awt::datatransfer::DataFlavor* flavor2);
	virtual int32_t compare(Object$* flavor1, Object$* flavor2) override;
	static ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator* INSTANCE;
	static ::java::util::Map* exactTypes;
	static ::java::util::Map* primaryTypes;
	static ::java::util::Map* nonTextRepresentations;
	static ::java::util::Map* textTypes;
	static ::java::util::Map* decodedTextRepresentations;
	static ::java::util::Map* encodedTextRepresentations;
	static ::java::lang::Integer* UNKNOWN_OBJECT_LOSES;
	static ::java::lang::Integer* UNKNOWN_OBJECT_WINS;
};

	} // datatransfer
} // sun

#pragma pop_macro("INSTANCE")
#pragma pop_macro("UNKNOWN_OBJECT_LOSES")
#pragma pop_macro("UNKNOWN_OBJECT_WINS")

#endif // _sun_datatransfer_DataFlavorUtil$DataFlavorComparator_h_