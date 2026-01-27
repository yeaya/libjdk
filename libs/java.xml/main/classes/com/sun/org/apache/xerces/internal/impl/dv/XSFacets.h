#ifndef _com_sun_org_apache_xerces_internal_impl_dv_XSFacets_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_XSFacets_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.XSFacets
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSObjectListImpl;
								}
							}
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
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSAnnotation;
							class XSObjectList;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

class XSFacets : public ::java::lang::Object {
	$class(XSFacets, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSFacets();
	void init$();
	virtual void reset();
	int32_t length = 0;
	int32_t minLength = 0;
	int32_t maxLength = 0;
	int16_t whiteSpace = 0;
	int32_t totalDigits = 0;
	int32_t fractionDigits = 0;
	$String* pattern = nullptr;
	::java::util::List* enumeration = nullptr;
	::java::util::List* enumNSDecls = nullptr;
	$String* maxInclusive = nullptr;
	$String* maxExclusive = nullptr;
	$String* minInclusive = nullptr;
	$String* minExclusive = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* lengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minLengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxLengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* whiteSpaceAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* totalDigitsAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* fractionDigitsAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* patternAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* enumAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxInclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxExclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minInclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minExclusiveAnnotation = nullptr;
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_XSFacets_h_