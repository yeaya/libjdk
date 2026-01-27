#ifndef _com_sun_org_apache_xerces_internal_impl_XML11EntityScanner_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11EntityScanner_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11EntityScanner
//$ extends com.sun.org.apache.xerces.internal.impl.XMLEntityScanner

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLScanner$NameType;
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
						namespace util {
							class XMLStringBuffer;
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
						namespace xni {
							class QName;
							class XMLString;
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

class XML11EntityScanner : public ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner {
	$class(XML11EntityScanner, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner)
public:
	XML11EntityScanner();
	void init$();
	virtual int32_t peekChar() override;
	virtual int32_t scanChar(::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt) override;
	virtual int32_t scanContent(::com::sun::org::apache::xerces::internal::xni::XMLString* content) override;
	virtual bool scanData($String* delimiter, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buffer, int32_t chunkLimit) override;
	virtual int32_t scanLiteral(int32_t quote, ::com::sun::org::apache::xerces::internal::xni::XMLString* content, bool isNSURI) override;
	virtual $String* scanNCName();
	virtual $String* scanName(::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt) override;
	virtual $String* scanNmtoken() override;
	virtual bool scanQName(::com::sun::org::apache::xerces::internal::xni::QName* qname, ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt) override;
	virtual bool skipChar(int32_t c, ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt) override;
	virtual bool skipSpaces() override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner::skipString;
	virtual bool skipString($String* s) override;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11EntityScanner_h_