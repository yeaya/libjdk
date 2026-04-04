#include <com/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl$NodeSetIterator.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Iterator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $XPathNodesImpl$NodeSetIterator = ::com::sun::org::apache::xpath::internal::jaxp::XPathNodesImpl$NodeSetIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

void XPathNodesImpl::init$($NodeList* nodeList, $Class* elementType) {
	$set(this, nodeList, nullptr);
	$set(this, nodeList, nodeList);
	$set(this, elementType, elementType);
}

$Iterator* XPathNodesImpl::iterator() {
	return $new($XPathNodesImpl$NodeSetIterator, this, this->elementType);
}

int32_t XPathNodesImpl::size() {
	if (this->nodeList != nullptr) {
		return this->nodeList->getLength();
	}
	return 0;
}

$Node* XPathNodesImpl::get(int32_t index) {
	$useLocalObjectStack();
	if (index < 0 || index >= size()) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index "_s, $$str(index), " is out of bounds"_s}));
	}
	if (this->nodeList != nullptr) {
		return this->nodeList->item(index);
	}
	return nullptr;
}

XPathNodesImpl::XPathNodesImpl() {
}

$Class* XPathNodesImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<Lorg/w3c/dom/Node;>;", 0, $field(XPathNodesImpl, elementType)},
		{"nodeList", "Lorg/w3c/dom/NodeList;", nullptr, 0, $field(XPathNodesImpl, nodeList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/NodeList;Ljava/lang/Class;)V", "(Lorg/w3c/dom/NodeList;Ljava/lang/Class<Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(XPathNodesImpl, init$, void, $NodeList*, $Class*)},
		{"get", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(XPathNodesImpl, get, $Node*, int32_t), "javax.xml.xpath.XPathException"},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(XPathNodesImpl, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XPathNodesImpl, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator", "com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl", "NodeSetIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl",
		"java.lang.Object",
		"javax.xml.xpath.XPathNodes",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator"
	};
	$loadClass(XPathNodesImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathNodesImpl);
	});
	return class$;
}

$Class* XPathNodesImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com