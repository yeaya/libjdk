#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
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
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
								namespace xs {

$MethodInfo _XSSimpleTypeDecl$AbstractObjectList_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl$AbstractObjectList, init$, void)},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$AbstractObjectList, get, $Object*, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$AbstractObjectList, size, int32_t)},
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

$InnerClassInfo _XSSimpleTypeDecl$AbstractObjectList_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "AbstractObjectList", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _XSSimpleTypeDecl$AbstractObjectList_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList",
	nullptr,
	_XSSimpleTypeDecl$AbstractObjectList_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Object;>;Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;",
	nullptr,
	_XSSimpleTypeDecl$AbstractObjectList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$AbstractObjectList($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$AbstractObjectList));
}

bool XSSimpleTypeDecl$AbstractObjectList::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* XSSimpleTypeDecl$AbstractObjectList::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void XSSimpleTypeDecl$AbstractObjectList::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* XSSimpleTypeDecl$AbstractObjectList::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t XSSimpleTypeDecl$AbstractObjectList::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t XSSimpleTypeDecl$AbstractObjectList::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void XSSimpleTypeDecl$AbstractObjectList::clear() {
	this->$AbstractList::clear();
}

bool XSSimpleTypeDecl$AbstractObjectList::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* XSSimpleTypeDecl$AbstractObjectList::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* XSSimpleTypeDecl$AbstractObjectList::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* XSSimpleTypeDecl$AbstractObjectList::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* XSSimpleTypeDecl$AbstractObjectList::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool XSSimpleTypeDecl$AbstractObjectList::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t XSSimpleTypeDecl$AbstractObjectList::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool XSSimpleTypeDecl$AbstractObjectList::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool XSSimpleTypeDecl$AbstractObjectList::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

$ObjectArray* XSSimpleTypeDecl$AbstractObjectList::toArray() {
	 return this->$AbstractList::toArray();
}

$ObjectArray* XSSimpleTypeDecl$AbstractObjectList::toArray($ObjectArray* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* XSSimpleTypeDecl$AbstractObjectList::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* XSSimpleTypeDecl$AbstractObjectList::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool XSSimpleTypeDecl$AbstractObjectList::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* XSSimpleTypeDecl$AbstractObjectList::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* XSSimpleTypeDecl$AbstractObjectList::stream() {
	 return this->$AbstractList::stream();
}

$Stream* XSSimpleTypeDecl$AbstractObjectList::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void XSSimpleTypeDecl$AbstractObjectList::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* XSSimpleTypeDecl$AbstractObjectList::clone() {
	 return this->$AbstractList::clone();
}

void XSSimpleTypeDecl$AbstractObjectList::finalize() {
	this->$AbstractList::finalize();
}

void XSSimpleTypeDecl$AbstractObjectList::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void XSSimpleTypeDecl$AbstractObjectList::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

void XSSimpleTypeDecl$AbstractObjectList::init$() {
	$AbstractList::init$();
}

$Object* XSSimpleTypeDecl$AbstractObjectList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < getLength()) {
		return $of(item(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t XSSimpleTypeDecl$AbstractObjectList::size() {
	return getLength();
}

XSSimpleTypeDecl$AbstractObjectList::XSSimpleTypeDecl$AbstractObjectList() {
}

$Class* XSSimpleTypeDecl$AbstractObjectList::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$AbstractObjectList, name, initialize, &_XSSimpleTypeDecl$AbstractObjectList_ClassInfo_, allocate$XSSimpleTypeDecl$AbstractObjectList);
	return class$;
}

$Class* XSSimpleTypeDecl$AbstractObjectList::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com