#ifndef _com_sun_org_apache_xml_internal_utils_ObjectStack_h_
#define _com_sun_org_apache_xml_internal_utils_ObjectStack_h_
//$ class com.sun.org.apache.xml.internal.utils.ObjectStack
//$ extends com.sun.org.apache.xml.internal.utils.ObjectVector

#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import ObjectStack : public ::com::sun::org::apache::xml::internal::utils::ObjectVector {
	$class(ObjectStack, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::utils::ObjectVector)
public:
	ObjectStack();
	void init$();
	void init$(int32_t blocksize);
	void init$(::com::sun::org::apache::xml::internal::utils::ObjectStack* v);
	virtual $Object* clone() override;
	virtual bool empty();
	virtual $Object* peek();
	virtual $Object* peek(int32_t n);
	virtual $Object* pop();
	virtual $Object* push(Object$* i);
	virtual void quickPop(int32_t n);
	virtual int32_t search(Object$* o);
	virtual void setTop(Object$* val);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_ObjectStack_h_