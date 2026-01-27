#ifndef _com_sun_org_apache_xml_internal_utils_ObjectVector_h_
#define _com_sun_org_apache_xml_internal_utils_ObjectVector_h_
//$ class com.sun.org.apache.xml.internal.utils.ObjectVector
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

class $import ObjectVector : public ::java::lang::Cloneable {
	$class(ObjectVector, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	ObjectVector();
	void init$();
	void init$(int32_t blocksize);
	void init$(int32_t blocksize, int32_t increaseSize);
	void init$(::com::sun::org::apache::xml::internal::utils::ObjectVector* v);
	void addElement(Object$* value);
	void addElements(Object$* value, int32_t numberOfElements);
	void addElements(int32_t numberOfElements);
	virtual $Object* clone() override;
	bool contains(Object$* s);
	$Object* elementAt(int32_t i);
	int32_t indexOf(Object$* elem, int32_t index);
	int32_t indexOf(Object$* elem);
	void insertElementAt(Object$* value, int32_t at);
	int32_t lastIndexOf(Object$* elem);
	void removeAllElements();
	bool removeElement(Object$* s);
	void removeElementAt(int32_t i);
	void setElementAt(Object$* value, int32_t index);
	void setSize(int32_t sz);
	void setToSize(int32_t size);
	int32_t size();
	int32_t m_blocksize = 0;
	$ObjectArray* m_map = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_utils_ObjectVector_h_