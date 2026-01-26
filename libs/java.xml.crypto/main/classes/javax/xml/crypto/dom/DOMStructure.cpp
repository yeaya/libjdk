#include <javax/xml/crypto/dom/DOMStructure.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

$FieldInfo _DOMStructure_FieldInfo_[] = {
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(DOMStructure, node)},
	{}
};

$MethodInfo _DOMStructure_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMStructure, init$, void, $Node*)},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMStructure, getNode, $Node*)},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMStructure, isFeatureSupported, bool, $String*)},
	{}
};

$ClassInfo _DOMStructure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dom.DOMStructure",
	"java.lang.Object",
	"javax.xml.crypto.XMLStructure",
	_DOMStructure_FieldInfo_,
	_DOMStructure_MethodInfo_
};

$Object* allocate$DOMStructure($Class* clazz) {
	return $of($alloc(DOMStructure));
}

void DOMStructure::init$($Node* node) {
	if (node == nullptr) {
		$throwNew($NullPointerException, "node cannot be null"_s);
	}
	$set(this, node, node);
}

$Node* DOMStructure::getNode() {
	return this->node;
}

bool DOMStructure::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

DOMStructure::DOMStructure() {
}

$Class* DOMStructure::load$($String* name, bool initialize) {
	$loadClass(DOMStructure, name, initialize, &_DOMStructure_ClassInfo_, allocate$DOMStructure);
	return class$;
}

$Class* DOMStructure::class$ = nullptr;

			} // dom
		} // crypto
	} // xml
} // javax