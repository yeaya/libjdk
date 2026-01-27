#ifndef _com_sun_org_apache_xerces_internal_dom_RangeExceptionImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_RangeExceptionImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.RangeExceptionImpl
//$ extends org.w3c.dom.ranges.RangeException

#include <org/w3c/dom/ranges/RangeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class RangeExceptionImpl : public ::org::w3c::dom::ranges::RangeException {
	$class(RangeExceptionImpl, $NO_CLASS_INIT, ::org::w3c::dom::ranges::RangeException)
public:
	RangeExceptionImpl();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x824B55207F057A68;
	RangeExceptionImpl(const RangeExceptionImpl& e);
	virtual void throw$() override;
	inline RangeExceptionImpl* operator ->() {
		return (RangeExceptionImpl*)throwing$;
	}
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_RangeExceptionImpl_h_