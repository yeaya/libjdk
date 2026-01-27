#include <com/sun/org/apache/xml/internal/utils/AttList.h>

#include <com/sun/org/apache/xml/internal/utils/DOM2Helper.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $DOM2Helper = ::com::sun::org::apache::xml::internal::utils::DOM2Helper;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _AttList_FieldInfo_[] = {
	{"m_attrs", "Lorg/w3c/dom/NamedNodeMap;", nullptr, 0, $field(AttList, m_attrs)},
	{"m_lastIndex", "I", nullptr, 0, $field(AttList, m_lastIndex)},
	{}
};

$MethodInfo _AttList_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/NamedNodeMap;)V", nullptr, $PUBLIC, $method(AttList, init$, void, $NamedNodeMap*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AttList, getIndex, int32_t, $String*, $String*)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AttList, getIndex, int32_t, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AttList, getLength, int32_t)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getLocalName, $String*, int32_t)},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getQName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getType, $String*, $String*)},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getType, $String*, $String*, $String*)},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getURI, $String*, int32_t)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getValue, $String*, $String*)},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttList, getValue, $String*, $String*, $String*)},
	{}
};

$ClassInfo _AttList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.AttList",
	"java.lang.Object",
	"org.xml.sax.Attributes",
	_AttList_FieldInfo_,
	_AttList_MethodInfo_
};

$Object* allocate$AttList($Class* clazz) {
	return $of($alloc(AttList));
}

void AttList::init$($NamedNodeMap* attrs) {
	$set(this, m_attrs, attrs);
	this->m_lastIndex = $nc(this->m_attrs)->getLength() - 1;
}

int32_t AttList::getLength() {
	return $nc(this->m_attrs)->getLength();
}

$String* AttList::getURI(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, ns, $DOM2Helper::getNamespaceOfNode(($cast($Attr, $($nc(this->m_attrs)->item(index))))));
	if (nullptr == ns) {
		$assign(ns, ""_s);
	}
	return ns;
}

$String* AttList::getLocalName(int32_t index) {
	return $DOM2Helper::getLocalNameOfNode(($cast($Attr, $($nc(this->m_attrs)->item(index)))));
}

$String* AttList::getQName(int32_t i) {
	return $nc(($cast($Attr, $($nc(this->m_attrs)->item(i)))))->getName();
}

$String* AttList::getType(int32_t i) {
	return "CDATA"_s;
}

$String* AttList::getValue(int32_t i) {
	return $nc(($cast($Attr, $($nc(this->m_attrs)->item(i)))))->getValue();
}

$String* AttList::getType($String* name) {
	return "CDATA"_s;
}

$String* AttList::getType($String* uri, $String* localName) {
	return "CDATA"_s;
}

$String* AttList::getValue($String* name) {
	$var($Attr, attr, $cast($Attr, $nc(this->m_attrs)->getNamedItem(name)));
	return (nullptr != attr) ? $nc(attr)->getValue() : ($String*)nullptr;
}

$String* AttList::getValue($String* uri, $String* localName) {
	$var($Node, a, $nc(this->m_attrs)->getNamedItemNS(uri, localName));
	return (a == nullptr) ? ($String*)nullptr : $nc(a)->getNodeValue();
}

int32_t AttList::getIndex($String* uri, $String* localPart) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(this->m_attrs)->getLength() - 1; i >= 0; --i) {
		$var($Node, a, $nc(this->m_attrs)->item(i));
		$var($String, u, $nc(a)->getNamespaceURI());
		bool var$0 = (u == nullptr ? uri == nullptr : $nc(u)->equals(uri));
		if (var$0 && $nc($(a->getLocalName()))->equals(localPart)) {
			return i;
		}
	}
	return -1;
}

int32_t AttList::getIndex($String* qName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(this->m_attrs)->getLength() - 1; i >= 0; --i) {
		$var($Node, a, $nc(this->m_attrs)->item(i));
		if ($nc($($nc(a)->getNodeName()))->equals(qName)) {
			return i;
		}
	}
	return -1;
}

AttList::AttList() {
}

$Class* AttList::load$($String* name, bool initialize) {
	$loadClass(AttList, name, initialize, &_AttList_ClassInfo_, allocate$AttList);
	return class$;
}

$Class* AttList::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com