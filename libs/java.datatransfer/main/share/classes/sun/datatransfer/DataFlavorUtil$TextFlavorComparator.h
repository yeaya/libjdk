#ifndef _sun_datatransfer_DataFlavorUtil$TextFlavorComparator_h_
#define _sun_datatransfer_DataFlavorUtil$TextFlavorComparator_h_
//$ class sun.datatransfer.DataFlavorUtil$TextFlavorComparator
//$ extends sun.datatransfer.DataFlavorUtil$DataFlavorComparator

#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}

namespace sun {
	namespace datatransfer {

class DataFlavorUtil$TextFlavorComparator : public ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator {
	$class(DataFlavorUtil$TextFlavorComparator, 0, ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator)
public:
	DataFlavorUtil$TextFlavorComparator();
	void init$();
	virtual int32_t compare(::java::awt::datatransfer::DataFlavor* flavor1, ::java::awt::datatransfer::DataFlavor* flavor2) override;
	virtual int32_t compare(Object$* flavor1, Object$* flavor2) override;
	static ::sun::datatransfer::DataFlavorUtil$TextFlavorComparator* INSTANCE;
};

	} // datatransfer
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_datatransfer_DataFlavorUtil$TextFlavorComparator_h_