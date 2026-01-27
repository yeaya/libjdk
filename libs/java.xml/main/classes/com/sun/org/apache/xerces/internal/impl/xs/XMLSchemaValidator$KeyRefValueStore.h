#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$KeyRefValueStore_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$KeyRefValueStore_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyRefValueStore
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
								class XMLSchemaValidator$KeyValueStore;
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
									class KeyRef;
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

class XMLSchemaValidator$KeyRefValueStore : public ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase {
	$class(XMLSchemaValidator$KeyRefValueStore, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase)
public:
	XMLSchemaValidator$KeyRefValueStore();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0, ::com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef* keyRef, ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$KeyValueStore* keyValueStore);
	virtual void endDocument() override;
	virtual void endDocumentFragment() override;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase* fKeyValueStore = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$KeyRefValueStore_h_