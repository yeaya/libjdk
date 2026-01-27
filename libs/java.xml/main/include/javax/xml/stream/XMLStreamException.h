#ifndef _javax_xml_stream_XMLStreamException_h_
#define _javax_xml_stream_XMLStreamException_h_
//$ class javax.xml.stream.XMLStreamException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $import XMLStreamException : public ::java::lang::Exception {
	$class(XMLStreamException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XMLStreamException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* th);
	void init$($String* msg, $Throwable* th);
	void init$($String* msg, ::javax::xml::stream::Location* location, $Throwable* th);
	void init$($String* msg, ::javax::xml::stream::Location* location);
	virtual ::javax::xml::stream::Location* getLocation();
	virtual $Throwable* getNestedException();
	static const int64_t serialVersionUID = (int64_t)0x1C04497A1E44F192;
	$Throwable* nested = nullptr;
	::javax::xml::stream::Location* location = nullptr;
	XMLStreamException(const XMLStreamException& e);
	virtual void throw$() override;
	inline XMLStreamException* operator ->() {
		return (XMLStreamException*)throwing$;
	}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLStreamException_h_