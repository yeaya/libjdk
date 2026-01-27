#ifndef _com_sun_org_apache_xpath_internal_objects_XNumber_h_
#define _com_sun_org_apache_xpath_internal_objects_XNumber_h_
//$ class com.sun.org.apache.xpath.internal.objects.XNumber
//$ extends com.sun.org.apache.xpath.internal.objects.XObject

#include <com/sun/org/apache/xpath/internal/objects/XObject.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionOwner;
						class XPathContext;
						class XPathVisitor;
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Number;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $import XNumber : public ::com::sun::org::apache::xpath::internal::objects::XObject {
	$class(XNumber, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XObject)
public:
	XNumber();
	using ::com::sun::org::apache::xpath::internal::objects::XObject::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::error;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::equals;
	void init$(double d);
	void init$(::java::lang::Number* num);
	virtual bool bool$() override;
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	virtual bool isStableNumber() override;
	virtual double num() override;
	virtual double num(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual $Object* object() override;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::xstr;
	static $String* zeros(int32_t n);
	static const int64_t serialVersionUID = (int64_t)0xDA3F31F7C8700E5F;
	double m_val = 0.0;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XNumber_h_