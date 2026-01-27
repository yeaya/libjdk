#ifndef _com_sun_org_apache_xerces_internal_impl_XML11DTDScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11DTDScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11DTDScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDTDScannerImpl

#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLEntityManager;
							class XMLErrorReporter;
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
							class SymbolTable;
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

class XML11DTDScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl {
	$class(XML11DTDScannerImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl)
public:
	XML11DTDScannerImpl();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager);
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
	using ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl::scanPIData;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl::scanComment;
	virtual bool scanPubidLiteral(::com::sun::org::apache::xerces::internal::xni::XMLString* literal) override;
	virtual bool versionSupported($String* version) override;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11DTDScannerImpl_h_