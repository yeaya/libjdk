#ifndef _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl
//$ extends org.w3c.dom.DOMImplementation
//$ implements org.w3c.dom.ls.DOMImplementationLS

#include <java/lang/Array.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/ls/DOMImplementationLS.h>

#pragma push_macro("SIZE")
#undef SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
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
							class RevalidationHandler;
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
								class XMLDTDLoader;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class DocumentType;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
				class LSOutput;
				class LSParser;
				class LSSerializer;
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
						namespace dom {

class CoreDOMImplementationImpl : public ::org::w3c::dom::DOMImplementation, public ::org::w3c::dom::ls::DOMImplementationLS {
	$class(CoreDOMImplementationImpl, 0, ::org::w3c::dom::DOMImplementation, ::org::w3c::dom::ls::DOMImplementationLS)
public:
	CoreDOMImplementationImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t assignDocTypeNumber();
	virtual int32_t assignDocumentNumber();
	void checkQName($String* qname);
	virtual ::org::w3c::dom::Document* createDocument($String* namespaceURI, $String* qualifiedName, ::org::w3c::dom::DocumentType* doctype) override;
	virtual ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* createDocument(::org::w3c::dom::DocumentType* doctype);
	virtual ::org::w3c::dom::DocumentType* createDocumentType($String* qualifiedName, $String* publicID, $String* systemID) override;
	virtual ::org::w3c::dom::ls::LSInput* createLSInput() override;
	virtual ::org::w3c::dom::ls::LSOutput* createLSOutput() override;
	virtual ::org::w3c::dom::ls::LSParser* createLSParser(int16_t mode, $String* schemaType) override;
	virtual ::org::w3c::dom::ls::LSSerializer* createLSSerializer() override;
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader* getDTDLoader($String* xmlVersion);
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler* getValidator($String* schemaType, $String* xmlVersion);
	virtual bool hasFeature($String* feature, $String* version) override;
	void releaseDTDLoader($String* xmlVersion, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader* loader);
	virtual void releaseValidator($String* schemaType, $String* xmlVersion, ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler* validator);
	virtual $String* toString() override;
	static const int32_t SIZE = 2;
	$Array<::java::lang::ref::SoftReference>* schemaValidators = nullptr;
	$Array<::java::lang::ref::SoftReference>* xml10DTDValidators = nullptr;
	$Array<::java::lang::ref::SoftReference>* xml11DTDValidators = nullptr;
	int32_t freeSchemaValidatorIndex = 0;
	int32_t freeXML10DTDValidatorIndex = 0;
	int32_t freeXML11DTDValidatorIndex = 0;
	int32_t schemaValidatorsCurrentSize = 0;
	int32_t xml10DTDValidatorsCurrentSize = 0;
	int32_t xml11DTDValidatorsCurrentSize = 0;
	$Array<::java::lang::ref::SoftReference>* xml10DTDLoaders = nullptr;
	$Array<::java::lang::ref::SoftReference>* xml11DTDLoaders = nullptr;
	int32_t freeXML10DTDLoaderIndex = 0;
	int32_t freeXML11DTDLoaderIndex = 0;
	int32_t xml10DTDLoaderCurrentSize = 0;
	int32_t xml11DTDLoaderCurrentSize = 0;
	int32_t docAndDoctypeCounter = 0;
	static ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl* singleton;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SIZE")

#endif // _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl_h_