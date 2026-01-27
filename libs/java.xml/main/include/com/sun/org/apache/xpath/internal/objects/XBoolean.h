#ifndef _com_sun_org_apache_xpath_internal_objects_XBoolean_h_
#define _com_sun_org_apache_xpath_internal_objects_XBoolean_h_
//$ class com.sun.org.apache.xpath.internal.objects.XBoolean
//$ extends com.sun.org.apache.xpath.internal.objects.XObject

#include <com/sun/org/apache/xpath/internal/objects/XObject.h>

#pragma push_macro("S_FALSE")
#undef S_FALSE
#pragma push_macro("S_TRUE")
#undef S_TRUE

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $import XBoolean : public ::com::sun::org::apache::xpath::internal::objects::XObject {
	$class(XBoolean, 0, ::com::sun::org::apache::xpath::internal::objects::XObject)
public:
	XBoolean();
	using ::com::sun::org::apache::xpath::internal::objects::XObject::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::error;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::equals;
	void init$(bool b);
	void init$(::java::lang::Boolean* b);
	virtual bool bool$() override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::num;
	virtual double num() override;
	virtual $Object* object() override;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::xstr;
	static const int64_t serialVersionUID = (int64_t)0xD6DA71178379456F;
	static ::com::sun::org::apache::xpath::internal::objects::XBoolean* S_TRUE;
	static ::com::sun::org::apache::xpath::internal::objects::XBoolean* S_FALSE;
	bool m_val = false;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("S_FALSE")
#pragma pop_macro("S_TRUE")

#endif // _com_sun_org_apache_xpath_internal_objects_XBoolean_h_