#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationListImpl.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMImplementationListImpl_FieldInfo_[] = {
	{"fImplementations", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/DOMImplementation;>;", $PRIVATE, $field(DOMImplementationListImpl, fImplementations)},
	{}
};

$MethodInfo _DOMImplementationListImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMImplementationListImpl, init$, void)},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lorg/w3c/dom/DOMImplementation;>;)V", $PUBLIC, $method(DOMImplementationListImpl, init$, void, $List*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DOMImplementationListImpl, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationListImpl, item, $DOMImplementation*, int32_t)},
	{}
};

$ClassInfo _DOMImplementationListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationListImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementationList",
	_DOMImplementationListImpl_FieldInfo_,
	_DOMImplementationListImpl_MethodInfo_
};

$Object* allocate$DOMImplementationListImpl($Class* clazz) {
	return $of($alloc(DOMImplementationListImpl));
}

void DOMImplementationListImpl::init$() {
	$set(this, fImplementations, $new($ArrayList));
}

void DOMImplementationListImpl::init$($List* params) {
	$set(this, fImplementations, params);
}

$DOMImplementation* DOMImplementationListImpl::item(int32_t index) {
	try {
		return $cast($DOMImplementation, $nc(this->fImplementations)->get(index));
	} catch ($IndexOutOfBoundsException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t DOMImplementationListImpl::getLength() {
	return $nc(this->fImplementations)->size();
}

DOMImplementationListImpl::DOMImplementationListImpl() {
}

$Class* DOMImplementationListImpl::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationListImpl, name, initialize, &_DOMImplementationListImpl_ClassInfo_, allocate$DOMImplementationListImpl);
	return class$;
}

$Class* DOMImplementationListImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com