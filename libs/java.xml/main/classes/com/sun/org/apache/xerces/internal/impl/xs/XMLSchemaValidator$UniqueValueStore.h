#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$UniqueValueStore_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$UniqueValueStore_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$UniqueValueStore
//$ extends com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XMLSchemaValidator;
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
								namespace identity {
									class UniqueOrKey;
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

class XMLSchemaValidator$UniqueValueStore : public ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase {
	$class(XMLSchemaValidator$UniqueValueStore, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase)
public:
	XMLSchemaValidator$UniqueValueStore();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0, ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey* unique);
	virtual void checkDuplicateValues() override;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0 = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$UniqueValueStore_h_