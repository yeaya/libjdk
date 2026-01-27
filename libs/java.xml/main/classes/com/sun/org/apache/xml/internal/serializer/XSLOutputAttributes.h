#ifndef _com_sun_org_apache_xml_internal_serializer_XSLOutputAttributes_h_
#define _com_sun_org_apache_xml_internal_serializer_XSLOutputAttributes_h_
//$ interface com.sun.org.apache.xml.internal.serializer.XSLOutputAttributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class XSLOutputAttributes : public ::java::lang::Object {
	$interface(XSLOutputAttributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getDoctypePublic() {return nullptr;}
	virtual $String* getDoctypeSystem() {return nullptr;}
	virtual $String* getEncoding() {return nullptr;}
	virtual bool getIndent() {return false;}
	virtual int32_t getIndentAmount() {return 0;}
	virtual $String* getMediaType() {return nullptr;}
	virtual bool getOmitXMLDeclaration() {return false;}
	virtual $String* getOutputProperty($String* name) {return nullptr;}
	virtual $String* getOutputPropertyDefault($String* name) {return nullptr;}
	virtual $String* getStandalone() {return nullptr;}
	virtual $String* getVersion() {return nullptr;}
	virtual void setCdataSectionElements(::java::util::List* URI_and_localNames) {}
	virtual void setDoctype($String* system, $String* pub) {}
	virtual void setDoctypePublic($String* doctype) {}
	virtual void setDoctypeSystem($String* doctype) {}
	virtual void setEncoding($String* encoding) {}
	virtual void setIndent(bool indent) {}
	virtual void setMediaType($String* mediatype) {}
	virtual void setOmitXMLDeclaration(bool b) {}
	virtual void setOutputProperty($String* name, $String* val) {}
	virtual void setOutputPropertyDefault($String* name, $String* val) {}
	virtual void setStandalone($String* standalone) {}
	virtual void setVersion($String* version) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_XSLOutputAttributes_h_