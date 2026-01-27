#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAnnotationInfo_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAnnotationInfo_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSAnnotationInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class XSAnnotationInfo : public ::java::lang::Object {
	$class(XSAnnotationInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSAnnotationInfo();
	void init$($String* annotation, int32_t line, int32_t column, int32_t charOffset);
	void init$($String* annotation, ::org::w3c::dom::Element* annotationDecl);
	$String* fAnnotation = nullptr;
	int32_t fLine = 0;
	int32_t fColumn = 0;
	int32_t fCharOffset = 0;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo* next = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAnnotationInfo_h_