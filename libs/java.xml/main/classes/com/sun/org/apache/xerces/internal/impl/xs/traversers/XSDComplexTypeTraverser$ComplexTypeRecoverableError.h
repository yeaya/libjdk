#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser$ComplexTypeRecoverableError_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser$ComplexTypeRecoverableError_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class XSDComplexTypeTraverser$ComplexTypeRecoverableError : public ::java::lang::Exception {
	$class(XSDComplexTypeTraverser$ComplexTypeRecoverableError, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XSDComplexTypeTraverser$ComplexTypeRecoverableError();
	void init$();
	void init$($String* msgKey, $ObjectArray* args, ::org::w3c::dom::Element* e);
	static const int64_t serialVersionUID = (int64_t)0x5E6826D0091DB9DF;
	$ObjectArray* errorSubstText = nullptr;
	::org::w3c::dom::Element* errorElem = nullptr;
	XSDComplexTypeTraverser$ComplexTypeRecoverableError(const XSDComplexTypeTraverser$ComplexTypeRecoverableError& e);
	virtual void throw$() override;
	inline XSDComplexTypeTraverser$ComplexTypeRecoverableError* operator ->() {
		return (XSDComplexTypeTraverser$ComplexTypeRecoverableError*)throwing$;
	}
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser$ComplexTypeRecoverableError_h_