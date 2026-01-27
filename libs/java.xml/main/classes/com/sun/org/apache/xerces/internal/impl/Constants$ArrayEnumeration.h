#ifndef _com_sun_org_apache_xerces_internal_impl_Constants$ArrayEnumeration_h_
#define _com_sun_org_apache_xerces_internal_impl_Constants$ArrayEnumeration_h_
//$ class com.sun.org.apache.xerces.internal.impl.Constants$ArrayEnumeration
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class Constants$ArrayEnumeration : public ::java::util::Enumeration {
	$class(Constants$ArrayEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Constants$ArrayEnumeration();
	void init$($ObjectArray* array);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	$ObjectArray* array = nullptr;
	int32_t index = 0;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_Constants$ArrayEnumeration_h_