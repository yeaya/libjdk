#include <org/xml/sax/helpers/AttributeListImpl.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/xml/sax/AttributeList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ArrayList = ::java::util::ArrayList;
using $AttributeList = ::org::xml::sax::AttributeList;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

void AttributeListImpl::init$() {
	$set(this, names, $new($ArrayList));
	$set(this, types, $new($ArrayList));
	$set(this, values, $new($ArrayList));
}

void AttributeListImpl::init$($AttributeList* atts) {
	$set(this, names, $new($ArrayList));
	$set(this, types, $new($ArrayList));
	$set(this, values, $new($ArrayList));
	setAttributeList(atts);
}

void AttributeListImpl::setAttributeList($AttributeList* atts) {
	$useLocalObjectStack();
	int32_t count = $nc(atts)->getLength();
	clear();
	for (int32_t i = 0; i < count; ++i) {
		$var($String, var$0, atts->getName(i));
		$var($String, var$1, atts->getType(i));
		addAttribute(var$0, var$1, $(atts->getValue(i)));
	}
}

void AttributeListImpl::addAttribute($String* name, $String* type, $String* value) {
	$nc(this->names)->add(name);
	$nc(this->types)->add(type);
	$nc(this->values)->add(value);
}

void AttributeListImpl::removeAttribute($String* name) {
	int32_t i = $nc(this->names)->indexOf(name);
	if (i >= 0) {
		this->names->remove(i);
		$nc(this->types)->remove(i);
		$nc(this->values)->remove(i);
	}
}

void AttributeListImpl::clear() {
	$nc(this->names)->clear();
	$nc(this->types)->clear();
	$nc(this->values)->clear();
}

int32_t AttributeListImpl::getLength() {
	return $nc(this->names)->size();
}

$String* AttributeListImpl::getName(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->names)->get(i));
	} catch ($IndexOutOfBoundsException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getType(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->types)->get(i));
	} catch ($IndexOutOfBoundsException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getValue(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->values)->get(i));
	} catch ($IndexOutOfBoundsException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getType($String* name) {
	return getType($nc(this->names)->indexOf(name));
}

$String* AttributeListImpl::getValue($String* name) {
	return getValue($nc(this->names)->indexOf(name));
}

AttributeListImpl::AttributeListImpl() {
}

$Class* AttributeListImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"names", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, names)},
		{"types", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, types)},
		{"values", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, values)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeListImpl, init$, void)},
		{"<init>", "(Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $method(AttributeListImpl, init$, void, $AttributeList*)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, addAttribute, void, $String*, $String*, $String*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, clear, void)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getLength, int32_t)},
		{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getName, $String*, int32_t)},
		{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getType, $String*, int32_t)},
		{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getType, $String*, $String*)},
		{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getValue, $String*, int32_t)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, getValue, $String*, $String*)},
		{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, removeAttribute, void, $String*)},
		{"setAttributeList", "(Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $virtualMethod(AttributeListImpl, setAttributeList, void, $AttributeList*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.5"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.helpers.AttributeListImpl",
		"java.lang.Object",
		"org.xml.sax.AttributeList",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AttributeListImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeListImpl);
	});
	return class$;
}

$Class* AttributeListImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org