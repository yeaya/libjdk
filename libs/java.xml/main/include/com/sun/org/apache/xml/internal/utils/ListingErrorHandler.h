#ifndef _com_sun_org_apache_xml_internal_utils_ListingErrorHandler_h_
#define _com_sun_org_apache_xml_internal_utils_ListingErrorHandler_h_
//$ class com.sun.org.apache.xml.internal.utils.ListingErrorHandler
//$ extends org.xml.sax.ErrorHandler
//$ implements javax.xml.transform.ErrorListener

#include <javax/xml/transform/ErrorListener.h>
#include <org/xml/sax/ErrorHandler.h>

namespace java {
	namespace io {
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
			class SourceLocator;
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

class $import ListingErrorHandler : public ::org::xml::sax::ErrorHandler, public ::javax::xml::transform::ErrorListener {
	$class(ListingErrorHandler, $NO_CLASS_INIT, ::org::xml::sax::ErrorHandler, ::javax::xml::transform::ErrorListener)
public:
	ListingErrorHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::PrintWriter* pw);
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* exception) override;
	virtual void error(::javax::xml::transform::TransformerException* exception) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exception) override;
	virtual void fatalError(::javax::xml::transform::TransformerException* exception) override;
	static $String* getSourceLine($String* sourceUrl, int32_t lineNum);
	virtual bool getThrowOnError();
	virtual bool getThrowOnFatalError();
	virtual bool getThrowOnWarning();
	static void logExceptionLocation(::java::io::PrintWriter* pw, $Throwable* exception);
	static void logSourceLine(::java::io::PrintWriter* pw, ::javax::xml::transform::SourceLocator* locator);
	virtual void setThrowOnError(bool b);
	virtual void setThrowOnFatalError(bool b);
	virtual void setThrowOnWarning(bool b);
	virtual $String* toString() override;
	virtual void warning(::org::xml::sax::SAXParseException* exception) override;
	virtual void warning(::javax::xml::transform::TransformerException* exception) override;
	::java::io::PrintWriter* m_pw = nullptr;
	bool throwOnWarning = false;
	bool throwOnError = false;
	bool throwOnFatalError = false;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_ListingErrorHandler_h_