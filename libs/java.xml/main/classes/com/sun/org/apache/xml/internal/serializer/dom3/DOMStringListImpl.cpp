#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMStringListImpl.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOMStringListImpl_FieldInfo_[] = {
	{"fStrings", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(DOMStringListImpl, fStrings)},
	{}
};

$MethodInfo _DOMStringListImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMStringListImpl, init$, void)},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", 0, $method(DOMStringListImpl, init$, void, $List*)},
	{"<init>", "([Ljava/lang/String;)V", nullptr, 0, $method(DOMStringListImpl, init$, void, $StringArray*)},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMStringListImpl, add, void, $String*)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, contains, bool, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, getLength, int32_t)},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, item, $String*, int32_t)},
	{}
};

$ClassInfo _DOMStringListImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOMStringListImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMStringList",
	_DOMStringListImpl_FieldInfo_,
	_DOMStringListImpl_MethodInfo_
};

$Object* allocate$DOMStringListImpl($Class* clazz) {
	return $of($alloc(DOMStringListImpl));
}

void DOMStringListImpl::init$() {
	$set(this, fStrings, $new($ArrayList));
}

void DOMStringListImpl::init$($List* params) {
	$set(this, fStrings, params);
}

void DOMStringListImpl::init$($StringArray* params) {
	$set(this, fStrings, $new($ArrayList));
	if (params != nullptr) {
		for (int32_t i = 0; i < params->length; ++i) {
			$nc(this->fStrings)->add(params->get(i));
		}
	}
}

$String* DOMStringListImpl::item(int32_t index) {
	try {
		return $cast($String, $nc(this->fStrings)->get(index));
	} catch ($IndexOutOfBoundsException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t DOMStringListImpl::getLength() {
	return $nc(this->fStrings)->size();
}

bool DOMStringListImpl::contains($String* param) {
	return $nc(this->fStrings)->contains(param);
}

void DOMStringListImpl::add($String* param) {
	$nc(this->fStrings)->add(param);
}

DOMStringListImpl::DOMStringListImpl() {
}

$Class* DOMStringListImpl::load$($String* name, bool initialize) {
	$loadClass(DOMStringListImpl, name, initialize, &_DOMStringListImpl_ClassInfo_, allocate$DOMStringListImpl);
	return class$;
}

$Class* DOMStringListImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com