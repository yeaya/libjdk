#include <com/sun/org/apache/xerces/internal/util/DOMInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/NoSuchMethodError.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DOMInputSource_FieldInfo_[] = {
	{"fNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMInputSource, fNode)},
	{}
};

$MethodInfo _DOMInputSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMInputSource, init$, void)},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMInputSource, init$, void, $Node*)},
	{"<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMInputSource, init$, void, $Node*, $String*)},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $method(DOMInputSource, getNode, $Node*)},
	{"getSystemIdFromNode", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMInputSource, getSystemIdFromNode, $String*, $Node*)},
	{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMInputSource, setNode, void, $Node*)},
	{}
};

$ClassInfo _DOMInputSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DOMInputSource",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	nullptr,
	_DOMInputSource_FieldInfo_,
	_DOMInputSource_MethodInfo_
};

$Object* allocate$DOMInputSource($Class* clazz) {
	return $of($alloc(DOMInputSource));
}

void DOMInputSource::init$() {
	DOMInputSource::init$(nullptr);
}

void DOMInputSource::init$($Node* node) {
	$XMLInputSource::init$(nullptr, $(getSystemIdFromNode(node)), nullptr, false);
	$set(this, fNode, node);
}

void DOMInputSource::init$($Node* node, $String* systemId) {
	$XMLInputSource::init$(nullptr, systemId, nullptr, false);
	$set(this, fNode, node);
}

$Node* DOMInputSource::getNode() {
	return this->fNode;
}

void DOMInputSource::setNode($Node* node) {
	$set(this, fNode, node);
}

$String* DOMInputSource::getSystemIdFromNode($Node* node) {
	$init(DOMInputSource);
	if (node != nullptr) {
		try {
			return node->getBaseURI();
		} catch ($NoSuchMethodError& e) {
			return nullptr;
		} catch ($Exception& e) {
			return nullptr;
		}
	}
	return nullptr;
}

DOMInputSource::DOMInputSource() {
}

$Class* DOMInputSource::load$($String* name, bool initialize) {
	$loadClass(DOMInputSource, name, initialize, &_DOMInputSource_ClassInfo_, allocate$DOMInputSource);
	return class$;
}

$Class* DOMInputSource::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com