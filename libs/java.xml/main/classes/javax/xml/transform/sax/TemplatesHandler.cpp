#include <javax/xml/transform/sax/TemplatesHandler.h>

#include <javax/xml/transform/Templates.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Templates = ::javax::xml::transform::Templates;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

$MethodInfo _TemplatesHandler_MethodInfo_[] = {
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemplatesHandler, getSystemId, $String*)},
	{"getTemplates", "()Ljavax/xml/transform/Templates;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemplatesHandler, getTemplates, $Templates*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemplatesHandler, setSystemId, void, $String*)},
	{}
};

$ClassInfo _TemplatesHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.sax.TemplatesHandler",
	nullptr,
	"org.xml.sax.ContentHandler",
	nullptr,
	_TemplatesHandler_MethodInfo_
};

$Object* allocate$TemplatesHandler($Class* clazz) {
	return $of($alloc(TemplatesHandler));
}

$Class* TemplatesHandler::load$($String* name, bool initialize) {
	$loadClass(TemplatesHandler, name, initialize, &_TemplatesHandler_ClassInfo_, allocate$TemplatesHandler);
	return class$;
}

$Class* TemplatesHandler::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax