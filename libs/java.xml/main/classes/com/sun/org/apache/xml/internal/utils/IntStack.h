#ifndef _com_sun_org_apache_xml_internal_utils_IntStack_h_
#define _com_sun_org_apache_xml_internal_utils_IntStack_h_
//$ class com.sun.org.apache.xml.internal.utils.IntStack
//$ extends com.sun.org.apache.xml.internal.utils.IntVector

#include <com/sun/org/apache/xml/internal/utils/IntVector.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export IntStack : public ::com::sun::org::apache::xml::internal::utils::IntVector {
	$class(IntStack, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::utils::IntVector)
public:
	IntStack();
	void init$();
	void init$(int32_t blocksize);
	void init$(::com::sun::org::apache::xml::internal::utils::IntStack* v);
	virtual $Object* clone() override;
	virtual bool empty();
	int32_t peek();
	virtual int32_t peek(int32_t n);
	int32_t pop();
	virtual int32_t push(int32_t i);
	void quickPop(int32_t n);
	virtual int32_t search(int32_t o);
	virtual void setTop(int32_t val);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_IntStack_h_