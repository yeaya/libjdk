#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperties.h>
#include <java/lang/ClassCastException.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperty.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $SignatureProperties = ::javax::xml::crypto::dsig::SignatureProperties;
using $SignatureProperty = ::javax::xml::crypto::dsig::SignatureProperty;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMSignatureProperty = ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperty;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

bool DOMSignatureProperties::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMSignatureProperties::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMSignatureProperties::toString() {
	 return this->$DOMStructure::toString();
}

void DOMSignatureProperties::finalize() {
	this->$DOMStructure::finalize();
}

void DOMSignatureProperties::init$($List* properties, $String* id) {
	$useLocalObjectStack();
	$DOMStructure::init$();
	if (properties == nullptr) {
		$throwNew($NullPointerException, "properties cannot be null"_s);
	} else if (properties->isEmpty()) {
		$throwNew($IllegalArgumentException, "properties cannot be empty"_s);
	} else {
		$set(this, properties, $Collections::unmodifiableList($$new($ArrayList, properties)));
		for (int32_t i = 0, size = $nc(this->properties)->size(); i < size; ++i) {
			if (!($instanceOf($SignatureProperty, $(this->properties->get(i))))) {
				$throwNew($ClassCastException, $$str({"properties["_s, $$str(i), "] is not a valid type"_s}));
			}
		}
	}
	$set(this, id, id);
}

void DOMSignatureProperties::init$($Element* propsElem) {
	$useLocalObjectStack();
	$DOMStructure::init$();
	$var($Attr, attr, $nc(propsElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		propsElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$var($List, newProperties, $new($ArrayList));
	$var($Node, firstChild, propsElem->getFirstChild());
	while (firstChild != nullptr) {
		if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
			$var($String, name, firstChild->getLocalName());
			$var($String, namespace$, firstChild->getNamespaceURI());
			bool var$0 = !"SignatureProperty"_s->equals(name);
			$init($XMLSignature);
			if (var$0 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
				$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, name, ", expected SignatureProperty"_s}));
			}
			newProperties->add($$new($DOMSignatureProperty, $cast($Element, firstChild)));
		}
		$assign(firstChild, firstChild->getNextSibling());
	}
	if (newProperties->isEmpty()) {
		$throwNew($MarshalException, "properties cannot be empty"_s);
	} else {
		$set(this, properties, $Collections::unmodifiableList(newProperties));
	}
}

$List* DOMSignatureProperties::getProperties() {
	return this->properties;
}

$String* DOMSignatureProperties::getId() {
	return this->id;
}

void DOMSignatureProperties::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalObjectStack();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, propsElem, $DOMUtils::createElement(ownerDoc, "SignatureProperties"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttributeID(propsElem, "Id"_s, this->id);
	{
		$var($Iterator, i$, $nc(this->properties)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SignatureProperty, property, $cast($SignatureProperty, i$->next()));
			{
				$nc($cast($DOMSignatureProperty, property))->marshal(propsElem, dsPrefix, context);
			}
		}
	}
	$nc(parent)->appendChild(propsElem);
}

bool DOMSignatureProperties::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($SignatureProperties, o))) {
		return false;
	}
	$var($SignatureProperties, osp, $cast($SignatureProperties, o));
	bool idsEqual = this->id == nullptr ? $nc(osp)->getId() == nullptr : this->id->equals($($nc(osp)->getId()));
	return $nc(this->properties)->equals($($nc(osp)->getProperties())) && idsEqual;
}

int32_t DOMSignatureProperties::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + this->id->hashCode();
	}
	result = 31 * result + $nc(this->properties)->hashCode();
	return result;
}

DOMSignatureProperties::DOMSignatureProperties() {
}

$Class* DOMSignatureProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMSignatureProperties, id)},
		{"properties", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/SignatureProperty;>;", $PRIVATE | $FINAL, $field(DOMSignatureProperties, properties)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<+Ljavax/xml/crypto/dsig/SignatureProperty;>;Ljava/lang/String;)V", $PUBLIC, $method(DOMSignatureProperties, init$, void, $List*, $String*)},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(DOMSignatureProperties, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DOMSignatureProperties, equals, bool, Object$*)},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSignatureProperties, getId, $String*)},
		{"getProperties", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/SignatureProperty;>;", $PUBLIC, $virtualMethod(DOMSignatureProperties, getProperties, $List*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DOMSignatureProperties, hashCode, int32_t)},
		{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
		{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, $virtualMethod(DOMSignatureProperties, marshal, void, $Node*, $String*, $DOMCryptoContext*), "javax.xml.crypto.MarshalException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMSignatureProperties",
		"org.jcp.xml.dsig.internal.dom.DOMStructure",
		"javax.xml.crypto.dsig.SignatureProperties",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DOMSignatureProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMSignatureProperties));
	});
	return class$;
}

$Class* DOMSignatureProperties::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org