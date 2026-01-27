#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$XSNamedMapEntry_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$XSNamedMapEntry_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$XSNamedMapEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

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
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
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

class XSNamedMapImpl$XSNamedMapEntry : public ::java::util::Map$Entry {
	$class(XSNamedMapImpl$XSNamedMapEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	XSNamedMapImpl$XSNamedMapEntry();
	using ::java::util::Map$Entry::equals;
	void init$(::javax::xml::namespace$::QName* key, ::com::sun::org::apache::xerces::internal::xs::XSObject* value);
	bool equals(::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry* o);
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	::com::sun::org::apache::xerces::internal::xs::XSObject* setValue(::com::sun::org::apache::xerces::internal::xs::XSObject* value);
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	::javax::xml::namespace$::QName* key = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObject* value = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$XSNamedMapEntry_h_