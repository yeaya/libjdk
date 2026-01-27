#include <com/sun/org/apache/xerces/internal/impl/xs/PSVIErrorList.h>

#include <java/lang/IndexOutOfBoundsException.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _PSVIErrorList_FieldInfo_[] = {
	{"fArray", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PSVIErrorList, fArray)},
	{"fLength", "I", nullptr, $PRIVATE | $FINAL, $field(PSVIErrorList, fLength)},
	{"fOffset", "I", nullptr, $PRIVATE | $FINAL, $field(PSVIErrorList, fOffset)},
	{}
};

$MethodInfo _PSVIErrorList_MethodInfo_[] = {
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
	{"<init>", "([Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(PSVIErrorList, init$, void, $StringArray*, bool)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(PSVIErrorList, contains, bool, $String*)},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIErrorList, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(PSVIErrorList, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIErrorList, item, $String*, int32_t)},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(PSVIErrorList, size, int32_t)},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PSVIErrorList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.PSVIErrorList",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.StringList",
	_PSVIErrorList_FieldInfo_,
	_PSVIErrorList_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/String;>;Lcom/sun/org/apache/xerces/internal/xs/StringList;"
};

$Object* allocate$PSVIErrorList($Class* clazz) {
	return $of($alloc(PSVIErrorList));
}

bool PSVIErrorList::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* PSVIErrorList::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void PSVIErrorList::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* PSVIErrorList::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t PSVIErrorList::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t PSVIErrorList::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void PSVIErrorList::clear() {
	this->$AbstractList::clear();
}

bool PSVIErrorList::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* PSVIErrorList::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* PSVIErrorList::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* PSVIErrorList::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* PSVIErrorList::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool PSVIErrorList::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t PSVIErrorList::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool PSVIErrorList::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool PSVIErrorList::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

$ObjectArray* PSVIErrorList::toArray() {
	 return this->$AbstractList::toArray();
}

$ObjectArray* PSVIErrorList::toArray($ObjectArray* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool PSVIErrorList::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool PSVIErrorList::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool PSVIErrorList::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool PSVIErrorList::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool PSVIErrorList::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* PSVIErrorList::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* PSVIErrorList::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool PSVIErrorList::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* PSVIErrorList::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* PSVIErrorList::stream() {
	 return this->$AbstractList::stream();
}

$Stream* PSVIErrorList::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void PSVIErrorList::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* PSVIErrorList::clone() {
	 return this->$AbstractList::clone();
}

void PSVIErrorList::finalize() {
	this->$AbstractList::finalize();
}

void PSVIErrorList::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void PSVIErrorList::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

void PSVIErrorList::init$($StringArray* array, bool even) {
	$AbstractList::init$();
	$set(this, fArray, array);
	this->fLength = ($nc(this->fArray)->length >> 1);
	this->fOffset = even ? 0 : 1;
}

bool PSVIErrorList::contains($String* item) {
	if (item == nullptr) {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc(this->fArray)->get((i << 1) + this->fOffset) == nullptr) {
				return true;
			}
		}
	} else {
		for (int32_t i = 0; i < this->fLength; ++i) {
			if ($nc(item)->equals($nc(this->fArray)->get((i << 1) + this->fOffset))) {
				return true;
			}
		}
	}
	return false;
}

int32_t PSVIErrorList::getLength() {
	return this->fLength;
}

$String* PSVIErrorList::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc(this->fArray)->get((index << 1) + this->fOffset);
}

$Object* PSVIErrorList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return $of($nc(this->fArray)->get((index << 1) + this->fOffset));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t PSVIErrorList::size() {
	return getLength();
}

PSVIErrorList::PSVIErrorList() {
}

$Class* PSVIErrorList::load$($String* name, bool initialize) {
	$loadClass(PSVIErrorList, name, initialize, &_PSVIErrorList_ClassInfo_, allocate$PSVIErrorList);
	return class$;
}

$Class* PSVIErrorList::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com