#include <org/xml/sax/ext/DeclHandler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _DeclHandler_MethodInfo_[] = {
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DeclHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ext.DeclHandler",
	nullptr,
	nullptr,
	nullptr,
	_DeclHandler_MethodInfo_
};

$Object* allocate$DeclHandler($Class* clazz) {
	return $of($alloc(DeclHandler));
}

$Class* DeclHandler::load$($String* name, bool initialize) {
	$loadClass(DeclHandler, name, initialize, &_DeclHandler_ClassInfo_, allocate$DeclHandler);
	return class$;
}

$Class* DeclHandler::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org