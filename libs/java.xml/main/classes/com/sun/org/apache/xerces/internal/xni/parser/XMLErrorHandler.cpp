#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <jcpp.h>

using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLErrorHandler_MethodInfo_[] = {
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLErrorHandler, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLErrorHandler, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLErrorHandler, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLErrorHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
	nullptr,
	nullptr,
	nullptr,
	_XMLErrorHandler_MethodInfo_
};

$Object* allocate$XMLErrorHandler($Class* clazz) {
	return $of($alloc(XMLErrorHandler));
}

$Class* XMLErrorHandler::load$($String* name, bool initialize) {
	$loadClass(XMLErrorHandler, name, initialize, &_XMLErrorHandler_ClassInfo_, allocate$XMLErrorHandler);
	return class$;
}

$Class* XMLErrorHandler::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com