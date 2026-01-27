#ifndef _javax_xml_namespace$_QName_h_
#define _javax_xml_namespace$_QName_h_
//$ class javax.xml.namespace.QName
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace xml {
		namespace namespace$ {

class $import QName : public ::java::io::Serializable {
	$class(QName, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	QName();
	void init$($String* namespaceURI, $String* localPart);
	void init$($String* namespaceURI, $String* localPart, $String* prefix);
	void init$($String* localPart);
	virtual bool equals(Object$* objectToTest) override;
	virtual $String* getLocalPart();
	virtual $String* getNamespaceURI();
	virtual $String* getPrefix();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::javax::xml::namespace$::QName* valueOf($String* qNameAsString);
	static const int64_t serialVersionUID = (int64_t)0x816DA82DFC3BDD6C;
	$String* namespaceURI = nullptr;
	$String* localPart = nullptr;
	$String* prefix = nullptr;
};

		} // namespace$
	} // xml
} // javax

#endif // _javax_xml_namespace$_QName_h_