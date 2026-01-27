#ifndef _com_sun_org_apache_xml_internal_utils_QName_h_
#define _com_sun_org_apache_xml_internal_utils_QName_h_
//$ class com.sun.org.apache.xml.internal.utils.QName
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("S_XMLNAMESPACEURI")
#undef S_XMLNAMESPACEURI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Stack;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export QName : public ::java::io::Serializable {
	$class(QName, 0, ::java::io::Serializable)
public:
	QName();
	void init$();
	void init$($String* namespaceURI, $String* localName);
	void init$($String* namespaceURI, $String* localName, bool validate);
	void init$($String* namespaceURI, $String* prefix, $String* localName);
	void init$($String* namespaceURI, $String* prefix, $String* localName, bool validate);
	void init$($String* localName);
	void init$($String* localName, bool validate);
	void init$($String* qname, ::java::util::Stack* namespaces);
	void init$($String* qname, ::java::util::Stack* namespaces, bool validate);
	void init$($String* qname, ::org::w3c::dom::Element* namespaceContext, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* resolver);
	void init$($String* qname, ::org::w3c::dom::Element* namespaceContext, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* resolver, bool validate);
	void init$($String* qname, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* resolver);
	void init$($String* qname, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* resolver, bool validate);
	virtual bool equals($String* ns, $String* localPart);
	virtual bool equals(Object$* object) override;
	virtual $String* getLocalName();
	virtual $String* getLocalPart();
	static $String* getLocalPart($String* qname);
	virtual $String* getNamespace();
	virtual $String* getNamespaceURI();
	virtual $String* getPrefix();
	static $String* getPrefixFromXMLNSDecl($String* attRawName);
	static $String* getPrefixPart($String* qname);
	static ::com::sun::org::apache::xml::internal::utils::QName* getQNameFromString($String* name);
	virtual int32_t hashCode() override;
	static bool isXMLNSDecl($String* attRawName);
	virtual $String* toNamespacedString();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x067CA946832676E0;
	$String* _localName = nullptr;
	$String* _namespaceURI = nullptr;
	$String* _prefix = nullptr;
	static $String* S_XMLNAMESPACEURI;
	int32_t m_hashCode = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("S_XMLNAMESPACEURI")

#endif // _com_sun_org_apache_xml_internal_utils_QName_h_