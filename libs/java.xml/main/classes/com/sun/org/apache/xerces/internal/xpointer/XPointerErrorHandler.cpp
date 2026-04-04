#include <com/sun/org/apache/xerces/internal/xpointer/XPointerErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
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

void XPointerErrorHandler::init$() {
	XPointerErrorHandler::init$($$new($PrintWriter, $System::err));
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
	$useLocalObjectStack();
	$nc(this->fOut)->print("["_s);
	this->fOut->print(type);
	this->fOut->print("] "_s);
	$var($String, systemId, $nc(ex)->getExpandedSystemId());
	if (systemId != nullptr) {
		int32_t index = systemId->lastIndexOf(u'/');
		if (index != -1) {
			$assign(systemId, systemId->substring(index + 1));
		}
		$nc(this->fOut)->print(systemId);
	}
	$nc(this->fOut)->print(u':');
	this->fOut->print(ex->getLineNumber());
	$nc(this->fOut)->print(u':');
	this->fOut->print(ex->getColumnNumber());
	$nc(this->fOut)->print(": "_s);
	this->fOut->print($(ex->getMessage()));
	this->fOut->println();
	this->fOut->flush();
}

XPointerErrorHandler::XPointerErrorHandler() {
}

$Class* XPointerErrorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(XPointerErrorHandler, fOut)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPointerErrorHandler, init$, void)},
		{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(XPointerErrorHandler, init$, void, $PrintWriter*)},
		{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"printError", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PRIVATE, $method(XPointerErrorHandler, printError, void, $String*, $XMLParseException*)},
		{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(XPointerErrorHandler, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xpointer.XPointerErrorHandler",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPointerErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPointerErrorHandler);
	});
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