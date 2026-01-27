#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints$1_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSConstraints$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSParticleDecl;
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

class XSConstraints$1 : public ::java::util::Comparator {
	$class(XSConstraints$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	XSConstraints$1();
	void init$();
	virtual int32_t compare(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* o1, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints$1_h_