#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_SmallContainer_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_SmallContainer_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.SmallContainer
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.Container

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {
									class OneAttr;
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
						namespace impl {
							namespace xs {
								namespace traversers {

class SmallContainer : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container {
	$class(SmallContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container)
public:
	SmallContainer();
	void init$(int32_t size);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* get($String* key) override;
	virtual void put($String* key, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* value) override;
	$StringArray* keys = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_SmallContainer_h_