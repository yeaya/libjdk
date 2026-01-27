#ifndef _com_sun_org_apache_xerces_internal_dom_PSVIElementNSImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_PSVIElementNSImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.PSVIElementNSImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ElementNSImpl
//$ implements com.sun.org.apache.xerces.internal.xs.ElementPSVI

#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>

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
							namespace dv {
								class ValidatedInfo;
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
							class ItemPSVI;
							class ShortList;
							class StringList;
							class XSElementDeclaration;
							class XSModel;
							class XSNotationDeclaration;
							class XSSimpleTypeDefinition;
							class XSTypeDefinition;
							class XSValue;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class PSVIElementNSImpl : public ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl, public ::com::sun::org::apache::xerces::internal::xs::ElementPSVI {
	$class(PSVIElementNSImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl, ::com::sun::org::apache::xerces::internal::xs::ElementPSVI)
public:
	PSVIElementNSImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName);
	virtual ::com::sun::org::apache::xerces::internal::xs::ItemPSVI* constant() override;
	virtual $Object* getActualNormalizedValue() override;
	virtual int16_t getActualNormalizedValueType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorCodes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorMessages() override;
	virtual bool getIsSchemaSpecified() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() override;
	virtual bool getNil() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotation() override;
	virtual $String* getSchemaDefault() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* getSchemaInformation() override;
	virtual $String* getSchemaNormalizedValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getSchemaValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() override;
	virtual int16_t getValidationAttempted() override;
	virtual $String* getValidationContext() override;
	virtual int16_t getValidity() override;
	virtual bool isConstant() override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl::rename;
	virtual void setPSVI(::com::sun::org::apache::xerces::internal::xs::ElementPSVI* elem);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x5E957BB41ECA45C4;
	::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* fDeclaration = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fTypeDecl = nullptr;
	bool fNil = false;
	bool fSpecified = false;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fValue = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* fNotation = nullptr;
	int16_t fValidationAttempted = 0;
	int16_t fValidity = 0;
	::com::sun::org::apache::xerces::internal::xs::StringList* fErrorCodes = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* fErrorMessages = nullptr;
	$String* fValidationContext = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSModel* fSchemaInformation = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_PSVIElementNSImpl_h_