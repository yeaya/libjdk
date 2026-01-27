#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_ValueStore_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_ValueStore_h_
//$ interface com.sun.org.apache.xerces.internal.impl.xs.identity.ValueStore
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {
									class Field;
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
						namespace xs {
							class ShortList;
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

class ValueStore : public ::java::lang::Object {
	$interface(ValueStore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addValue(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* field, bool mayMatch, Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType) {}
	virtual void reportError($String* key, $ObjectArray* args) {}
};

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_ValueStore_h_