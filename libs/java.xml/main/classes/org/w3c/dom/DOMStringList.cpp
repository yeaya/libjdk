#include <org/w3c/dom/DOMStringList.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMStringList_MethodInfo_[] = {
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, contains, bool, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, getLength, int32_t)},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, item, $String*, int32_t)},
	{}
};

$ClassInfo _DOMStringList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMStringList",
	nullptr,
	nullptr,
	nullptr,
	_DOMStringList_MethodInfo_
};

$Object* allocate$DOMStringList($Class* clazz) {
	return $of($alloc(DOMStringList));
}

$Class* DOMStringList::load$($String* name, bool initialize) {
	$loadClass(DOMStringList, name, initialize, &_DOMStringList_ClassInfo_, allocate$DOMStringList);
	return class$;
}

$Class* DOMStringList::class$ = nullptr;

		} // dom
	} // w3c
} // org