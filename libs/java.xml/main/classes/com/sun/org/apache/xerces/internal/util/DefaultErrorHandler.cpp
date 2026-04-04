#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>
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
						namespace util {

void DefaultErrorHandler::init$() {
	DefaultErrorHandler::init$($$new($PrintWriter, $System::err));
}

void DefaultErrorHandler::init$($PrintWriter* out) {
	$set(this, fOut, out);
}

void DefaultErrorHandler::warning($String* domain, $String* key, $XMLParseException* ex) {
	printError("Warning"_s, ex);
}

void DefaultErrorHandler::error($String* domain, $String* key, $XMLParseException* ex) {
	printError("Error"_s, ex);
}

void DefaultErrorHandler::fatalError($String* domain, $String* key, $XMLParseException* ex) {
	printError("Fatal Error"_s, ex);
	$throw(ex);
}

void DefaultErrorHandler::printError($String* type, $XMLParseException* ex) {
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

DefaultErrorHandler::DefaultErrorHandler() {
}

$Class* DefaultErrorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(DefaultErrorHandler, fOut)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void)},
		{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(DefaultErrorHandler, init$, void, $PrintWriter*)},
		{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"printError", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PRIVATE, $method(DefaultErrorHandler, printError, void, $String*, $XMLParseException*)},
		{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultErrorHandler, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.DefaultErrorHandler",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultErrorHandler);
	});
	return class$;
}

$Class* DefaultErrorHandler::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com