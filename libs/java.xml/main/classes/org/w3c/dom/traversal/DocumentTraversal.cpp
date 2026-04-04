#include <org/w3c/dom/traversal/DocumentTraversal.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/w3c/dom/traversal/TreeWalker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;
using $TreeWalker = ::org::w3c::dom::traversal::TreeWalker;

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

$Class* DocumentTraversal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createNodeIterator", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentTraversal, createNodeIterator, $NodeIterator*, $Node*, int32_t, $NodeFilter*, bool), "org.w3c.dom.DOMException"},
		{"createTreeWalker", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/TreeWalker;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentTraversal, createTreeWalker, $TreeWalker*, $Node*, int32_t, $NodeFilter*, bool), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.traversal.DocumentTraversal",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentTraversal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentTraversal);
	});
	return class$;
}

$Class* DocumentTraversal::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org