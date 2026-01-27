#include <org/xml/sax/ext/Attributes2Impl.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ext/Attributes2.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $Attributes2 = ::org::xml::sax::ext::Attributes2;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$FieldInfo _Attributes2Impl_FieldInfo_[] = {
	{"declared", "[Z", nullptr, $PRIVATE, $field(Attributes2Impl, declared)},
	{"specified", "[Z", nullptr, $PRIVATE, $field(Attributes2Impl, specified)},
	{}
};

$MethodInfo _Attributes2Impl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"*getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"*getLength", "()I", nullptr, $PUBLIC},
	{"*getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Attributes2Impl, init$, void)},
	{"<init>", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $method(Attributes2Impl, init$, void, $Attributes*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, addAttribute, void, $String*, $String*, $String*, $String*, $String*)},
	{"isDeclared", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isDeclared, bool, int32_t)},
	{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isDeclared, bool, $String*, $String*)},
	{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isDeclared, bool, $String*)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isSpecified, bool, int32_t)},
	{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isSpecified, bool, $String*, $String*)},
	{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, isSpecified, bool, $String*)},
	{"removeAttribute", "(I)V", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, removeAttribute, void, int32_t)},
	{"setAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, setAttributes, void, $Attributes*)},
	{"setDeclared", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, setDeclared, void, int32_t, bool)},
	{"setSpecified", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(Attributes2Impl, setSpecified, void, int32_t, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attributes2Impl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.ext.Attributes2Impl",
	"org.xml.sax.helpers.AttributesImpl",
	"org.xml.sax.ext.Attributes2",
	_Attributes2Impl_FieldInfo_,
	_Attributes2Impl_MethodInfo_
};

$Object* allocate$Attributes2Impl($Class* clazz) {
	return $of($alloc(Attributes2Impl));
}

int32_t Attributes2Impl::getLength() {
	 return this->$AttributesImpl::getLength();
}

$String* Attributes2Impl::getURI(int32_t index) {
	 return this->$AttributesImpl::getURI(index);
}

$String* Attributes2Impl::getLocalName(int32_t index) {
	 return this->$AttributesImpl::getLocalName(index);
}

$String* Attributes2Impl::getQName(int32_t index) {
	 return this->$AttributesImpl::getQName(index);
}

$String* Attributes2Impl::getType(int32_t index) {
	 return this->$AttributesImpl::getType(index);
}

$String* Attributes2Impl::getValue(int32_t index) {
	 return this->$AttributesImpl::getValue(index);
}

int32_t Attributes2Impl::getIndex($String* uri, $String* localName) {
	 return this->$AttributesImpl::getIndex(uri, localName);
}

int32_t Attributes2Impl::getIndex($String* qName) {
	 return this->$AttributesImpl::getIndex(qName);
}

$String* Attributes2Impl::getType($String* uri, $String* localName) {
	 return this->$AttributesImpl::getType(uri, localName);
}

$String* Attributes2Impl::getType($String* qName) {
	 return this->$AttributesImpl::getType(qName);
}

$String* Attributes2Impl::getValue($String* uri, $String* localName) {
	 return this->$AttributesImpl::getValue(uri, localName);
}

$String* Attributes2Impl::getValue($String* qName) {
	 return this->$AttributesImpl::getValue(qName);
}

int32_t Attributes2Impl::hashCode() {
	 return this->$AttributesImpl::hashCode();
}

bool Attributes2Impl::equals(Object$* arg0) {
	 return this->$AttributesImpl::equals(arg0);
}

$Object* Attributes2Impl::clone() {
	 return this->$AttributesImpl::clone();
}

$String* Attributes2Impl::toString() {
	 return this->$AttributesImpl::toString();
}

void Attributes2Impl::finalize() {
	this->$AttributesImpl::finalize();
}

void Attributes2Impl::init$() {
	$AttributesImpl::init$();
	$set(this, specified, nullptr);
	$set(this, declared, nullptr);
}

void Attributes2Impl::init$($Attributes* atts) {
	$AttributesImpl::init$(atts);
}

bool Attributes2Impl::isDeclared(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"No attribute at index: "_s, $$str(index)}));
	}
	return $nc(this->declared)->get(index);
}

bool Attributes2Impl::isDeclared($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	if (index < 0) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: local="_s, localName, ", namespace="_s, uri}));
	}
	return $nc(this->declared)->get(index);
}

bool Attributes2Impl::isDeclared($String* qName) {
	int32_t index = getIndex(qName);
	if (index < 0) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: "_s, qName}));
	}
	return $nc(this->declared)->get(index);
}

bool Attributes2Impl::isSpecified(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"No attribute at index: "_s, $$str(index)}));
	}
	return $nc(this->specified)->get(index);
}

bool Attributes2Impl::isSpecified($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	if (index < 0) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: local="_s, localName, ", namespace="_s, uri}));
	}
	return $nc(this->specified)->get(index);
}

bool Attributes2Impl::isSpecified($String* qName) {
	int32_t index = getIndex(qName);
	if (index < 0) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: "_s, qName}));
	}
	return $nc(this->specified)->get(index);
}

void Attributes2Impl::setAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(atts)->getLength();
	$AttributesImpl::setAttributes(atts);
	$set(this, declared, $new($booleans, length));
	$set(this, specified, $new($booleans, length));
	if ($instanceOf($Attributes2, atts)) {
		$var($Attributes2, a2, $cast($Attributes2, atts));
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->declared)->set(i, a2->isDeclared(i));
			$nc(this->specified)->set(i, a2->isSpecified(i));
		}
	} else {
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->declared)->set(i, !"CDATA"_s->equals($(atts->getType(i))));
			$nc(this->specified)->set(i, true);
		}
	}
}

void Attributes2Impl::addAttribute($String* uri, $String* localName, $String* qName, $String* type, $String* value) {
	$AttributesImpl::addAttribute(uri, localName, qName, type, value);
	int32_t length = getLength();
	if (this->specified == nullptr) {
		$set(this, specified, $new($booleans, length));
		$set(this, declared, $new($booleans, length));
	} else if (length > $nc(this->specified)->length) {
		$var($booleans, newFlags, nullptr);
		$assign(newFlags, $new($booleans, length));
		$System::arraycopy(this->declared, 0, newFlags, 0, $nc(this->declared)->length);
		$set(this, declared, newFlags);
		$assign(newFlags, $new($booleans, length));
		$System::arraycopy(this->specified, 0, newFlags, 0, $nc(this->specified)->length);
		$set(this, specified, newFlags);
	}
	$nc(this->specified)->set(length - 1, true);
	$nc(this->declared)->set(length - 1, !"CDATA"_s->equals(type));
}

void Attributes2Impl::removeAttribute(int32_t index) {
	int32_t origMax = getLength() - 1;
	$AttributesImpl::removeAttribute(index);
	if (index != origMax) {
		$System::arraycopy(this->declared, index + 1, this->declared, index, origMax - index);
		$System::arraycopy(this->specified, index + 1, this->specified, index, origMax - index);
	}
}

void Attributes2Impl::setDeclared(int32_t index, bool value) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"No attribute at index: "_s, $$str(index)}));
	}
	$nc(this->declared)->set(index, value);
}

void Attributes2Impl::setSpecified(int32_t index, bool value) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getLength()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"No attribute at index: "_s, $$str(index)}));
	}
	$nc(this->specified)->set(index, value);
}

Attributes2Impl::Attributes2Impl() {
}

$Class* Attributes2Impl::load$($String* name, bool initialize) {
	$loadClass(Attributes2Impl, name, initialize, &_Attributes2Impl_ClassInfo_, allocate$Attributes2Impl);
	return class$;
}

$Class* Attributes2Impl::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org