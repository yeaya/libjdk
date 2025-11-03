#ifndef _sun_datatransfer_DataFlavorUtil_h_
#define _sun_datatransfer_DataFlavorUtil_h_
//$ class sun.datatransfer.DataFlavorUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Comparator;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace datatransfer {
		class DesktopDatatransferService;
	}
}

namespace sun {
	namespace datatransfer {

class $import DataFlavorUtil : public ::java::lang::Object {
	$class(DataFlavorUtil, 0, ::java::lang::Object)
public:
	DataFlavorUtil();
	void init$();
	static $String* canonicalName($String* encoding);
	static int32_t compareIndices(::java::util::Map* indexMap, Object$* obj1, Object$* obj2, ::java::lang::Integer* fallbackIndex);
	static bool doesSubtypeSupportCharset(::java::awt::datatransfer::DataFlavor* flavor);
	static bool doesSubtypeSupportCharset($String* subType, $String* charset);
	static ::java::util::Comparator* getCharsetComparator();
	static ::java::util::Comparator* getDataFlavorComparator();
	static ::sun::datatransfer::DesktopDatatransferService* getDesktopService();
	static ::java::util::Comparator* getIndexOrderComparator(::java::util::Map* indexMap);
	static $String* getTextCharset(::java::awt::datatransfer::DataFlavor* flavor);
	static ::java::util::Comparator* getTextFlavorComparator();
	static bool isEncodingSupported($String* encoding);
	static bool isFlavorCharsetTextType(::java::awt::datatransfer::DataFlavor* flavor);
	static bool isFlavorNoncharsetTextType(::java::awt::datatransfer::DataFlavor* flavor);
	static ::java::util::Set* standardEncodings();
	static ::java::util::Map* textMIMESubtypeCharsetSupport;
};

	} // datatransfer
} // sun

#endif // _sun_datatransfer_DataFlavorUtil_h_