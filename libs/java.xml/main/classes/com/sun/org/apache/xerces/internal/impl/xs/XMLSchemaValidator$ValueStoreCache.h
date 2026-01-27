#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreCache_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreCache_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreCache
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
								class XMLSchemaValidator;
								class XMLSchemaValidator$LocalIDKey;
								class XMLSchemaValidator$ValueStoreBase;
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
								namespace identity {
									class FieldActivator;
									class IdentityConstraint;
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
		class List;
		class Map;
		class Stack;
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

class XMLSchemaValidator$ValueStoreCache : public ::java::lang::Object {
	$class(XMLSchemaValidator$ValueStoreCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaValidator$ValueStoreCache();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0);
	virtual void endDocument();
	virtual void endElement();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase* getGlobalValueStoreFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* id);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase* getValueStoreFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* id, int32_t initialDepth);
	virtual void initValueStoresFor(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* eDecl, ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator* activator);
	virtual void startDocument();
	virtual void startElement();
	virtual $String* toString() override;
	virtual void transplant(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* id, int32_t initialDepth);
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$LocalIDKey* fLocalId = nullptr;
	::java::util::List* fValueStores = nullptr;
	::java::util::Map* fIdentityConstraint2ValueStoreMap = nullptr;
	::java::util::Stack* fGlobalMapStack = nullptr;
	::java::util::Map* fGlobalIDConstraintMap = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreCache_h_