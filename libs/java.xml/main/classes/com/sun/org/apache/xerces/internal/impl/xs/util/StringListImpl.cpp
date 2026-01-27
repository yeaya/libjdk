#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>

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

$FieldInfo _StringListImpl_FieldInfo_[] = {
	{"EMPTY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StringListImpl, EMPTY_LIST)},
	{"fArray", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringListImpl, fArray)},
	{"fLength", "I", nullptr, $PRIVATE | $FINAL, $field(StringListImpl, fLength)},
	{"fVector", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(StringListImpl, fVector)},
	{}
};

$MethodInfo _StringListImpl_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(StringListImpl, init$, void, $List*)},
	{"<init>", "([Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(StringListImpl, init$, void, $StringArray*, int32_t)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(StringListImpl, contains, bool, $String*)},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(StringListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringListImpl, item, $String*, int32_t)},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(StringListImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StringListImpl, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StringListImpl, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray0", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(StringListImpl, toArray0, void, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringListImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.StringListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.StringList",
	_StringListImpl_FieldInfo_,
	_StringListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/String;>;Lcom/sun/org/apache/xerces/internal/xs/StringList;"
};

$Object* allocate$StringListImpl($Class* clazz) {
	return $of($alloc(StringListImpl));
}

bool StringListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* StringListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void StringListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* StringListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t StringListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t StringListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void StringListImpl::clear() {
	this->$AbstractList::clear();
}

bool StringListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* StringListImpl::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* StringListImpl::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* StringListImpl::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* StringListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool StringListImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t StringListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool StringListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool StringListImpl::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

bool StringListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool StringListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool StringListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool StringListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool StringListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* StringListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* StringListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool StringListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* StringListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* StringListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* StringListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void StringListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* StringListImpl::clone() {
	 return this->$AbstractList::clone();
}

void StringListImpl::finalize() {
	this->$AbstractList::finalize();
}

void StringListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void StringListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

StringListImpl* StringListImpl::EMPTY_LIST = nullptr;

void StringListImpl::init$($List* v) {
	$AbstractList::init$();
	$set(this, fVector, v);
	this->fLength = (v == nullptr) ? 0 : $nc(v)->size();
	$set(this, fArray, nullptr);
}

void StringListImpl::init$($StringArray* array, int32_t length) {
	$AbstractList::init$();
	$set(this, fArray, array);
	this->fLength = length;
	$set(this, fVector, nullptr);
}

int32_t StringListImpl::getLength() {
	return this->fLength;
}

bool StringListImpl::contains($String* item) {
	if (this->fVector != nullptr) {
		return $nc(this->fVector)->contains(item);
	}
	if (item == nullptr) {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc(this->fArray)->get(i) == nullptr) {
				return true;
			}
		}
	} else {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc(item)->equals($nc(this->fArray)->get(i))) {
				return true;
			}
		}
	}
	return false;
}

$String* StringListImpl::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	if (this->fVector != nullptr) {
		return $cast($String, $nc(this->fVector)->get(index));
	}
	return $nc(this->fArray)->get(index);
}

$Object* StringListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		if (this->fVector != nullptr) {
			return $of($cast($String, $nc(this->fVector)->get(index)));
		}
		return $of($nc(this->fArray)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t StringListImpl::size() {
	return getLength();
}

$ObjectArray* StringListImpl::toArray() {
	if (this->fVector != nullptr) {
		return $nc(this->fVector)->toArray();
	}
	$var($ObjectArray, a, $new($ObjectArray, this->fLength));
	toArray0(a);
	return a;
}

$ObjectArray* StringListImpl::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	if (this->fVector != nullptr) {
		return $nc(this->fVector)->toArray(a);
	}
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

void StringListImpl::toArray0($ObjectArray* a) {
	if (this->fLength > 0) {
		$System::arraycopy(this->fArray, 0, a, 0, this->fLength);
	}
}

void clinit$StringListImpl($Class* class$) {
	$assignStatic(StringListImpl::EMPTY_LIST, $new(StringListImpl, $$new($StringArray, 0), 0));
}

StringListImpl::StringListImpl() {
}

$Class* StringListImpl::load$($String* name, bool initialize) {
	$loadClass(StringListImpl, name, initialize, &_StringListImpl_ClassInfo_, clinit$StringListImpl, allocate$StringListImpl);
	return class$;
}

$Class* StringListImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com