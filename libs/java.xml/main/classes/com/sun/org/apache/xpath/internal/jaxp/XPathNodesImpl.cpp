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

$FieldInfo _XPathNodesImpl_FieldInfo_[] = {
	{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<Lorg/w3c/dom/Node;>;", 0, $field(XPathNodesImpl, elementType)},
	{"nodeList", "Lorg/w3c/dom/NodeList;", nullptr, 0, $field(XPathNodesImpl, nodeList)},
	{}
};

$MethodInfo _XPathNodesImpl_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/NodeList;Ljava/lang/Class;)V", "(Lorg/w3c/dom/NodeList;Ljava/lang/Class<Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(XPathNodesImpl, init$, void, $NodeList*, $Class*)},
	{"get", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(XPathNodesImpl, get, $Node*, int32_t), "javax.xml.xpath.XPathException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(XPathNodesImpl, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XPathNodesImpl, size, int32_t)},
	{}
};

$InnerClassInfo _XPathNodesImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator", "com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl", "NodeSetIterator", 0},
	{}
};

$ClassInfo _XPathNodesImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl",
	"java.lang.Object",
	"javax.xml.xpath.XPathNodes",
	_XPathNodesImpl_FieldInfo_,
	_XPathNodesImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XPathNodesImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator"
};

$Object* allocate$XPathNodesImpl($Class* clazz) {
	return $of($alloc(XPathNodesImpl));
}

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
		return $nc(this->nodeList)->getLength();
	}
	return 0;
}

$Node* XPathNodesImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= size()) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index "_s, $$str(index), " is out of bounds"_s}));
	}
	if (this->nodeList != nullptr) {
		return $nc(this->nodeList)->item(index);
	}
	return nullptr;
}

XPathNodesImpl::XPathNodesImpl() {
}

$Class* XPathNodesImpl::load$($String* name, bool initialize) {
	$loadClass(XPathNodesImpl, name, initialize, &_XPathNodesImpl_ClassInfo_, allocate$XPathNodesImpl);
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