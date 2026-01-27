#ifndef _com_sun_org_apache_xml_internal_utils_DefaultErrorHandler_h_
#define _com_sun_org_apache_xml_internal_utils_DefaultErrorHandler_h_
//$ class com.sun.org.apache.xml.internal.utils.DefaultErrorHandler
//$ extends org.xml.sax.ErrorHandler
//$ implements javax.xml.transform.ErrorListener

#include <javax/xml/transform/ErrorListener.h>
#include <org/xml/sax/ErrorHandler.h>

namespace java {
	namespace io {
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
		namespace transform {
			class TransformerException;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
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

class $import DefaultErrorHandler : public ::org::xml::sax::ErrorHandler, public ::javax::xml::transform::ErrorListener {
	$class(DefaultErrorHandler, $NO_CLASS_INIT, ::org::xml::sax::ErrorHandler, ::javax::xml::transform::ErrorListener)
public:
	DefaultErrorHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::PrintWriter* pw);
	void init$(::java::io::PrintStream* pw);
	void init$();
	void init$(bool throwExceptionOnError);
	static void ensureLocationSet(::javax::xml::transform::TransformerException* exception);
	virtual void error(::org::xml::sax::SAXParseException* exception) override;
	virtual void error(::javax::xml::transform::TransformerException* exception) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exception) override;
	virtual void fatalError(::javax::xml::transform::TransformerException* exception) override;
	static void printLocation(::java::io::PrintStream* pw, ::javax::xml::transform::TransformerException* exception);
	static void printLocation(::java::io::PrintStream* pw, ::org::xml::sax::SAXParseException* exception);
	static void printLocation(::java::io::PrintWriter* pw, $Throwable* exception);
	virtual $String* toString() override;
	virtual void warning(::org::xml::sax::SAXParseException* exception) override;
	virtual void warning(::javax::xml::transform::TransformerException* exception) override;
	::java::io::PrintWriter* m_pw = nullptr;
	bool m_throwExceptionOnError = false;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_DefaultErrorHandler_h_