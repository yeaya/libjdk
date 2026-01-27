#ifndef _javax_xml_transform_TransformerConfigurationException_h_
#define _javax_xml_transform_TransformerConfigurationException_h_
//$ class javax.xml.transform.TransformerConfigurationException
//$ extends javax.xml.transform.TransformerException

#include <javax/xml/transform/TransformerException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $import TransformerConfigurationException : public ::javax::xml::transform::TransformerException {
	$class(TransformerConfigurationException, $NO_CLASS_INIT, ::javax::xml::transform::TransformerException)
public:
	TransformerConfigurationException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* e);
	void init$($String* msg, $Throwable* e);
	void init$($String* message, ::javax::xml::transform::SourceLocator* locator);
	void init$($String* message, ::javax::xml::transform::SourceLocator* locator, $Throwable* e);
	static const int64_t serialVersionUID = (int64_t)0x11D72E9C68A35261;
	TransformerConfigurationException(const TransformerConfigurationException& e);
	virtual void throw$() override;
	inline TransformerConfigurationException* operator ->() {
		return (TransformerConfigurationException*)throwing$;
	}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_TransformerConfigurationException_h_