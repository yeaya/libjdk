#ifndef _com_sun_org_apache_xerces_internal_dom_PSVIAttrNSImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_PSVIAttrNSImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.PSVIAttrNSImpl
//$ extends com.sun.org.apache.xerces.internal.dom.AttrNSImpl
//$ implements com.sun.org.apache.xerces.internal.xs.AttributePSVI

#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>

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
							class XSAttributeDeclaration;
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

class PSVIAttrNSImpl : public ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl, public ::com::sun::org::apache::xerces::internal::xs::AttributePSVI {
	$class(PSVIAttrNSImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl, ::com::sun::org::apache::xerces::internal::xs::AttributePSVI)
public:
	PSVIAttrNSImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName);
	virtual ::com::sun::org::apache::xerces::internal::xs::ItemPSVI* constant() override;
	virtual $Object* getActualNormalizedValue() override;
	virtual int16_t getActualNormalizedValueType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorCodes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorMessages() override;
	virtual bool getIsSchemaSpecified() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() override;
	virtual $String* getSchemaDefault() override;
	virtual $String* getSchemaNormalizedValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getSchemaValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() override;
	virtual int16_t getValidationAttempted() override;
	virtual $String* getValidationContext() override;
	virtual int16_t getValidity() override;
	virtual bool isConstant() override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl::rename;
	virtual void setPSVI(::com::sun::org::apache::xerces::internal::xs::AttributePSVI* attr);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0xD30307D40E5F94F7;
	::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* fDeclaration = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fTypeDecl = nullptr;
	bool fSpecified = false;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fValue = nullptr;
	int16_t fValidationAttempted = 0;
	int16_t fValidity = 0;
	::com::sun::org::apache::xerces::internal::xs::StringList* fErrorCodes = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* fErrorMessages = nullptr;
	$String* fValidationContext = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_PSVIAttrNSImpl_h_