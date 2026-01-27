#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$AttributesProxy.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <org/xml/sax/AttributeList.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARED
#undef TRUE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeList = ::org::xml::sax::AttributeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractSAXParser$AttributesProxy_FieldInfo_[] = {
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PROTECTED, $field(AbstractSAXParser$AttributesProxy, fAttributes)},
	{}
};

$MethodInfo _AbstractSAXParser$AttributesProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractSAXParser$AttributesProxy, init$, void)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getIndex, int32_t, $String*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getIndex, int32_t, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getLength, int32_t)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getLocalName, $String*, int32_t)},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getName, $String*, int32_t)},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getQName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getType, $String*, $String*)},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getType, $String*, $String*, $String*)},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getURI, $String*, int32_t)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getValue, $String*, $String*)},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, getValue, $String*, $String*, $String*)},
	{"isDeclared", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isDeclared, bool, int32_t)},
	{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isDeclared, bool, $String*)},
	{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isDeclared, bool, $String*, $String*)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isSpecified, bool, int32_t)},
	{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isSpecified, bool, $String*)},
	{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$AttributesProxy, isSpecified, bool, $String*, $String*)},
	{"setAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $method(AbstractSAXParser$AttributesProxy, setAttributes, void, $XMLAttributes*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractSAXParser$AttributesProxy_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$AttributesProxy", "com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser", "AttributesProxy", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractSAXParser$AttributesProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$AttributesProxy",
	"java.lang.Object",
	"org.xml.sax.AttributeList,org.xml.sax.ext.Attributes2",
	_AbstractSAXParser$AttributesProxy_FieldInfo_,
	_AbstractSAXParser$AttributesProxy_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractSAXParser$AttributesProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser"
};

$Object* allocate$AbstractSAXParser$AttributesProxy($Class* clazz) {
	return $of($alloc(AbstractSAXParser$AttributesProxy));
}

int32_t AbstractSAXParser$AttributesProxy::hashCode() {
	 return this->$AttributeList::hashCode();
}

bool AbstractSAXParser$AttributesProxy::equals(Object$* arg0) {
	 return this->$AttributeList::equals(arg0);
}

$Object* AbstractSAXParser$AttributesProxy::clone() {
	 return this->$AttributeList::clone();
}

$String* AbstractSAXParser$AttributesProxy::toString() {
	 return this->$AttributeList::toString();
}

void AbstractSAXParser$AttributesProxy::finalize() {
	this->$AttributeList::finalize();
}

void AbstractSAXParser$AttributesProxy::init$() {
}

void AbstractSAXParser$AttributesProxy::setAttributes($XMLAttributes* attributes) {
	$set(this, fAttributes, attributes);
}

int32_t AbstractSAXParser$AttributesProxy::getLength() {
	return $nc(this->fAttributes)->getLength();
}

$String* AbstractSAXParser$AttributesProxy::getName(int32_t i) {
	return $nc(this->fAttributes)->getQName(i);
}

$String* AbstractSAXParser$AttributesProxy::getQName(int32_t index) {
	return $nc(this->fAttributes)->getQName(index);
}

$String* AbstractSAXParser$AttributesProxy::getURI(int32_t index) {
	$var($String, uri, $nc(this->fAttributes)->getURI(index));
	return uri != nullptr ? uri : ""_s;
}

$String* AbstractSAXParser$AttributesProxy::getLocalName(int32_t index) {
	return $nc(this->fAttributes)->getLocalName(index);
}

$String* AbstractSAXParser$AttributesProxy::getType(int32_t i) {
	return $nc(this->fAttributes)->getType(i);
}

$String* AbstractSAXParser$AttributesProxy::getType($String* name) {
	return $nc(this->fAttributes)->getType(name);
}

$String* AbstractSAXParser$AttributesProxy::getType($String* uri, $String* localName) {
	return $nc(uri)->equals(""_s) ? $nc(this->fAttributes)->getType(nullptr, localName) : $nc(this->fAttributes)->getType(uri, localName);
}

$String* AbstractSAXParser$AttributesProxy::getValue(int32_t i) {
	return $nc(this->fAttributes)->getValue(i);
}

$String* AbstractSAXParser$AttributesProxy::getValue($String* name) {
	return $nc(this->fAttributes)->getValue(name);
}

$String* AbstractSAXParser$AttributesProxy::getValue($String* uri, $String* localName) {
	return $nc(uri)->equals(""_s) ? $nc(this->fAttributes)->getValue(nullptr, localName) : $nc(this->fAttributes)->getValue(uri, localName);
}

int32_t AbstractSAXParser$AttributesProxy::getIndex($String* qName) {
	return $nc(this->fAttributes)->getIndex(qName);
}

int32_t AbstractSAXParser$AttributesProxy::getIndex($String* uri, $String* localPart) {
	return $nc(uri)->equals(""_s) ? $nc(this->fAttributes)->getIndex(nullptr, localPart) : $nc(this->fAttributes)->getIndex(uri, localPart);
}

bool AbstractSAXParser$AttributesProxy::isDeclared(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= $nc(this->fAttributes)->getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, index);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AbstractSAXParser$AttributesProxy::isDeclared($String* qName) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getIndex(qName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, qName);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AbstractSAXParser$AttributesProxy::isDeclared($String* uri, $String* localName) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getIndex(uri, localName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, localName);
	}
	$init($Boolean);
	$init($Constants);
	return $nc($Boolean::TRUE)->equals($($nc($($nc(this->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_DECLARED)));
}

bool AbstractSAXParser$AttributesProxy::isSpecified(int32_t index) {
	if (index < 0 || index >= $nc(this->fAttributes)->getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, index);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

bool AbstractSAXParser$AttributesProxy::isSpecified($String* qName) {
	int32_t index = getIndex(qName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, qName);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

bool AbstractSAXParser$AttributesProxy::isSpecified($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	if (index == -1) {
		$throwNew($IllegalArgumentException, localName);
	}
	return $nc(this->fAttributes)->isSpecified(index);
}

AbstractSAXParser$AttributesProxy::AbstractSAXParser$AttributesProxy() {
}

$Class* AbstractSAXParser$AttributesProxy::load$($String* name, bool initialize) {
	$loadClass(AbstractSAXParser$AttributesProxy, name, initialize, &_AbstractSAXParser$AttributesProxy_ClassInfo_, allocate$AbstractSAXParser$AttributesProxy);
	return class$;
}

$Class* AbstractSAXParser$AttributesProxy::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com