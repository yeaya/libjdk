#include <javax/xml/transform/dom/DOMResult.h>

#include <java/lang/IllegalStateException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOCUMENT_POSITION_CONTAINED_BY
#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

$FieldInfo _DOMResult_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMResult, FEATURE)},
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResult, node)},
	{"nextSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResult, nextSibling)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMResult, systemId)},
	{}
};

$MethodInfo _DOMResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMResult, init$, void)},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMResult, init$, void, $Node*)},
	{"<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMResult, init$, void, $Node*, $String*)},
	{"<init>", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMResult, init$, void, $Node*, $Node*)},
	{"<init>", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMResult, init$, void, $Node*, $Node*, $String*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMResult, getNextSibling, $Node*)},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMResult, getNode, $Node*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMResult, getSystemId, $String*)},
	{"setNextSibling", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(DOMResult, setNextSibling, void, $Node*)},
	{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(DOMResult, setNode, void, $Node*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMResult, setSystemId, void, $String*)},
	{}
};

$ClassInfo _DOMResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.dom.DOMResult",
	"java.lang.Object",
	"javax.xml.transform.Result",
	_DOMResult_FieldInfo_,
	_DOMResult_MethodInfo_
};

$Object* allocate$DOMResult($Class* clazz) {
	return $of($alloc(DOMResult));
}

$String* DOMResult::FEATURE = nullptr;

void DOMResult::init$() {
	$set(this, node, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, systemId, nullptr);
	setNode(nullptr);
	setNextSibling(nullptr);
	setSystemId(nullptr);
}

void DOMResult::init$($Node* node) {
	$set(this, node, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, systemId, nullptr);
	setNode(node);
	setNextSibling(nullptr);
	setSystemId(nullptr);
}

void DOMResult::init$($Node* node, $String* systemId) {
	$set(this, node, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, systemId, nullptr);
	setNode(node);
	setNextSibling(nullptr);
	setSystemId(systemId);
}

void DOMResult::init$($Node* node, $Node* nextSibling) {
	$set(this, node, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, systemId, nullptr);
	if (nextSibling != nullptr) {
		if (node == nullptr) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is contained by the \"null\" node."_s);
		}
		if (((int32_t)($nc(node)->compareDocumentPosition(nextSibling) & (uint32_t)(int32_t)$Node::DOCUMENT_POSITION_CONTAINED_BY)) == 0) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is not contained by the node."_s);
		}
	}
	setNode(node);
	setNextSibling(nextSibling);
	setSystemId(nullptr);
}

void DOMResult::init$($Node* node, $Node* nextSibling, $String* systemId) {
	$set(this, node, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, systemId, nullptr);
	if (nextSibling != nullptr) {
		if (node == nullptr) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is contained by the \"null\" node."_s);
		}
		if (((int32_t)($nc(node)->compareDocumentPosition(nextSibling) & (uint32_t)(int32_t)$Node::DOCUMENT_POSITION_CONTAINED_BY)) == 0) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is not contained by the node."_s);
		}
	}
	setNode(node);
	setNextSibling(nextSibling);
	setSystemId(systemId);
}

void DOMResult::setNode($Node* node) {
	if (this->nextSibling != nullptr) {
		if (node == nullptr) {
			$throwNew($IllegalStateException, "Cannot create a DOMResult when the nextSibling is contained by the \"null\" node."_s);
		}
		if (((int32_t)($nc(node)->compareDocumentPosition(this->nextSibling) & (uint32_t)(int32_t)$Node::DOCUMENT_POSITION_CONTAINED_BY)) == 0) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is not contained by the node."_s);
		}
	}
	$set(this, node, node);
}

$Node* DOMResult::getNode() {
	return this->node;
}

void DOMResult::setNextSibling($Node* nextSibling) {
	if (nextSibling != nullptr) {
		if (this->node == nullptr) {
			$throwNew($IllegalStateException, "Cannot create a DOMResult when the nextSibling is contained by the \"null\" node."_s);
		}
		if (((int32_t)($nc(this->node)->compareDocumentPosition(nextSibling) & (uint32_t)(int32_t)$Node::DOCUMENT_POSITION_CONTAINED_BY)) == 0) {
			$throwNew($IllegalArgumentException, "Cannot create a DOMResult when the nextSibling is not contained by the node."_s);
		}
	}
	$set(this, nextSibling, nextSibling);
}

$Node* DOMResult::getNextSibling() {
	return this->nextSibling;
}

void DOMResult::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

$String* DOMResult::getSystemId() {
	return this->systemId;
}

DOMResult::DOMResult() {
}

void clinit$DOMResult($Class* class$) {
	$assignStatic(DOMResult::FEATURE, "http://javax.xml.transform.dom.DOMResult/feature"_s);
}

$Class* DOMResult::load$($String* name, bool initialize) {
	$loadClass(DOMResult, name, initialize, &_DOMResult_ClassInfo_, clinit$DOMResult, allocate$DOMResult);
	return class$;
}

$Class* DOMResult::class$ = nullptr;

			} // dom
		} // transform
	} // xml
} // javax