#include <org/w3c/dom/DOMLocator.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMLocator_MethodInfo_[] = {
	{"getByteOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getByteOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getLineNumber, int32_t)},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getRelatedNode, $Node*)},
	{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getUri, $String*)},
	{"getUtf16Offset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getUtf16Offset, int32_t)},
	{}
};

$ClassInfo _DOMLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMLocator",
	nullptr,
	nullptr,
	nullptr,
	_DOMLocator_MethodInfo_
};

$Object* allocate$DOMLocator($Class* clazz) {
	return $of($alloc(DOMLocator));
}

$Class* DOMLocator::load$($String* name, bool initialize) {
	$loadClass(DOMLocator, name, initialize, &_DOMLocator_ClassInfo_, allocate$DOMLocator);
	return class$;
}

$Class* DOMLocator::class$ = nullptr;

		} // dom
	} // w3c
} // org