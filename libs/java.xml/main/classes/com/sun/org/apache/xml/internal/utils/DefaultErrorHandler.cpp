#include <com/sun/org/apache/xml/internal/utils/DefaultErrorHandler.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/SAXSourceLocator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ER_LOCATION_UNKNOWN
#undef ER_SYSTEMID_UNKNOWN

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $SAXSourceLocator = ::com::sun::org::apache::xml::internal::utils::SAXSourceLocator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _DefaultErrorHandler_FieldInfo_[] = {
	{"m_pw", "Ljava/io/PrintWriter;", nullptr, 0, $field(DefaultErrorHandler, m_pw)},
	{"m_throwExceptionOnError", "Z", nullptr, 0, $field(DefaultErrorHandler, m_throwExceptionOnError)},
	{}
};

$MethodInfo _DefaultErrorHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void, $PrintWriter*)},
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void, $PrintStream*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void, bool)},
	{"ensureLocationSet", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultErrorHandler, ensureLocationSet, void, $TransformerException*)},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"error", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, error, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, fatalError, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{"printLocation", "(Ljava/io/PrintStream;Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultErrorHandler, printLocation, void, $PrintStream*, $TransformerException*)},
	{"printLocation", "(Ljava/io/PrintStream;Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultErrorHandler, printLocation, void, $PrintStream*, $SAXParseException*)},
	{"printLocation", "(Ljava/io/PrintWriter;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultErrorHandler, printLocation, void, $PrintWriter*, $Throwable*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"warning", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, warning, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _DefaultErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.DefaultErrorHandler",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler,javax.xml.transform.ErrorListener",
	_DefaultErrorHandler_FieldInfo_,
	_DefaultErrorHandler_MethodInfo_
};

$Object* allocate$DefaultErrorHandler($Class* clazz) {
	return $of($alloc(DefaultErrorHandler));
}

int32_t DefaultErrorHandler::hashCode() {
	 return this->$ErrorHandler::hashCode();
}

bool DefaultErrorHandler::equals(Object$* arg0) {
	 return this->$ErrorHandler::equals(arg0);
}

$Object* DefaultErrorHandler::clone() {
	 return this->$ErrorHandler::clone();
}

$String* DefaultErrorHandler::toString() {
	 return this->$ErrorHandler::toString();
}

void DefaultErrorHandler::finalize() {
	this->$ErrorHandler::finalize();
}

void DefaultErrorHandler::init$($PrintWriter* pw) {
	this->m_throwExceptionOnError = true;
	$set(this, m_pw, pw);
}

void DefaultErrorHandler::init$($PrintStream* pw) {
	this->m_throwExceptionOnError = true;
	$set(this, m_pw, $new($PrintWriter, static_cast<$OutputStream*>(pw), true));
}

void DefaultErrorHandler::init$() {
	DefaultErrorHandler::init$(true);
}

void DefaultErrorHandler::init$(bool throwExceptionOnError) {
	this->m_throwExceptionOnError = true;
	$set(this, m_pw, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
	this->m_throwExceptionOnError = throwExceptionOnError;
}

void DefaultErrorHandler::warning($SAXParseException* exception) {
	$useLocalCurrentObjectStackCache();
	printLocation(this->m_pw, static_cast<$Throwable*>(exception));
	$nc(this->m_pw)->println($$str({"Parser warning: "_s, $($nc(exception)->getMessage())}));
}

void DefaultErrorHandler::error($SAXParseException* exception) {
	$throw(exception);
}

void DefaultErrorHandler::fatalError($SAXParseException* exception) {
	$throw(exception);
}

void DefaultErrorHandler::warning($TransformerException* exception) {
	printLocation(this->m_pw, static_cast<$Throwable*>(exception));
	$nc(this->m_pw)->println($($nc(exception)->getMessage()));
}

void DefaultErrorHandler::error($TransformerException* exception) {
	if (this->m_throwExceptionOnError) {
		$throw(exception);
	} else {
		printLocation(this->m_pw, static_cast<$Throwable*>(exception));
		$nc(this->m_pw)->println($($nc(exception)->getMessage()));
	}
}

void DefaultErrorHandler::fatalError($TransformerException* exception) {
	if (this->m_throwExceptionOnError) {
		$throw(exception);
	} else {
		printLocation(this->m_pw, static_cast<$Throwable*>(exception));
		$nc(this->m_pw)->println($($nc(exception)->getMessage()));
	}
}

void DefaultErrorHandler::ensureLocationSet($TransformerException* exception) {
	$init(DefaultErrorHandler);
	$useLocalCurrentObjectStackCache();
	$var($SourceLocator, locator, nullptr);
	$var($Throwable, cause, exception);
	do {
		if ($instanceOf($SAXParseException, cause)) {
			$assign(locator, $new($SAXSourceLocator, $cast($SAXParseException, cause)));
		} else if ($instanceOf($TransformerException, cause)) {
			$var($SourceLocator, causeLocator, $nc(($cast($TransformerException, cause)))->getLocator());
			if (nullptr != causeLocator) {
				$assign(locator, causeLocator);
			}
		}
		if ($instanceOf($TransformerException, cause)) {
			$assign(cause, $nc(($cast($TransformerException, cause)))->getCause());
		} else if ($instanceOf($SAXException, cause)) {
			$assign(cause, $nc(($cast($SAXException, cause)))->getException());
		} else {
			$assign(cause, nullptr);
		}
	} while (nullptr != cause);
	$nc(exception)->setLocator(locator);
}

void DefaultErrorHandler::printLocation($PrintStream* pw, $TransformerException* exception) {
	$init(DefaultErrorHandler);
	printLocation($$new($PrintWriter, static_cast<$OutputStream*>(pw)), static_cast<$Throwable*>(exception));
}

void DefaultErrorHandler::printLocation($PrintStream* pw, $SAXParseException* exception) {
	$init(DefaultErrorHandler);
	printLocation($$new($PrintWriter, static_cast<$OutputStream*>(pw)), static_cast<$Throwable*>(exception));
}

void DefaultErrorHandler::printLocation($PrintWriter* pw, $Throwable* exception) {
	$init(DefaultErrorHandler);
	$useLocalCurrentObjectStackCache();
	$var($SourceLocator, locator, nullptr);
	$var($Throwable, cause, exception);
	do {
		if ($instanceOf($SAXParseException, cause)) {
			$assign(locator, $new($SAXSourceLocator, $cast($SAXParseException, cause)));
		} else if ($instanceOf($TransformerException, cause)) {
			$var($SourceLocator, causeLocator, $nc(($cast($TransformerException, cause)))->getLocator());
			if (nullptr != causeLocator) {
				$assign(locator, causeLocator);
			}
		}
		if ($instanceOf($TransformerException, cause)) {
			$assign(cause, $nc(($cast($TransformerException, cause)))->getCause());
		} else if ($instanceOf($WrappedRuntimeException, cause)) {
			$assign(cause, $nc(($cast($WrappedRuntimeException, cause)))->getException());
		} else if ($instanceOf($SAXException, cause)) {
			$assign(cause, $nc(($cast($SAXException, cause)))->getException());
		} else {
			$assign(cause, nullptr);
		}
	} while (nullptr != cause);
	if (nullptr != locator) {
		$init($XMLErrorResources);
		$var($String, id, (nullptr != locator->getPublicId()) ? locator->getPublicId() : (nullptr != locator->getSystemId()) ? locator->getSystemId() : $XMLMessages::createXMLMessage($XMLErrorResources::ER_SYSTEMID_UNKNOWN, nullptr));
		$var($String, var$4, $$str({id, "; "_s, $($XMLMessages::createXMLMessage("line"_s, nullptr))}));
		$var($String, var$3, $$concat(var$4, $$str(locator->getLineNumber())));
		$var($String, var$2, $$concat(var$3, "; "_s));
		$var($String, var$1, $$concat(var$2, $($XMLMessages::createXMLMessage("column"_s, nullptr))));
		$var($String, var$0, $$concat(var$1, $$str(locator->getColumnNumber())));
		$nc(pw)->print($$concat(var$0, "; "_s));
	} else {
		$init($XMLErrorResources);
		$nc(pw)->print($$str({"("_s, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_LOCATION_UNKNOWN, nullptr)), ")"_s}));
	}
}

DefaultErrorHandler::DefaultErrorHandler() {
}

$Class* DefaultErrorHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultErrorHandler, name, initialize, &_DefaultErrorHandler_ClassInfo_, allocate$DefaultErrorHandler);
	return class$;
}

$Class* DefaultErrorHandler::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com