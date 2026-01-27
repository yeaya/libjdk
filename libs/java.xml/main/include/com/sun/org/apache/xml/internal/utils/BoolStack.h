#ifndef _com_sun_org_apache_xml_internal_utils_BoolStack_h_
#define _com_sun_org_apache_xml_internal_utils_BoolStack_h_
//$ class com.sun.org.apache.xml.internal.utils.BoolStack
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

class $import BoolStack : public ::java::lang::Cloneable {
	$class(BoolStack, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	BoolStack();
	void init$();
	void init$(int32_t size);
	void clear();
	virtual $Object* clone() override;
	void grow();
	bool isEmpty();
	bool peek();
	bool peekOrFalse();
	bool peekOrTrue();
	bool pop();
	bool popAndTop();
	bool push(bool val);
	void setTop(bool b);
	int32_t size();
	$booleans* m_values = nullptr;
	int32_t m_allocatedSize = 0;
	int32_t m_index = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_BoolStack_h_