#ifndef _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XML11DocumentScannerImpl

#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
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

class XML11NSDocumentScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl {
	$class(XML11NSDocumentScannerImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl)
public:
	XML11NSDocumentScannerImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* createContentDriver() override;
	virtual int32_t next() override;
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::reset;
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::refresh;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::scanAttribute;
	virtual void scanAttribute(::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* attributes);
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::scanAttributeValue;
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::scanComment;
	virtual int32_t scanEndElement() override;
	virtual bool scanStartElement() override;
	virtual bool scanStartElementAfterName();
	virtual void scanStartElementName();
	using ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl::scanXMLDeclOrTextDecl;
	virtual void setDTDValidator(::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter* validator);
	bool fBindNamespaces = false;
	bool fPerformValidation = false;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter* fDTDValidator = nullptr;
	bool fSawSpace = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl_h_