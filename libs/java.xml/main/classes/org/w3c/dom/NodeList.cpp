#include <org/w3c/dom/NodeList.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _NodeList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeList, item, $Node*, int32_t)},
	{}
};

$ClassInfo _NodeList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.NodeList",
	nullptr,
	nullptr,
	nullptr,
	_NodeList_MethodInfo_
};

$Object* allocate$NodeList($Class* clazz) {
	return $of($alloc(NodeList));
}

$Class* NodeList::load$($String* name, bool initialize) {
	$loadClass(NodeList, name, initialize, &_NodeList_ClassInfo_, allocate$NodeList);
	return class$;
}

$Class* NodeList::class$ = nullptr;

		} // dom
	} // w3c
} // org