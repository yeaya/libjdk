#include <com/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl$NodeSetIterator.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $XPathNodesImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathNodesImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

void XPathNodesImpl$NodeSetIterator::init$($XPathNodesImpl* this$0, $Class* elementType) {
	$set(this, this$0, this$0);
	$set(this, elementType, elementType);
}

bool XPathNodesImpl$NodeSetIterator::hasNext() {
	if (this->this$0->nodeList != nullptr) {
		return this->currentIndex < this->this$0->nodeList->getLength();
	}
	return false;
}

$Object* XPathNodesImpl$NodeSetIterator::next() {
	if (this->this$0->nodeList != nullptr && this->this$0->nodeList->getLength() > 0) {
		return $nc(this->elementType)->cast($(this->this$0->nodeList->item(this->currentIndex++)));
	}
	return nullptr;
}

XPathNodesImpl$NodeSetIterator::XPathNodesImpl$NodeSetIterator() {
}

$Class* XPathNodesImpl$NodeSetIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XPathNodesImpl$NodeSetIterator, this$0)},
		{"currentIndex", "I", nullptr, 0, $field(XPathNodesImpl$NodeSetIterator, currentIndex)},
		{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", 0, $field(XPathNodesImpl$NodeSetIterator, elementType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl;Ljava/lang/Class;)V", "(Ljava/lang/Class<TE;>;)V", 0, $method(XPathNodesImpl$NodeSetIterator, init$, void, $XPathNodesImpl*, $Class*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XPathNodesImpl$NodeSetIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(XPathNodesImpl$NodeSetIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator", "com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl", "NodeSetIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl"
	};
	$loadClass(XPathNodesImpl$NodeSetIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathNodesImpl$NodeSetIterator);
	});
	return class$;
}

$Class* XPathNodesImpl$NodeSetIterator::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com