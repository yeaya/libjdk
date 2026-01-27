#ifndef _javax_xml_transform_TransformerException_h_
#define _javax_xml_transform_TransformerException_h_
//$ class javax.xml.transform.TransformerException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

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
namespace java {
	namespace security {
		class ProtectionDomain;
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

class $import TransformerException : public ::java::lang::Exception {
	$class(TransformerException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TransformerException();
	void init$($String* message);
	void init$($Throwable* e);
	void init$($String* message, $Throwable* e);
	void init$($String* message, ::javax::xml::transform::SourceLocator* locator);
	void init$($String* message, ::javax::xml::transform::SourceLocator* locator, $Throwable* e);
	virtual $Throwable* getCause() override;
	virtual $Throwable* getException();
	virtual $String* getLocationAsString();
	$String* getLocationString();
	virtual ::javax::xml::transform::SourceLocator* getLocator();
	virtual $String* getMessageAndLocation();
	::java::security::ProtectionDomain* getNonPrivDomain();
	virtual $Throwable* initCause($Throwable* cause) override;
	$String* lambda$getLocationAsString$0();
	virtual void printStackTrace() override;
	virtual void printStackTrace(::java::io::PrintStream* s) override;
	virtual void printStackTrace(::java::io::PrintWriter* s) override;
	virtual void setLocator(::javax::xml::transform::SourceLocator* location);
	static const int64_t serialVersionUID = (int64_t)0x0D8ABBD092FFB30C;
	::javax::xml::transform::SourceLocator* locator = nullptr;
	$Throwable* containedException = nullptr;
	TransformerException(const TransformerException& e);
	virtual void throw$() override;
	inline TransformerException* operator ->() {
		return (TransformerException*)throwing$;
	}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_TransformerException_h_