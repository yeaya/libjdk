#include <com/sun/org/apache/xerces/internal/impl/dv/util/ByteListImpl.h>

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

#undef INDEX_SIZE_ERR

using $XSException = ::com::sun::org::apache::xerces::internal::xs::XSException;
using $Byte = ::java::lang::Byte;
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
							namespace dv {
								namespace util {

$FieldInfo _ByteListImpl_FieldInfo_[] = {
	{"data", "[B", nullptr, $PROTECTED | $FINAL, $field(ByteListImpl, data)},
	{"canonical", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ByteListImpl, canonical)},
	{}
};

$MethodInfo _ByteListImpl_MethodInfo_[] = {
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
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(ByteListImpl, init$, void, $bytes*)},
	{"contains", "(B)Z", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, contains, bool, int8_t)},
	{"get", "(I)Ljava/lang/Byte;", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)B", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, item, int8_t, int32_t), "com.sun.org.apache.xerces.internal.xs.XSException"},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toByteArray", "()[B", nullptr, $PUBLIC, $virtualMethod(ByteListImpl, toByteArray, $bytes*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.util.ByteListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.datatypes.ByteList",
	_ByteListImpl_FieldInfo_,
	_ByteListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Byte;>;Lcom/sun/org/apache/xerces/internal/xs/datatypes/ByteList;"
};

$Object* allocate$ByteListImpl($Class* clazz) {
	return $of($alloc(ByteListImpl));
}

bool ByteListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* ByteListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void ByteListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* ByteListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t ByteListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t ByteListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void ByteListImpl::clear() {
	this->$AbstractList::clear();
}

bool ByteListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* ByteListImpl::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* ByteListImpl::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* ByteListImpl::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* ByteListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool ByteListImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t ByteListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool ByteListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool ByteListImpl::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

$ObjectArray* ByteListImpl::toArray() {
	 return this->$AbstractList::toArray();
}

$ObjectArray* ByteListImpl::toArray($ObjectArray* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ByteListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool ByteListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool ByteListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool ByteListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool ByteListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* ByteListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* ByteListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ByteListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* ByteListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* ByteListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* ByteListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void ByteListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* ByteListImpl::clone() {
	 return this->$AbstractList::clone();
}

void ByteListImpl::finalize() {
	this->$AbstractList::finalize();
}

void ByteListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void ByteListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

void ByteListImpl::init$($bytes* data) {
	$AbstractList::init$();
	$set(this, data, data);
}

int32_t ByteListImpl::getLength() {
	return $nc(this->data)->length;
}

bool ByteListImpl::contains(int8_t item) {
	for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
		if ($nc(this->data)->get(i) == item) {
			return true;
		}
	}
	return false;
}

int8_t ByteListImpl::item(int32_t index) {
	if (index < 0 || index > $nc(this->data)->length - 1) {
		$throwNew($XSException, $XSException::INDEX_SIZE_ERR, nullptr);
	}
	return $nc(this->data)->get(index);
}

$Object* ByteListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < $nc(this->data)->length) {
		return $of($Byte::valueOf($nc(this->data)->get(index)));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t ByteListImpl::size() {
	return getLength();
}

$bytes* ByteListImpl::toByteArray() {
	$var($bytes, ret, $new($bytes, $nc(this->data)->length));
	$System::arraycopy(this->data, 0, ret, 0, $nc(this->data)->length);
	return ret;
}

ByteListImpl::ByteListImpl() {
}

$Class* ByteListImpl::load$($String* name, bool initialize) {
	$loadClass(ByteListImpl, name, initialize, &_ByteListImpl_ClassInfo_, allocate$ByteListImpl);
	return class$;
}

$Class* ByteListImpl::class$ = nullptr;

								} // util
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com