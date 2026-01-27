#include <org/w3c/dom/traversal/TreeWalker.h>

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

$MethodInfo _TreeWalker_MethodInfo_[] = {
	{"firstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, firstChild, $Node*)},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, getCurrentNode, $Node*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, getFilter, $NodeFilter*)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, getRoot, $Node*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, getWhatToShow, int32_t)},
	{"lastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, lastChild, $Node*)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, nextNode, $Node*)},
	{"nextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, nextSibling, $Node*)},
	{"parentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, parentNode, $Node*)},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, previousNode, $Node*)},
	{"previousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, previousSibling, $Node*)},
	{"setCurrentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWalker, setCurrentNode, void, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _TreeWalker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.traversal.TreeWalker",
	nullptr,
	nullptr,
	nullptr,
	_TreeWalker_MethodInfo_
};

$Object* allocate$TreeWalker($Class* clazz) {
	return $of($alloc(TreeWalker));
}

$Class* TreeWalker::load$($String* name, bool initialize) {
	$loadClass(TreeWalker, name, initialize, &_TreeWalker_ClassInfo_, allocate$TreeWalker);
	return class$;
}

$Class* TreeWalker::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org