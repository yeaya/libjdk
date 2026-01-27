#include <org/w3c/dom/EntityReference.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$ClassInfo _EntityReference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.EntityReference",
	nullptr,
	"org.w3c.dom.Node"
};

$Object* allocate$EntityReference($Class* clazz) {
	return $of($alloc(EntityReference));
}

$Class* EntityReference::load$($String* name, bool initialize) {
	$loadClass(EntityReference, name, initialize, &_EntityReference_ClassInfo_, allocate$EntityReference);
	return class$;
}

$Class* EntityReference::class$ = nullptr;

		} // dom
	} // w3c
} // org