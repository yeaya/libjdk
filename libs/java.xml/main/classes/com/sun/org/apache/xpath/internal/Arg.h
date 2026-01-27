#ifndef _com_sun_org_apache_xpath_internal_Arg_h_
#define _com_sun_org_apache_xpath_internal_Arg_h_
//$ class com.sun.org.apache.xpath.internal.Arg
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class QName;
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

class $export Arg : public ::java::lang::Object {
	$class(Arg, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Arg();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::utils::QName* qname, $String* expression, bool isFromWithParam);
	void init$(::com::sun::org::apache::xml::internal::utils::QName* qname, ::com::sun::org::apache::xpath::internal::objects::XObject* val);
	void init$(::com::sun::org::apache::xml::internal::utils::QName* qname, ::com::sun::org::apache::xpath::internal::objects::XObject* val, bool isFromWithParam);
	virtual void detach();
	virtual bool equals(Object$* obj) override;
	virtual $String* getExpression();
	::com::sun::org::apache::xml::internal::utils::QName* getQName();
	::com::sun::org::apache::xpath::internal::objects::XObject* getVal();
	virtual int32_t hashCode() override;
	virtual bool isFromWithParam();
	virtual bool isVisible();
	virtual void setExpression($String* expr);
	virtual void setIsVisible(bool b);
	void setQName(::com::sun::org::apache::xml::internal::utils::QName* name);
	void setVal(::com::sun::org::apache::xpath::internal::objects::XObject* val);
	::com::sun::org::apache::xml::internal::utils::QName* m_qname = nullptr;
	::com::sun::org::apache::xpath::internal::objects::XObject* m_val = nullptr;
	$String* m_expression = nullptr;
	bool m_isFromWithParam = false;
	bool m_isVisible = false;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_Arg_h_