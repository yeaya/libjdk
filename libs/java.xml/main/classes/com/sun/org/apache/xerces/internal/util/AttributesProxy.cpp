#include <com/sun/org/apache/xerces/internal/util/AttributesProxy.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <org/xml/sax/AttributeList.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARED
#undef EMPTY_STRING
#undef TRUE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeList = ::org::xml::sax::AttributeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _AttributesProxy_FieldInfo_[] = {
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE, $field(AttributesProxy, fAttributes)},
	{}
};

$MethodInfo _AttributesProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $method(AttributesProxy, init$, void, $XMLAttributes*)},
	{"getAttributes", "()Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PUBLIC, $method(AttributesProxy, getAttributes, $XMLAttributes*)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getIndex, int32_t, $String*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getIndex, int32_t, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getLength, int32_t)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getLocalName, $String*, int32_t)},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getName, $String*, int32_t)},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getQName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getType, $String*, $String*)},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getType, $String*, $String*, $String*)},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getURI, $String*, int32_t)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getValue, $String*, $String*)},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, getValue, $String*, $String*, $String*)},
	{"isDeclared", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isDeclared, bool, int32_t)},
	{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isDeclared, bool, $String*)},
	{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isDeclared, bool, $String*, $String*)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isSpecified, bool, int32_t)},
	{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isSpecified, bool, $String*)},
	{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AttributesProxy, isSpecified, bool, $String*, $String*)},
	{"setAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $method(AttributesProxy, setAttributes, void, $XMLAttributes*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributesProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.AttributesProxy",
	"java.lang.Object",
	"org.xml.sax.AttributeList,org.xml.sax.ext.Attributes2",
	_AttributesProxy_FieldInfo_,
	_AttributesProxy_MethodInfo_
};

$Object* allocate$AttributesProxy($Class* clazz) {
	return $of($alloc(AttributesProxy));
}

int32_t AttributesProxy::hashCode() {
	 return this->$AttributeList::hashCode();
}

bool AttributesProxy::equals(Object$* arg0) {
	 return this->$AttributeList::equals(arg0);
}

$Object* AttributesProxy::clone() {
	 return this->$AttributeList::clone();
}

$String* AttributesProxy::toString() {
	 return this->$AttributeList::toString();
}

void AttributesProxy::finalize() {
	this->$AttributeList::finalize();
}

void AttributesProxy::init$($XMLAttributes* attributes) {
	$set(this, fAttributes, attributes);
}

void AttributesProxy::setAttributes($XMLAttributes* attributes) {
	$set(this, fAttributes, attributes);
}

$XMLAttributes* AttributesProxy::getAttributes() {
	return this->fAttributes;
}

int32_t AttributesProxy::getLength() {
	return $nc(this->fAttributes)->getLength();
}

$String* AttributesProxy::getQName(int32_t index) {
	return $nc(this->fAttributes)->getQName(index);
}

$String* AttributesProxy::getURI(int32_t index) {
	$var($String, uri, $nc(this->fAttributes)->getURI(index));
	$init($XMLSymbols);
	return uri != nullptr ? uri : $XMLSymbols::EMPTY_STRING;
}

$String* AttributesProxy::getLocalName(int32_t index) {
	return $nc(this->fAttributes)->getLocalName(index);
}

$String* AttributesProxy::getType(int32_t i) {
	return $nc(this->fAttributes)->getType(i);
}

$String* AttributesProxy::getType($String* name) {
	return $nc(this->fAttributes)->getType(name);
}

$String* AttributesProxy::getType($String* uri, $String* localName) {
	$init($XMLSymbols);
	return $nc(uri)->equals($XMLSymbols::EMPTY_STRING) ? $nc(this->fAttributes)->getType(nullptr, localName) : $nc(this->fAttributes)->getType(uri, localName);
}

$String* AttributesProxy::getValue(int32_t i) {
	return $nc(this->fAttributes)->getValue(i);
}

$String* AttributesProxy::getValue($String* name) {
	return $nc(this->fAttributes)->getValue(name);
}

$String* AttributesProxy::getValue($String* uri, $String* localName) {
	$init($XMLSymbols);
	return $nc(uri)->equals($XMLSymbols::EMPTY_STRING) ? $nc(this->fAttributes)->getValue(nullptr, localName) : $nc(this->fAttributes)->getValue(uri, localName);
}

int32_t AttributesProxy::getIndex($String* qName) {
	return $nc(this->fAttributes)->getIndex(qName);
}

int32_t AttributesProxy::getIndex($String* uri, $String* localPart) {
	$init($XMLSymbols);
	return $nc(uri)->equals($XMLSymbols::EMPTY_STRING) ? $nc(this->fAttributes)->getIndex(nullptr, localPart) : $nc(this->fAttributes)->getIndex(uri, localPart);
}

bool AttributesProxy::isDeclared(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= $nc(this->fAttributes)->getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, index);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AttributesProxy::isDeclared($String* qName) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getIndex(qName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, qName);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AttributesProxy::isDeclared($String* uri, $String* localName) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getIndex(uri, localName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, localName);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AttributesProxy::isSpecified(int32_t index) {
	if (index < 0 || index >= $nc(this->fAttributes)->getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, index);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

bool AttributesProxy::isSpecified($String* qName) {
	int32_t index = getIndex(qName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, qName);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

bool AttributesProxy::isSpecified($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, localName);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

$String* AttributesProxy::getName(int32_t i) {
	return $nc(this->fAttributes)->getQName(i);
}

AttributesProxy::AttributesProxy() {
}

$Class* AttributesProxy::load$($String* name, bool initialize) {
	$loadClass(AttributesProxy, name, initialize, &_AttributesProxy_ClassInfo_, allocate$AttributesProxy);
	return class$;
}

$Class* AttributesProxy::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com