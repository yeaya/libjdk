#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl$EmptyIterator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl$XSObjectListIterator.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
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

#undef DEFAULT_SIZE
#undef EMPTY_ITERATOR
#undef EMPTY_LIST

using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSObjectListImpl$EmptyIterator = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl$EmptyIterator;
using $XSObjectListImpl$XSObjectListIterator = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl$XSObjectListIterator;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$FieldInfo _XSObjectListImpl_FieldInfo_[] = {
	{"EMPTY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSObjectListImpl, EMPTY_LIST)},
	{"EMPTY_ITERATOR", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSObjectListImpl, EMPTY_ITERATOR)},
	{"DEFAULT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSObjectListImpl, DEFAULT_SIZE)},
	{"fArray", "[Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PRIVATE, $field(XSObjectListImpl, fArray)},
	{"fLength", "I", nullptr, $PRIVATE, $field(XSObjectListImpl, fLength)},
	{}
};

$MethodInfo _XSObjectListImpl_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSObjectListImpl, init$, void)},
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;I)V", nullptr, $PUBLIC, $method(XSObjectListImpl, init$, void, $XSObjectArray*, int32_t)},
	{"addXSObject", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, addXSObject, void, $XSObject*)},
	{"addXSObject", "(ILcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, addXSObject, void, int32_t, $XSObject*)},
	{"clearXSObjectList", "()V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, clearXSObjectList, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, contains, bool, Object$*)},
	{"containsNull", "()Z", nullptr, $PRIVATE, $method(XSObjectListImpl, containsNull, bool)},
	{"containsObject", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(XSObjectListImpl, containsObject, bool, Object$*)},
	{"get", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, item, $XSObject*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PUBLIC, $virtualMethod(XSObjectListImpl, iterator, $Iterator*)},
	{"*lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PUBLIC, $virtualMethod(XSObjectListImpl, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PUBLIC, $virtualMethod(XSObjectListImpl, listIterator, $ListIterator*, int32_t)},
	{"listIterator0", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PRIVATE, $method(XSObjectListImpl, listIterator0, $ListIterator*, int32_t)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/UnaryOperator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray0", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(XSObjectListImpl, toArray0, void, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSObjectListImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$XSObjectListIterator", "com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl", "XSObjectListIterator", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator", "com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl", "EmptyIterator", $STATIC},
	{}
};

$ClassInfo _XSObjectListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.XSObjectList",
	_XSObjectListImpl_FieldInfo_,
	_XSObjectListImpl_MethodInfo_,
	"Ljava/util/AbstractList<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;",
	nullptr,
	_XSObjectListImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$XSObjectListIterator,com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator"
};

$Object* allocate$XSObjectListImpl($Class* clazz) {
	return $of($alloc(XSObjectListImpl));
}

bool XSObjectListImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* XSObjectListImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void XSObjectListImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* XSObjectListImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t XSObjectListImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t XSObjectListImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void XSObjectListImpl::clear() {
	this->$AbstractList::clear();
}

bool XSObjectListImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$List* XSObjectListImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool XSObjectListImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t XSObjectListImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool XSObjectListImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool XSObjectListImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool XSObjectListImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool XSObjectListImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool XSObjectListImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool XSObjectListImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* XSObjectListImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* XSObjectListImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool XSObjectListImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* XSObjectListImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* XSObjectListImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* XSObjectListImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void XSObjectListImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* XSObjectListImpl::clone() {
	 return this->$AbstractList::clone();
}

void XSObjectListImpl::finalize() {
	this->$AbstractList::finalize();
}

void XSObjectListImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void XSObjectListImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

XSObjectListImpl* XSObjectListImpl::EMPTY_LIST = nullptr;
$ListIterator* XSObjectListImpl::EMPTY_ITERATOR = nullptr;

void XSObjectListImpl::init$() {
	$AbstractList::init$();
	$set(this, fArray, nullptr);
	this->fLength = 0;
	$set(this, fArray, $new($XSObjectArray, XSObjectListImpl::DEFAULT_SIZE));
	this->fLength = 0;
}

void XSObjectListImpl::init$($XSObjectArray* array, int32_t length) {
	$AbstractList::init$();
	$set(this, fArray, nullptr);
	this->fLength = 0;
	$set(this, fArray, array);
	this->fLength = length;
}

int32_t XSObjectListImpl::getLength() {
	return this->fLength;
}

$XSObject* XSObjectListImpl::item(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc(this->fArray)->get(index);
}

void XSObjectListImpl::clearXSObjectList() {
	for (int32_t i = 0; i < this->fLength; ++i) {
		$nc(this->fArray)->set(i, nullptr);
	}
	$set(this, fArray, nullptr);
	this->fLength = 0;
}

void XSObjectListImpl::addXSObject($XSObject* object) {
	if (this->fLength == $nc(this->fArray)->length) {
		$var($XSObjectArray, temp, $new($XSObjectArray, this->fLength + 4));
		$System::arraycopy(this->fArray, 0, temp, 0, this->fLength);
		$set(this, fArray, temp);
	}
	$nc(this->fArray)->set(this->fLength++, object);
}

void XSObjectListImpl::addXSObject(int32_t index, $XSObject* object) {
	$nc(this->fArray)->set(index, object);
}

bool XSObjectListImpl::contains(Object$* value) {
	return (value == nullptr) ? containsNull() : containsObject(value);
}

$Object* XSObjectListImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return $of($nc(this->fArray)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t XSObjectListImpl::size() {
	return getLength();
}

$Iterator* XSObjectListImpl::iterator() {
	return listIterator0(0);
}

$ListIterator* XSObjectListImpl::listIterator() {
	return listIterator0(0);
}

$ListIterator* XSObjectListImpl::listIterator(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fLength) {
		return listIterator0(index);
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

$ListIterator* XSObjectListImpl::listIterator0(int32_t index) {
	return this->fLength == 0 ? XSObjectListImpl::EMPTY_ITERATOR : static_cast<$ListIterator*>($new($XSObjectListImpl$XSObjectListIterator, this, index));
}

bool XSObjectListImpl::containsObject(Object$* value) {
	for (int32_t i = this->fLength - 1; i >= 0; --i) {
		if ($nc($of(value))->equals($nc(this->fArray)->get(i))) {
			return true;
		}
	}
	return false;
}

bool XSObjectListImpl::containsNull() {
	for (int32_t i = this->fLength - 1; i >= 0; --i) {
		if ($nc(this->fArray)->get(i) == nullptr) {
			return true;
		}
	}
	return false;
}

$ObjectArray* XSObjectListImpl::toArray() {
	$var($ObjectArray, a, $new($ObjectArray, this->fLength));
	toArray0(a);
	return a;
}

$ObjectArray* XSObjectListImpl::toArray($ObjectArray* a$renamed) {
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

void XSObjectListImpl::toArray0($ObjectArray* a) {
	if (this->fLength > 0) {
		$System::arraycopy(this->fArray, 0, a, 0, this->fLength);
	}
}

void clinit$XSObjectListImpl($Class* class$) {
	$assignStatic(XSObjectListImpl::EMPTY_LIST, $new(XSObjectListImpl, $$new($XSObjectArray, 0), 0));
	$assignStatic(XSObjectListImpl::EMPTY_ITERATOR, $new($XSObjectListImpl$EmptyIterator));
}

XSObjectListImpl::XSObjectListImpl() {
}

$Class* XSObjectListImpl::load$($String* name, bool initialize) {
	$loadClass(XSObjectListImpl, name, initialize, &_XSObjectListImpl_ClassInfo_, clinit$XSObjectListImpl, allocate$XSObjectListImpl);
	return class$;
}

$Class* XSObjectListImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com