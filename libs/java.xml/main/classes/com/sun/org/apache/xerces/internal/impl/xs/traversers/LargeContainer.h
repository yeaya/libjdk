#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_LargeContainer_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_LargeContainer_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.LargeContainer
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.Container

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>

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
namespace java {
	namespace util {
		class Map;
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

class LargeContainer : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container {
	$class(LargeContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container)
public:
	LargeContainer();
	void init$(int32_t size);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* get($String* key) override;
	virtual void put($String* key, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* value) override;
	::java::util::Map* items = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_LargeContainer_h_