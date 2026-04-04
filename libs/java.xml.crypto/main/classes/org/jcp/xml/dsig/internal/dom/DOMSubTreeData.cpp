#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <java/util/Iterator.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData$DelayedNodeIterator.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $DOMSubTreeData$DelayedNodeIterator = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData$DelayedNodeIterator;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMSubTreeData::init$($Node* root, bool excludeComments) {
	$set(this, root, root);
	this->excludeComments$ = excludeComments;
}

$Iterator* DOMSubTreeData::iterator() {
	return $new($DOMSubTreeData$DelayedNodeIterator, this->root, this->excludeComments$);
}

$Node* DOMSubTreeData::getRoot() {
	return this->root;
}

bool DOMSubTreeData::excludeComments() {
	return this->excludeComments$;
}

DOMSubTreeData::DOMSubTreeData() {
}

$Class* DOMSubTreeData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"excludeComments", "Z", nullptr, $PRIVATE, $field(DOMSubTreeData, excludeComments$)},
		{"root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSubTreeData, root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, $PUBLIC, $method(DOMSubTreeData, init$, void, $Node*, bool)},
		{"excludeComments", "()Z", nullptr, $PUBLIC, $virtualMethod(DOMSubTreeData, excludeComments, bool)},
		{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMSubTreeData, getRoot, $Node*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(DOMSubTreeData, iterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator", "org.jcp.xml.dsig.internal.dom.DOMSubTreeData", "DelayedNodeIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMSubTreeData",
		"java.lang.Object",
		"javax.xml.crypto.NodeSetData",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/xml/crypto/NodeSetData<Lorg/w3c/dom/Node;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator"
	};
	$loadClass(DOMSubTreeData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMSubTreeData));
	});
	return class$;
}

$Class* DOMSubTreeData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org