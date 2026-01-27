#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NamedNodeMapImpl.h>

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _NamedNodeMapImpl_FieldInfo_[] = {
	{"attrs", "[Lorg/w3c/dom/Attr;", nullptr, 0, $field(NamedNodeMapImpl, attrs)},
	{}
};

$MethodInfo _NamedNodeMapImpl_MethodInfo_[] = {
	{"<init>", "([Lorg/w3c/dom/Attr;)V", nullptr, $PUBLIC, $method(NamedNodeMapImpl, init$, void, $AttrArray*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, getLength, int32_t)},
	{"getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, getNamedItem, $Node*, $String*)},
	{"getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, getNamedItemNS, $Node*, $String*, $String*)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, item, $Node*, int32_t)},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, removeNamedItem, $Node*, $String*), "org.w3c.dom.DOMException"},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, removeNamedItemNS, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, setNamedItem, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NamedNodeMapImpl, setNamedItemNS, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _NamedNodeMapImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NamedNodeMapImpl",
	"java.lang.Object",
	"org.w3c.dom.NamedNodeMap",
	_NamedNodeMapImpl_FieldInfo_,
	_NamedNodeMapImpl_MethodInfo_
};

$Object* allocate$NamedNodeMapImpl($Class* clazz) {
	return $of($alloc(NamedNodeMapImpl));
}

void NamedNodeMapImpl::init$($AttrArray* attrs) {
	$set(this, attrs, attrs);
}

$Node* NamedNodeMapImpl::getNamedItem($String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		if ($nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(name)) {
			return $nc(this->attrs)->get(i);
		}
	}
	return nullptr;
}

$Node* NamedNodeMapImpl::item(int32_t index) {
	if (index < 0 && index > getLength()) {
		return nullptr;
	}
	return $nc(this->attrs)->get(index);
}

int32_t NamedNodeMapImpl::getLength() {
	return $nc(this->attrs)->length;
}

$Node* NamedNodeMapImpl::getNamedItemNS($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		bool var$0 = $nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(localName);
		if (var$0 && $nc($($nc($nc(this->attrs)->get(i))->getNamespaceURI()))->equals(namespaceURI)) {
			return $nc(this->attrs)->get(i);
		}
	}
	return nullptr;
}

$Node* NamedNodeMapImpl::setNamedItemNS($Node* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* NamedNodeMapImpl::setNamedItem($Node* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* NamedNodeMapImpl::removeNamedItem($String* name) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* NamedNodeMapImpl::removeNamedItemNS($String* namespaceURI, $String* localName) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

NamedNodeMapImpl::NamedNodeMapImpl() {
}

$Class* NamedNodeMapImpl::load$($String* name, bool initialize) {
	$loadClass(NamedNodeMapImpl, name, initialize, &_NamedNodeMapImpl_ClassInfo_, allocate$NamedNodeMapImpl);
	return class$;
}

$Class* NamedNodeMapImpl::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com