#include <com/sun/org/apache/xerces/internal/dom/DOMStringListImpl.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMStringListImpl_FieldInfo_[] = {
	{"fStrings", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DOMStringListImpl, fStrings)},
	{}
};

$MethodInfo _DOMStringListImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMStringListImpl, init$, void)},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(DOMStringListImpl, init$, void, $List*)},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, add, void, $String*)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, contains, bool, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, getLength, int32_t)},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMStringListImpl, item, $String*, int32_t)},
	{}
};

$ClassInfo _DOMStringListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMStringListImpl",
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

$String* DOMStringListImpl::item(int32_t index) {
	int32_t length = getLength();
	if (index >= 0 && index < length) {
		return $cast($String, $nc(this->fStrings)->get(index));
	}
	return nullptr;
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

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com