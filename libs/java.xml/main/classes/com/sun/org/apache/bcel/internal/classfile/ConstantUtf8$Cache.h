#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BCEL_STATISTICS")
#undef BCEL_STATISTICS
#pragma push_macro("CACHE")
#undef CACHE
#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY
#pragma push_macro("MAX_ENTRIES")
#undef MAX_ENTRIES
#pragma push_macro("MAX_ENTRY_SIZE")
#undef MAX_ENTRY_SIZE

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ConstantUtf8$Cache : public ::java::lang::Object {
	$class(ConstantUtf8$Cache, 0, ::java::lang::Object)
public:
	ConstantUtf8$Cache();
	void init$();
	static bool isEnabled();
	static const bool BCEL_STATISTICS = false;
	static const int32_t MAX_ENTRIES = 20000;
	static const int32_t INITIAL_CAPACITY = 26666; // (int)(MAX_ENTRIES / 0.75)
	static ::java::util::HashMap* CACHE;
	static const int32_t MAX_ENTRY_SIZE = 200;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BCEL_STATISTICS")
#pragma pop_macro("CACHE")
#pragma pop_macro("INITIAL_CAPACITY")
#pragma pop_macro("MAX_ENTRIES")
#pragma pop_macro("MAX_ENTRY_SIZE")

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8$Cache_h_