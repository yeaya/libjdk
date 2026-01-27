#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMap4Types_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMap4Types_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMap4Types
//$ extends com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolHash;
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
							class XSObject;
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
								namespace util {

class XSNamedMap4Types : public ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl {
	$class(XSNamedMap4Types, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl)
public:
	XSNamedMap4Types();
	void init$($String* namespace$, ::com::sun::org::apache::xerces::internal::util::SymbolHash* map, int16_t type);
	void init$($StringArray* namespaces, $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>* maps, int32_t num, int16_t type);
	virtual int32_t getLength() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* item(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* itemByName($String* namespace$, $String* localName) override;
	using ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl::remove;
	int16_t fType = 0;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMap4Types_h_