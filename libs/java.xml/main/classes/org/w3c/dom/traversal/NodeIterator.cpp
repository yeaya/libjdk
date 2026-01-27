#include <org/w3c/dom/traversal/NodeIterator.h>

#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

$MethodInfo _NodeIterator_MethodInfo_[] = {
	{"detach", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, detach, void)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getFilter, $NodeFilter*)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getRoot, $Node*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getWhatToShow, int32_t)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, nextNode, $Node*), "org.w3c.dom.DOMException"},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, previousNode, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _NodeIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.traversal.NodeIterator",
	nullptr,
	nullptr,
	nullptr,
	_NodeIterator_MethodInfo_
};

$Object* allocate$NodeIterator($Class* clazz) {
	return $of($alloc(NodeIterator));
}

$Class* NodeIterator::load$($String* name, bool initialize) {
	$loadClass(NodeIterator, name, initialize, &_NodeIterator_ClassInfo_, allocate$NodeIterator);
	return class$;
}

$Class* NodeIterator::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org