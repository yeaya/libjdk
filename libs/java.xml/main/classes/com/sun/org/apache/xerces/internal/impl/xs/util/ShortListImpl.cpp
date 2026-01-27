#include <com/sun/org/apache/xerces/internal/impl/xs/util/ShortListImpl.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSException.h>
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

#undef EMPTY_LIST
#undef INDEX_SIZE_ERR

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSException = ::com::sun::org::apache::xerces::internal::xs::XSException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
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

$FieldInfo _ShortListImpl_FieldInfo_[] = {
	{"EMPTY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/ShortListImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ShortListImpl, EMPTY_LIST)},
	{"fArray", "[S", nullptr, $PRIVATE | $FINAL, $field(ShortListImpl, fArray)},
	{"fLength", "I", nullptr, $PRIVATE | $FINAL, $field(ShortListImpl, fLength)},
	{}
};

$MethodInfo _ShortListImpl_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"*addAll", "(ILjava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"<init>", "([SI)V", nullptr, $PUBLIC, $method(ShortListImpl, init$, void, $shorts*, int32_t)},
	{"contains", "(S)Z", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, contains, bool, int16_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/Short;", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)S", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, item, int16_t, int32_t), "com.sun.org.apache.xerces.internal.xs.XSException"},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ShortListImpl, size, int32_t)},
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

$ClassInfo _ShortListImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.ShortListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.ShortList",
	_ShortListImpl_FieldInfo_,
	_ShortListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Short;>;Lcom/sun/org/apache/xerces/internal/xs/ShortList;"
};

$Object* allocate$ShortListImpl($Class* clazz) {
	return $of($alloc(ShortListImpl));
}

bool ShortListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* ShortListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void ShortListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* ShortListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t ShortListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t ShortListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void ShortListImpl::clear() {
	this->$AbstractList::clear();
}

bool ShortListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* ShortListImpl::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* ShortListImpl::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* ShortListImpl::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* ShortListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

int32_t ShortListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool ShortListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool ShortListImpl::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

$ObjectArray* ShortListImpl::toArray() {
	 return this->$AbstractList::toArray();
}

$ObjectArray* ShortListImpl::toArray($ObjectArray* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ShortListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool ShortListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool ShortListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool ShortListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool ShortListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* ShortListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* ShortListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ShortListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* ShortListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* ShortListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* ShortListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void ShortListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* ShortListImpl::clone() {
	 return this->$AbstractList::clone();
}

void ShortListImpl::finalize() {
	this->$AbstractList::finalize();
}

void ShortListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void ShortListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

ShortListImpl* ShortListImpl::EMPTY_LIST = nullptr;

void ShortListImpl::init$($shorts* array, int32_t length) {
	$AbstractList::init$();
	$set(this, fArray, array);
	this->fLength = length;
}

int32_t ShortListImpl::getLength() {
	return this->fLength;
}

bool ShortListImpl::contains(int16_t item) {
	for (int32_t i = 0; i < this->fLength; ++i) {
		if ($nc(this->fArray)->get(i) == item) {
			return true;
		}
	}
	return false;
}

int16_t ShortListImpl::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		$throwNew($XSException, $XSException::INDEX_SIZE_ERR, nullptr);
	}
	return $nc(this->fArray)->get(index);
}

bool ShortListImpl::equals(Object$* obj) {
	if (obj == nullptr || !($instanceOf($ShortList, obj))) {
		return false;
	}
	$var($ShortList, rhs, $cast($ShortList, obj));
	if (this->fLength != $nc(rhs)->getLength()) {
		return false;
	}
	for (int32_t i = 0; i < this->fLength; ++i) {
		if ($nc(this->fArray)->get(i) != $nc(rhs)->item(i)) {
			return false;
		}
	}
	return true;
}

$Object* ShortListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return $of($Short::valueOf($nc(this->fArray)->get(index)));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t ShortListImpl::size() {
	return getLength();
}

void clinit$ShortListImpl($Class* class$) {
	$assignStatic(ShortListImpl::EMPTY_LIST, $new(ShortListImpl, $$new($shorts, 0), 0));
}

ShortListImpl::ShortListImpl() {
}

$Class* ShortListImpl::load$($String* name, bool initialize) {
	$loadClass(ShortListImpl, name, initialize, &_ShortListImpl_ClassInfo_, clinit$ShortListImpl, allocate$ShortListImpl);
	return class$;
}

$Class* ShortListImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com