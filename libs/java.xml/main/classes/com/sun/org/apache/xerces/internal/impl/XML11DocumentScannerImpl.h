#ifndef _com_sun_org_apache_xerces_internal_impl_XML11DocumentScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11DocumentScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11DocumentScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>

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

class XML11DocumentScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl {
	$class(XML11DocumentScannerImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl)
public:
	XML11DocumentScannerImpl();
	void init$();
	virtual $String* getVersionNotSupportedKey();
	virtual bool isInvalid(int32_t value) override;
	virtual bool isInvalidLiteral(int32_t value) override;
	virtual int32_t isUnchangedByNormalization(::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	virtual bool isValidNCName(int32_t value) override;
	virtual bool isValidNameChar(int32_t value) override;
	virtual bool isValidNameStartChar(int32_t value) override;
	virtual bool isValidNameStartHighSurrogate(int32_t value) override;
	virtual void normalizeWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* value) override;
	virtual void normalizeWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* value, int32_t fromIndex);
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::reset;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::refresh;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanAttributeValue;
	virtual bool scanAttributeValue(::com::sun::org::apache::xerces::internal::xni::XMLString* value, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedValue, $String* atName, bool checkEntities, $String* eleName, bool isNSURI);
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanComment;
	virtual int32_t scanContent(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* content) override;
	virtual bool scanPubidLiteral(::com::sun::org::apache::xerces::internal::xni::XMLString* literal) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanXMLDeclOrTextDecl;
	virtual bool versionSupported($String* version) override;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer2 = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer3 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11DocumentScannerImpl_h_