#include <com/sun/org/apache/xerces/internal/impl/xs/util/ObjectListImpl.h>

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
#include <jcpp.h>

#undef EMPTY_LIST

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _ObjectListImpl_FieldInfo_[] = {
	{"EMPTY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/ObjectListImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ObjectListImpl, EMPTY_LIST)},
	{"fArray", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ObjectListImpl, fArray)},
	{"fLength", "I", nullptr, $PRIVATE | $FINAL, $field(ObjectListImpl, fLength)},
	{}
};

$MethodInfo _ObjectListImpl_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"*addAll", "(ILjava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"<init>", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(ObjectListImpl, init$, void, $ObjectArray*, int32_t)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, contains, bool, Object$*)},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, item, $Object*, int32_t)},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectListImpl, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray0", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(ObjectListImpl, toArray0, void, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectListImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.ObjectListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList",
	_ObjectListImpl_FieldInfo_,
	_ObjectListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Object;>;Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;"
};

$Object* allocate$ObjectListImpl($Class* clazz) {
	return $of($alloc(ObjectListImpl));
}

bool ObjectListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* ObjectListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void ObjectListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* ObjectListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t ObjectListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t ObjectListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void ObjectListImpl::clear() {
	this->$AbstractList::clear();
}

bool ObjectListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* ObjectListImpl::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* ObjectListImpl::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* ObjectListImpl::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* ObjectListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool ObjectListImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t ObjectListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool ObjectListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool ObjectListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool ObjectListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool ObjectListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool ObjectListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool ObjectListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* ObjectListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* ObjectListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ObjectListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* ObjectListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* ObjectListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* ObjectListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void ObjectListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* ObjectListImpl::clone() {
	 return this->$AbstractList::clone();
}

void ObjectListImpl::finalize() {
	this->$AbstractList::finalize();
}

void ObjectListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void ObjectListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

ObjectListImpl* ObjectListImpl::EMPTY_LIST = nullptr;

void ObjectListImpl::init$($ObjectArray* array, int32_t length) {
	$AbstractList::init$();
	$set(this, fArray, array);
	this->fLength = length;
}

int32_t ObjectListImpl::getLength() {
	return this->fLength;
}

bool ObjectListImpl::contains(Object$* item) {
	if (item == nullptr) {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc(this->fArray)->get(i) == nullptr) {
				return true;
			}
		}
	} else {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc($of(item))->equals($nc(this->fArray)->get(i))) {
				return true;
			}
		}
	}
	return false;
}

$Object* ObjectListImpl::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return $of(nullptr);
	}
	return $of($nc(this->fArray)->get(index));
}

$Object* ObjectListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return $of($nc(this->fArray)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t ObjectListImpl::size() {
	return getLength();
}

$ObjectArray* ObjectListImpl::toArray() {
	$var($ObjectArray, a, $new($ObjectArray, this->fLength));
	toArray0(a);
	return a;
}

$ObjectArray* ObjectListImpl::toArray($ObjectArray* a$renamed) {
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

void ObjectListImpl::toArray0($ObjectArray* a) {
	if (this->fLength > 0) {
		$System::arraycopy(this->fArray, 0, a, 0, this->fLength);
	}
}

void clinit$ObjectListImpl($Class* class$) {
	$assignStatic(ObjectListImpl::EMPTY_LIST, $new(ObjectListImpl, $$new($ObjectArray, 0), 0));
}

ObjectListImpl::ObjectListImpl() {
}

$Class* ObjectListImpl::load$($String* name, bool initialize) {
	$loadClass(ObjectListImpl, name, initialize, &_ObjectListImpl_ClassInfo_, clinit$ObjectListImpl, allocate$ObjectListImpl);
	return class$;
}

$Class* ObjectListImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com