#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl$IntVector.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void DeferredDocumentImpl$IntVector::init$() {
}

int32_t DeferredDocumentImpl$IntVector::size() {
	return this->size$;
}

int32_t DeferredDocumentImpl$IntVector::elementAt(int32_t index) {
	return $nc(this->data)->get(index);
}

void DeferredDocumentImpl$IntVector::addElement(int32_t element) {
	ensureCapacity(this->size$ + 1);
	$nc(this->data)->set(this->size$++, element);
}

void DeferredDocumentImpl$IntVector::removeAllElements() {
	this->size$ = 0;
}

void DeferredDocumentImpl$IntVector::ensureCapacity(int32_t newsize) {
	if (this->data == nullptr) {
		$set(this, data, $new($ints, newsize + 15));
	} else if (newsize > this->data->length) {
		$var($ints, newdata, $new($ints, newsize + 15));
		$System::arraycopy(this->data, 0, newdata, 0, this->data->length);
		$set(this, data, newdata);
	}
}

DeferredDocumentImpl$IntVector::DeferredDocumentImpl$IntVector() {
}

$Class* DeferredDocumentImpl$IntVector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "[I", nullptr, $PRIVATE, $field(DeferredDocumentImpl$IntVector, data)},
		{"size", "I", nullptr, $PRIVATE, $field(DeferredDocumentImpl$IntVector, size$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredDocumentImpl$IntVector, init$, void)},
		{"addElement", "(I)V", nullptr, $PUBLIC, $method(DeferredDocumentImpl$IntVector, addElement, void, int32_t)},
		{"elementAt", "(I)I", nullptr, $PUBLIC, $method(DeferredDocumentImpl$IntVector, elementAt, int32_t, int32_t)},
		{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(DeferredDocumentImpl$IntVector, ensureCapacity, void, int32_t)},
		{"removeAllElements", "()V", nullptr, $PUBLIC, $method(DeferredDocumentImpl$IntVector, removeAllElements, void)},
		{"size", "()I", nullptr, $PUBLIC, $method(DeferredDocumentImpl$IntVector, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$IntVector", "com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl", "IntVector", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$IntVector",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl"
	};
	$loadClass(DeferredDocumentImpl$IntVector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredDocumentImpl$IntVector);
	});
	return class$;
}

$Class* DeferredDocumentImpl$IntVector::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com