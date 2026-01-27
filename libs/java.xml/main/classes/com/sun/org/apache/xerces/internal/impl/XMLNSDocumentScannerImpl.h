#ifndef _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLDocumentFragmentScannerImpl$Driver;
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
							namespace dtd {
								class XMLDTDValidatorFilter;
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
						namespace util {
							class XMLAttributesImpl;
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
							namespace parser {
								class XMLComponentManager;
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

class XMLNSDocumentScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl {
	$class(XMLNSDocumentScannerImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl)
public:
	XMLNSDocumentScannerImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* createContentDriver() override;
	virtual int32_t next() override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::refresh;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::reset;
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanAttribute;
	virtual void scanAttribute(::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* attributes);
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanComment;
	virtual bool scanStartElement() override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl::scanXMLDeclOrTextDecl;
	virtual void setDTDValidator(::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter* dtd);
	bool fBindNamespaces = false;
	bool fPerformValidation = false;
	bool fNotAddNSDeclAsAttribute = false;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter* fDTDValidator = nullptr;
	bool fXmlnsDeclared = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl_h_