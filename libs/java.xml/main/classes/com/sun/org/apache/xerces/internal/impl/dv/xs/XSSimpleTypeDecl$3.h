#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$3_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$3_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$3
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {
									class XSSimpleTypeDecl;
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
							namespace dv {
								namespace xs {

class XSSimpleTypeDecl$3 : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList {
	$class(XSSimpleTypeDecl$3, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList)
public:
	XSSimpleTypeDecl$3();
	using ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList::addAll;
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* this$0);
	virtual bool contains(Object$* item) override;
	virtual int32_t getLength() override;
	virtual $Object* item(int32_t index) override;
	using ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList::remove;
	using ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList::toArray;
	::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* this$0 = nullptr;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$3_h_