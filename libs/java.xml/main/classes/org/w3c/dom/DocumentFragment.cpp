#include <org/w3c/dom/DocumentFragment.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$ClassInfo _DocumentFragment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DocumentFragment",
	nullptr,
	"org.w3c.dom.Node"
};

$Object* allocate$DocumentFragment($Class* clazz) {
	return $of($alloc(DocumentFragment));
}

$Class* DocumentFragment::load$($String* name, bool initialize) {
	$loadClass(DocumentFragment, name, initialize, &_DocumentFragment_ClassInfo_, allocate$DocumentFragment);
	return class$;
}

$Class* DocumentFragment::class$ = nullptr;

		} // dom
	} // w3c
} // org