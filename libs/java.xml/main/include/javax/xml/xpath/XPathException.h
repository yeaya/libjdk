#ifndef _javax_xml_xpath_XPathException_h_
#define _javax_xml_xpath_XPathException_h_
//$ class javax.xml.xpath.XPathException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $import XPathException : public ::java::lang::Exception {
	$class(XPathException, 0, ::java::lang::Exception)
public:
	XPathException();
	void init$($String* message);
	void init$($Throwable* cause);
	virtual $Throwable* getCause() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const int64_t serialVersionUID = (int64_t)0xE681613C88777F1C;
	XPathException(const XPathException& e);
	virtual void throw$() override;
	inline XPathException* operator ->() {
		return (XPathException*)throwing$;
	}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathException_h_