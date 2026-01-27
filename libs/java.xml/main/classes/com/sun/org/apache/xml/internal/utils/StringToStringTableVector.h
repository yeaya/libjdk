#ifndef _com_sun_org_apache_xml_internal_utils_StringToStringTableVector_h_
#define _com_sun_org_apache_xml_internal_utils_StringToStringTableVector_h_
//$ class com.sun.org.apache.xml.internal.utils.StringToStringTableVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class StringToStringTable;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export StringToStringTableVector : public ::java::lang::Object {
	$class(StringToStringTableVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringToStringTableVector();
	void init$();
	void init$(int32_t blocksize);
	void addElement(::com::sun::org::apache::xml::internal::utils::StringToStringTable* value);
	bool contains(::com::sun::org::apache::xml::internal::utils::StringToStringTable* s);
	bool containsKey($String* key);
	::com::sun::org::apache::xml::internal::utils::StringToStringTable* elementAt(int32_t i);
	$String* get($String* key);
	int32_t getLength();
	void removeLastElem();
	int32_t size();
	int32_t m_blocksize = 0;
	$Array<::com::sun::org::apache::xml::internal::utils::StringToStringTable>* m_map = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_utils_StringToStringTableVector_h_