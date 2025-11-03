#ifndef _sun_datatransfer_DataFlavorUtil$CharsetComparator_h_
#define _sun_datatransfer_DataFlavorUtil$CharsetComparator_h_
//$ class sun.datatransfer.DataFlavorUtil$CharsetComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("DEFAULT_CHARSET_INDEX")
#undef DEFAULT_CHARSET_INDEX
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("OTHER_CHARSET_INDEX")
#undef OTHER_CHARSET_INDEX
#pragma push_macro("UNSUPPORTED_CHARSET")
#undef UNSUPPORTED_CHARSET
#pragma push_macro("UNSUPPORTED_CHARSET_INDEX")
#undef UNSUPPORTED_CHARSET_INDEX
#pragma push_macro("WORST_CHARSET_INDEX")
#undef WORST_CHARSET_INDEX

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

class DataFlavorUtil$CharsetComparator : public ::java::util::Comparator {
	$class(DataFlavorUtil$CharsetComparator, 0, ::java::util::Comparator)
public:
	DataFlavorUtil$CharsetComparator();
	void init$();
	virtual int32_t compare($String* charset1, $String* charset2);
	virtual int32_t compare(Object$* charset1, Object$* charset2) override;
	static $String* getEncoding($String* charset);
	static ::sun::datatransfer::DataFlavorUtil$CharsetComparator* INSTANCE;
	static ::java::util::Map* charsets;
	static ::java::lang::Integer* DEFAULT_CHARSET_INDEX;
	static ::java::lang::Integer* OTHER_CHARSET_INDEX;
	static ::java::lang::Integer* WORST_CHARSET_INDEX;
	static ::java::lang::Integer* UNSUPPORTED_CHARSET_INDEX;
	static $String* UNSUPPORTED_CHARSET;
};

	} // datatransfer
} // sun

#pragma pop_macro("DEFAULT_CHARSET_INDEX")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("OTHER_CHARSET_INDEX")
#pragma pop_macro("UNSUPPORTED_CHARSET")
#pragma pop_macro("UNSUPPORTED_CHARSET_INDEX")
#pragma pop_macro("WORST_CHARSET_INDEX")

#endif // _sun_datatransfer_DataFlavorUtil$CharsetComparator_h_