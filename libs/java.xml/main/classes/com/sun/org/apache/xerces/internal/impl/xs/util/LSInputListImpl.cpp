#include <com/sun/org/apache/xerces/internal/impl/xs/util/LSInputListImpl.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

#undef EMPTY_LIST

using $LSInputArray = $Array<::org::w3c::dom::ls::LSInput>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _LSInputListImpl_FieldInfo_[] = {
	{"EMPTY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/LSInputListImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LSInputListImpl, EMPTY_LIST)},
	{"fArray", "[Lorg/w3c/dom/ls/LSInput;", nullptr, $PRIVATE | $FINAL, $field(LSInputListImpl, fArray)},
	{"fLength", "I", nullptr, $PRIVATE | $FINAL, $field(LSInputListImpl, fLength)},
	{}
};

$MethodInfo _LSInputListImpl_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"*addAll", "(ILjava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"<init>", "([Lorg/w3c/dom/ls/LSInput;I)V", nullptr, $PUBLIC, $method(LSInputListImpl, init$, void, $LSInputArray*, int32_t)},
	{"get", "(I)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, item, $LSInput*, int32_t)},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"*listIterator", "()Ljava/util/ListIterator;", nullptr, $PUBLIC},
	{"*listIterator", "(I)Ljava/util/ListIterator;", nullptr, $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/UnaryOperator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LSInputListImpl, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray0", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(LSInputListImpl, toArray0, void, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LSInputListImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.LSInputListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.LSInputList",
	_LSInputListImpl_FieldInfo_,
	_LSInputListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Lorg/w3c/dom/ls/LSInput;>;Lcom/sun/org/apache/xerces/internal/xs/LSInputList;"
};

$Object* allocate$LSInputListImpl($Class* clazz) {
	return $of($alloc(LSInputListImpl));
}

bool LSInputListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* LSInputListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void LSInputListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* LSInputListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t LSInputListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t LSInputListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void LSInputListImpl::clear() {
	this->$AbstractList::clear();
}

bool LSInputListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* LSInputListImpl::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* LSInputListImpl::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* LSInputListImpl::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* LSInputListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool LSInputListImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t LSInputListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool LSInputListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool LSInputListImpl::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

bool LSInputListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool LSInputListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool LSInputListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool LSInputListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool LSInputListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* LSInputListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* LSInputListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool LSInputListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* LSInputListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* LSInputListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* LSInputListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void LSInputListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* LSInputListImpl::clone() {
	 return this->$AbstractList::clone();
}

void LSInputListImpl::finalize() {
	this->$AbstractList::finalize();
}

void LSInputListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void LSInputListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

LSInputListImpl* LSInputListImpl::EMPTY_LIST = nullptr;

void LSInputListImpl::init$($LSInputArray* array, int32_t length) {
	$AbstractList::init$();
	$set(this, fArray, array);
	this->fLength = length;
}

int32_t LSInputListImpl::getLength() {
	return this->fLength;
}

$LSInput* LSInputListImpl::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc(this->fArray)->get(index);
}

$Object* LSInputListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return $of($nc(this->fArray)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t LSInputListImpl::size() {
	return getLength();
}

$ObjectArray* LSInputListImpl::toArray() {
	$var($ObjectArray, a, $new($ObjectArray, this->fLength));
	toArray0(a);
	return a;
}

$ObjectArray* LSInputListImpl::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	if ($nc(a)->length < this->fLength) {
		$Class* arrayClass = $of(a)->getClass();
		$Class* componentType = $nc(arrayClass)->getComponentType();
		$assign(a, $cast($ObjectArray, $1Array::newInstance(componentType, this->fLength)));
	}
	toArray0(a);
	if ($nc(a)->length > this->fLength) {
		a->set(this->fLength, nullptr);
	}
	return a;
}

void LSInputListImpl::toArray0($ObjectArray* a) {
	if (this->fLength > 0) {
		$System::arraycopy(this->fArray, 0, a, 0, this->fLength);
	}
}

void clinit$LSInputListImpl($Class* class$) {
	$assignStatic(LSInputListImpl::EMPTY_LIST, $new(LSInputListImpl, $$new($LSInputArray, 0), 0));
}

LSInputListImpl::LSInputListImpl() {
}

$Class* LSInputListImpl::load$($String* name, bool initialize) {
	$loadClass(LSInputListImpl, name, initialize, &_LSInputListImpl_ClassInfo_, clinit$LSInputListImpl, allocate$LSInputListImpl);
	return class$;
}

$Class* LSInputListImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com