#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler$OneSubGroup_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler$OneSubGroup_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler$OneSubGroup
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
								class XSElementDecl;
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
						namespace impl {
							namespace xs {

class SubstitutionGroupHandler$OneSubGroup : public ::java::lang::Object {
	$class(SubstitutionGroupHandler$OneSubGroup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SubstitutionGroupHandler$OneSubGroup();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* sub, int16_t dMethod, int16_t bMethod);
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* sub = nullptr;
	int16_t dMethod = 0;
	int16_t bMethod = 0;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler$OneSubGroup_h_