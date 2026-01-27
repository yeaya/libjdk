#ifndef _com_sun_org_apache_xml_internal_utils_StringVector_h_
#define _com_sun_org_apache_xml_internal_utils_StringVector_h_
//$ class com.sun.org.apache.xml.internal.utils.StringVector
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export StringVector : public ::java::io::Serializable {
	$class(StringVector, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	StringVector();
	void init$();
	void init$(int32_t blocksize);
	void addElement($String* value);
	bool contains($String* s);
	bool containsIgnoreCase($String* s);
	$String* elementAt(int32_t i);
	virtual int32_t getLength();
	$String* peek();
	$String* pop();
	void push($String* s);
	int32_t size();
	static const int64_t serialVersionUID = (int64_t)0x4552A3BDBDA168C4;
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

#endif // _com_sun_org_apache_xml_internal_utils_StringVector_h_