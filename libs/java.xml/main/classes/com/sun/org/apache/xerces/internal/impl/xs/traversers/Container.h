#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_Container_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_Container_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.Container
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("THRESHOLD")
#undef THRESHOLD

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

class Container : public ::java::lang::Object {
	$class(Container, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Container();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* get($String* key) {return nullptr;}
	static ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container* getContainer(int32_t size);
	virtual void put($String* key, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr* value) {}
	static const int32_t THRESHOLD = 5;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr>* values = nullptr;
	int32_t pos = 0;
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

#pragma pop_macro("THRESHOLD")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_Container_h_