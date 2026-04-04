#include <javax/xml/transform/dom/DOMSource.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

$String* DOMSource::FEATURE = nullptr;

void DOMSource::init$() {
}

void DOMSource::init$($Node* n) {
	setNode(n);
}

void DOMSource::init$($Node* node, $String* systemID) {
	setNode(node);
	setSystemId(systemID);
}

void DOMSource::setNode($Node* node) {
	$set(this, node, node);
}

$Node* DOMSource::getNode() {
	return this->node;
}

void DOMSource::setSystemId($String* systemID) {
	$set(this, systemID, systemID);
}

$String* DOMSource::getSystemId() {
	return this->systemID;
}

bool DOMSource::isEmpty() {
	return this->systemID == nullptr && (this->node == nullptr || !this->node->hasChildNodes());
}

DOMSource::DOMSource() {
}

void DOMSource::clinit$($Class* clazz) {
	$assignStatic(DOMSource::FEATURE, "http://javax.xml.transform.dom.DOMSource/feature"_s);
}

$Class* DOMSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSource, node)},
		{"systemID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMSource, systemID)},
		{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMSource, FEATURE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMSource, init$, void)},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMSource, init$, void, $Node*)},
		{"<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMSource, init$, void, $Node*, $String*)},
		{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMSource, getNode, $Node*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSource, getSystemId, $String*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(DOMSource, isEmpty, bool)},
		{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(DOMSource, setNode, void, $Node*)},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMSource, setSystemId, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.transform.dom.DOMSource",
		"java.lang.Object",
		"javax.xml.transform.Source",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DOMSource, name, initialize, &classInfo$$, DOMSource::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DOMSource);
	});
	return class$;
}

$Class* DOMSource::class$ = nullptr;

			} // dom
		} // transform
	} // xml
} // javax