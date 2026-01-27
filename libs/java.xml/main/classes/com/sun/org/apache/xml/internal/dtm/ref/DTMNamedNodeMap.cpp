#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap$DTMException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NO_MODIFICATION_ALLOWED_ERR
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMNamedNodeMap$DTMException = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap$DTMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMNamedNodeMap_FieldInfo_[] = {
	{"dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, 0, $field(DTMNamedNodeMap, dtm)},
	{"element", "I", nullptr, 0, $field(DTMNamedNodeMap, element)},
	{"m_count", "S", nullptr, 0, $field(DTMNamedNodeMap, m_count)},
	{}
};

$MethodInfo _DTMNamedNodeMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;I)V", nullptr, $PUBLIC, $method(DTMNamedNodeMap, init$, void, $DTM*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, getLength, int32_t)},
	{"getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, getNamedItem, $Node*, $String*)},
	{"getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, getNamedItemNS, $Node*, $String*, $String*)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, item, $Node*, int32_t)},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, removeNamedItem, $Node*, $String*)},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, removeNamedItemNS, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, setNamedItem, $Node*, $Node*)},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNamedNodeMap, setNamedItemNS, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$InnerClassInfo _DTMNamedNodeMap_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap$DTMException", "com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap", "DTMException", $PUBLIC},
	{}
};

$ClassInfo _DTMNamedNodeMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap",
	"java.lang.Object",
	"org.w3c.dom.NamedNodeMap",
	_DTMNamedNodeMap_FieldInfo_,
	_DTMNamedNodeMap_MethodInfo_,
	nullptr,
	nullptr,
	_DTMNamedNodeMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap$DTMException"
};

$Object* allocate$DTMNamedNodeMap($Class* clazz) {
	return $of($alloc(DTMNamedNodeMap));
}

void DTMNamedNodeMap::init$($DTM* dtm, int32_t element) {
	this->m_count = (int16_t)-1;
	$set(this, dtm, dtm);
	this->element = element;
}

int32_t DTMNamedNodeMap::getLength() {
	if (this->m_count == -1) {
		int16_t count = (int16_t)0;
		for (int32_t n = $nc(this->dtm)->getFirstAttribute(this->element); n != -1; n = $nc(this->dtm)->getNextAttribute(n)) {
			++count;
		}
		this->m_count = count;
	}
	return (int32_t)this->m_count;
}

$Node* DTMNamedNodeMap::getNamedItem($String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t n = $nc(this->dtm)->getFirstAttribute(this->element); n != $DTM::NULL; n = $nc(this->dtm)->getNextAttribute(n)) {
		if ($nc($($nc(this->dtm)->getNodeName(n)))->equals(name)) {
			return $nc(this->dtm)->getNode(n);
		}
	}
	return nullptr;
}

$Node* DTMNamedNodeMap::item(int32_t i) {
	int32_t count = 0;
	for (int32_t n = $nc(this->dtm)->getFirstAttribute(this->element); n != -1; n = $nc(this->dtm)->getNextAttribute(n)) {
		if (count == i) {
			return $nc(this->dtm)->getNode(n);
		} else {
			++count;
		}
	}
	return nullptr;
}

$Node* DTMNamedNodeMap::setNamedItem($Node* newNode) {
	$throwNew($DTMNamedNodeMap$DTMException, this, $DTMNamedNodeMap$DTMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNamedNodeMap::removeNamedItem($String* name) {
	$throwNew($DTMNamedNodeMap$DTMException, this, $DTMNamedNodeMap$DTMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNamedNodeMap::getNamedItemNS($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	$var($Node, retNode, nullptr);
	for (int32_t n = $nc(this->dtm)->getFirstAttribute(this->element); n != $DTM::NULL; n = $nc(this->dtm)->getNextAttribute(n)) {
		if ($nc(localName)->equals($($nc(this->dtm)->getLocalName(n)))) {
			$var($String, nsURI, $nc(this->dtm)->getNamespaceURI(n));
			if ((namespaceURI == nullptr && nsURI == nullptr) || (namespaceURI != nullptr && namespaceURI->equals(nsURI))) {
				$assign(retNode, $nc(this->dtm)->getNode(n));
				break;
			}
		}
	}
	return retNode;
}

$Node* DTMNamedNodeMap::setNamedItemNS($Node* arg) {
	$throwNew($DTMNamedNodeMap$DTMException, this, $DTMNamedNodeMap$DTMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNamedNodeMap::removeNamedItemNS($String* namespaceURI, $String* localName) {
	$throwNew($DTMNamedNodeMap$DTMException, this, $DTMNamedNodeMap$DTMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

DTMNamedNodeMap::DTMNamedNodeMap() {
}

$Class* DTMNamedNodeMap::load$($String* name, bool initialize) {
	$loadClass(DTMNamedNodeMap, name, initialize, &_DTMNamedNodeMap_ClassInfo_, allocate$DTMNamedNodeMap);
	return class$;
}

$Class* DTMNamedNodeMap::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com