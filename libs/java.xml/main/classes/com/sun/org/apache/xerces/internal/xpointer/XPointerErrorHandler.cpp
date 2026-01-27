#include <com/sun/org/apache/xerces/internal/xpointer/XPointerErrorHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _XPointerErrorHandler_FieldInfo_[] = {
	{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(XPointerErrorHandler, fOut)},
	{}
};

$MethodInfo _XPointerErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPointerErrorHandler, init$, void)},
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(XPointerErrorHandler, init$, void, $PrintWriter*)},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"printError", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PRIVATE, $method(XPointerErrorHandler, printError, void, $String*, $XMLParseException*)},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XPointerErrorHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerErrorHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
	_XPointerErrorHandler_FieldInfo_,
	_XPointerErrorHandler_MethodInfo_
};

$Object* allocate$XPointerErrorHandler($Class* clazz) {
	return $of($alloc(XPointerErrorHandler));
}

void XPointerErrorHandler::init$() {
	XPointerErrorHandler::init$($$new($PrintWriter, static_cast<$OutputStream*>($System::err)));
}

void XPointerErrorHandler::init$($PrintWriter* out) {
	$set(this, fOut, out);
}

void XPointerErrorHandler::warning($String* domain, $String* key, $XMLParseException* ex) {
	printError("Warning"_s, ex);
}

void XPointerErrorHandler::error($String* domain, $String* key, $XMLParseException* ex) {
	printError("Error"_s, ex);
}

void XPointerErrorHandler::fatalError($String* domain, $String* key, $XMLParseException* ex) {
	printError("Fatal Error"_s, ex);
	$throw(ex);
}

void XPointerErrorHandler::printError($String* type, $XMLParseException* ex) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fOut)->print("["_s);
	$nc(this->fOut)->print(type);
	$nc(this->fOut)->print("] "_s);
	$var($String, systemId, $nc(ex)->getExpandedSystemId());
	if (systemId != nullptr) {
		int32_t index = systemId->lastIndexOf((int32_t)u'/');
		if (index != -1) {
			$assign(systemId, systemId->substring(index + 1));
		}
		$nc(this->fOut)->print(systemId);
	}
	$nc(this->fOut)->print(u':');
	$nc(this->fOut)->print(ex->getLineNumber());
	$nc(this->fOut)->print(u':');
	$nc(this->fOut)->print(ex->getColumnNumber());
	$nc(this->fOut)->print(": "_s);
	$nc(this->fOut)->print($(ex->getMessage()));
	$nc(this->fOut)->println();
	$nc(this->fOut)->flush();
}

XPointerErrorHandler::XPointerErrorHandler() {
}

$Class* XPointerErrorHandler::load$($String* name, bool initialize) {
	$loadClass(XPointerErrorHandler, name, initialize, &_XPointerErrorHandler_ClassInfo_, allocate$XPointerErrorHandler);
	return class$;
}

$Class* XPointerErrorHandler::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com