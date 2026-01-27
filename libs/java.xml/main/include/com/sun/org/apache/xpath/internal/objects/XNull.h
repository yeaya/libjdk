#ifndef _com_sun_org_apache_xpath_internal_objects_XNull_h_
#define _com_sun_org_apache_xpath_internal_objects_XNull_h_
//$ class com.sun.org.apache.xpath.internal.objects.XNull
//$ extends com.sun.org.apache.xpath.internal.objects.XNodeSet

#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPathContext;
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $import XNull : public ::com::sun::org::apache::xpath::internal::objects::XNodeSet {
	$class(XNull, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XNodeSet)
public:
	XNull();
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::error;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::equals;
	void init$();
	virtual bool bool$() override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::num;
	virtual double num() override;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::rtf;
	virtual int32_t rtf(::com::sun::org::apache::xpath::internal::XPathContext* support) override;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::xstr;
	static const int64_t serialVersionUID = (int64_t)0xA10D74E9C8E943A3;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XNull_h_