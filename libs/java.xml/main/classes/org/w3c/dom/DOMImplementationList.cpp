#include <org/w3c/dom/DOMImplementationList.h>

#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMImplementationList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationList, item, $DOMImplementation*, int32_t)},
	{}
};

$ClassInfo _DOMImplementationList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMImplementationList",
	nullptr,
	nullptr,
	nullptr,
	_DOMImplementationList_MethodInfo_
};

$Object* allocate$DOMImplementationList($Class* clazz) {
	return $of($alloc(DOMImplementationList));
}

$Class* DOMImplementationList::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationList, name, initialize, &_DOMImplementationList_ClassInfo_, allocate$DOMImplementationList);
	return class$;
}

$Class* DOMImplementationList::class$ = nullptr;

		} // dom
	} // w3c
} // org