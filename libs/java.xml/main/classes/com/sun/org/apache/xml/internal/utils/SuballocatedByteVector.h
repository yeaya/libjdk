#ifndef _com_sun_org_apache_xml_internal_utils_SuballocatedByteVector_h_
#define _com_sun_org_apache_xml_internal_utils_SuballocatedByteVector_h_
//$ class com.sun.org.apache.xml.internal.utils.SuballocatedByteVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export SuballocatedByteVector : public ::java::lang::Object {
	$class(SuballocatedByteVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SuballocatedByteVector();
	void init$();
	void init$(int32_t blocksize);
	void init$(int32_t blocksize, int32_t increaseSize);
	virtual void addElement(int8_t value);
	void addElements(int8_t value, int32_t numberOfElements);
	void addElements(int32_t numberOfElements);
	bool contains(int8_t s);
	virtual int8_t elementAt(int32_t i);
	virtual int32_t indexOf(int8_t elem, int32_t index);
	virtual int32_t indexOf(int8_t elem);
	void insertElementAt(int8_t value, int32_t at);
	int32_t lastIndexOf(int8_t elem);
	virtual void removeAllElements();
	bool removeElement(int8_t s);
	void removeElementAt(int32_t at);
	virtual void setElementAt(int8_t value, int32_t at);
	void setSize(int32_t sz);
	virtual int32_t size();
	int32_t m_blocksize = 0;
	int32_t m_numblocks = 0;
	$Array<int8_t, 2>* m_map = nullptr;
	int32_t m_firstFree = 0;
	$bytes* m_map0 = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_SuballocatedByteVector_h_