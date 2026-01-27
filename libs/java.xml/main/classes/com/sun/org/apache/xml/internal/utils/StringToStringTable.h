#ifndef _com_sun_org_apache_xml_internal_utils_StringToStringTable_h_
#define _com_sun_org_apache_xml_internal_utils_StringToStringTable_h_
//$ class com.sun.org.apache.xml.internal.utils.StringToStringTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export StringToStringTable : public ::java::lang::Object {
	$class(StringToStringTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringToStringTable();
	void init$();
	void init$(int32_t blocksize);
	bool contains($String* key);
	bool containsValue($String* val);
	$String* elementAt(int32_t i);
	$String* get($String* key);
	$String* getByValue($String* val);
	$String* getIgnoreCase($String* key);
	int32_t getLength();
	void put($String* key, $String* value);
	void remove($String* key);
	int32_t m_blocksize = 0;
	$StringArray* m_map = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_utils_StringToStringTable_h_