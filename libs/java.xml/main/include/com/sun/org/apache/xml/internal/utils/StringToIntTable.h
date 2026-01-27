#ifndef _com_sun_org_apache_xml_internal_utils_StringToIntTable_h_
#define _com_sun_org_apache_xml_internal_utils_StringToIntTable_h_
//$ class com.sun.org.apache.xml.internal.utils.StringToIntTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INVALID_KEY")
#undef INVALID_KEY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import StringToIntTable : public ::java::lang::Object {
	$class(StringToIntTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringToIntTable();
	void init$();
	void init$(int32_t blocksize);
	bool contains($String* key);
	int32_t get($String* key);
	int32_t getIgnoreCase($String* key);
	int32_t getLength();
	$StringArray* keys();
	void put($String* key, int32_t value);
	static const int32_t INVALID_KEY = (-10000);
	int32_t m_blocksize = 0;
	$StringArray* m_map = nullptr;
	$ints* m_values = nullptr;
	int32_t m_firstFree = 0;
	int32_t m_mapSize = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INVALID_KEY")

#endif // _com_sun_org_apache_xml_internal_utils_StringToIntTable_h_