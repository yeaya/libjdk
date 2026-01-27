#ifndef _com_sun_org_apache_xml_internal_utils_IntVector_h_
#define _com_sun_org_apache_xml_internal_utils_IntVector_h_
//$ class com.sun.org.apache.xml.internal.utils.IntVector
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import IntVector : public ::java::lang::Cloneable {
	$class(IntVector, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	IntVector();
	void init$();
	void init$(int32_t blocksize);
	void init$(int32_t blocksize, int32_t increaseSize);
	void init$(::com::sun::org::apache::xml::internal::utils::IntVector* v);
	void addElement(int32_t value);
	void addElements(int32_t value, int32_t numberOfElements);
	void addElements(int32_t numberOfElements);
	virtual $Object* clone() override;
	bool contains(int32_t s);
	int32_t elementAt(int32_t i);
	int32_t indexOf(int32_t elem, int32_t index);
	int32_t indexOf(int32_t elem);
	void insertElementAt(int32_t value, int32_t at);
	int32_t lastIndexOf(int32_t elem);
	void removeAllElements();
	bool removeElement(int32_t s);
	void removeElementAt(int32_t i);
	void setElementAt(int32_t value, int32_t index);
	void setSize(int32_t sz);
	int32_t size();
	int32_t m_blocksize = 0;
	$ints* m_map = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_utils_IntVector_h_