#ifndef _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser$Abort_h_
#define _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser$Abort_h_
//$ class com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

class AbstractDOMParser$Abort : public ::java::lang::RuntimeException {
	$class(AbstractDOMParser$Abort, 0, ::java::lang::RuntimeException)
public:
	AbstractDOMParser$Abort();
	void init$();
	virtual $Throwable* fillInStackTrace() override;
	static const int64_t serialVersionUID = (int64_t)0x176C71B7E417BE2A;
	static ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser$Abort* INSTANCE;
	AbstractDOMParser$Abort(const AbstractDOMParser$Abort& e);
	virtual void throw$() override;
	inline AbstractDOMParser$Abort* operator ->() {
		return (AbstractDOMParser$Abort*)throwing$;
	}
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INSTANCE")

#endif // _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser$Abort_h_