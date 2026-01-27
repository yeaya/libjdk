#include <javax/xml/namespace/NamespaceContext.h>

#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace javax {
	namespace xml {
		namespace namespace$ {

$MethodInfo _NamespaceContext_MethodInfo_[] = {
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getNamespaceURI, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getPrefix, $String*, $String*)},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getPrefixes, $Iterator*, $String*)},
	{}
};

$ClassInfo _NamespaceContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.namespace.NamespaceContext",
	nullptr,
	nullptr,
	nullptr,
	_NamespaceContext_MethodInfo_
};

$Object* allocate$NamespaceContext($Class* clazz) {
	return $of($alloc(NamespaceContext));
}

$Class* NamespaceContext::load$($String* name, bool initialize) {
	$loadClass(NamespaceContext, name, initialize, &_NamespaceContext_ClassInfo_, allocate$NamespaceContext);
	return class$;
}

$Class* NamespaceContext::class$ = nullptr;

		} // namespace$
	} // xml
} // javax