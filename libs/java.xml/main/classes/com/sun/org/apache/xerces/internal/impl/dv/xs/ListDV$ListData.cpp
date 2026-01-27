#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV$ListData.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
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

$FieldInfo _ListDV$ListData_FieldInfo_[] = {
	{"data", "[Ljava/lang/Object;", nullptr, $FINAL, $field(ListDV$ListData, data)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ListDV$ListData, canonical)},
	{}
};

$MethodInfo _ListDV$ListData_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"*addAll", "(ILjava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ListDV$ListData, init$, void, $ObjectArray*)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, contains, bool, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, get, $Object*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, getLength, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, hashCode, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, item, $Object*, int32_t)},
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
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ListDV$ListData, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ListDV$ListData, toString, $String*)},
	{}
};

$InnerClassInfo _ListDV$ListData_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV$ListData", "com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV", "ListData", $STATIC | $FINAL},
	{}
};

$ClassInfo _ListDV$ListData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV$ListData",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList",
	_ListDV$ListData_FieldInfo_,
	_ListDV$ListData_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Object;>;Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;",
	nullptr,
	_ListDV$ListData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.ListDV"
};

$Object* allocate$ListDV$ListData($Class* clazz) {
	return $of($alloc(ListDV$ListData));
}

bool ListDV$ListData::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* ListDV$ListData::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void ListDV$ListData::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* ListDV$ListData::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t ListDV$ListData::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t ListDV$ListData::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void ListDV$ListData::clear() {
	this->$AbstractList::clear();
}

bool ListDV$ListData::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$Iterator* ListDV$ListData::iterator() {
	 return this->$AbstractList::iterator();
}

$ListIterator* ListDV$ListData::listIterator() {
	 return this->$AbstractList::listIterator();
}

$ListIterator* ListDV$ListData::listIterator(int32_t arg0) {
	 return this->$AbstractList::listIterator(arg0);
}

$List* ListDV$ListData::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool ListDV$ListData::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

$ObjectArray* ListDV$ListData::toArray() {
	 return this->$AbstractList::toArray();
}

$ObjectArray* ListDV$ListData::toArray($ObjectArray* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ListDV$ListData::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool ListDV$ListData::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool ListDV$ListData::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool ListDV$ListData::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool ListDV$ListData::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$ObjectArray* ListDV$ListData::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool ListDV$ListData::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* ListDV$ListData::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* ListDV$ListData::stream() {
	 return this->$AbstractList::stream();
}

$Stream* ListDV$ListData::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void ListDV$ListData::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* ListDV$ListData::clone() {
	 return this->$AbstractList::clone();
}

void ListDV$ListData::finalize() {
	this->$AbstractList::finalize();
}

void ListDV$ListData::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void ListDV$ListData::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

void ListDV$ListData::init$($ObjectArray* data) {
	$AbstractList::init$();
	$set(this, data, data);
}

$String* ListDV$ListData::toString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->canonical == nullptr) {
			int32_t len = $nc(this->data)->length;
			$var($StringBuffer, buf, $new($StringBuffer));
			if (len > 0) {
				buf->append($($nc($of($nc(this->data)->get(0)))->toString()));
			}
			for (int32_t i = 1; i < len; ++i) {
				buf->append(u' ');
				buf->append($($nc($of($nc(this->data)->get(i)))->toString()));
			}
			$set(this, canonical, buf->toString());
		}
		return this->canonical;
	}
}

int32_t ListDV$ListData::getLength() {
	return $nc(this->data)->length;
}

bool ListDV$ListData::equals(Object$* obj) {
	if (!($instanceOf(ListDV$ListData, obj))) {
		return false;
	}
	$var($ObjectArray, odata, $nc(($cast(ListDV$ListData, obj)))->data);
	int32_t count = $nc(this->data)->length;
	if (count != $nc(odata)->length) {
		return false;
	}
	for (int32_t i = 0; i < count; ++i) {
		if (!$nc($of($nc(this->data)->get(i)))->equals($nc(odata)->get(i))) {
			return false;
		}
	}
	return true;
}

int32_t ListDV$ListData::hashCode() {
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
		hash ^= $nc($of($nc(this->data)->get(i)))->hashCode();
	}
	return hash;
}

bool ListDV$ListData::contains(Object$* item) {
	for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
		if ($equals(item, $nc(this->data)->get(i))) {
			return true;
		}
	}
	return false;
}

$Object* ListDV$ListData::item(int32_t index) {
	if (index < 0 || index >= $nc(this->data)->length) {
		return $of(nullptr);
	}
	return $of($nc(this->data)->get(index));
}

$Object* ListDV$ListData::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < $nc(this->data)->length) {
		return $of($nc(this->data)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t ListDV$ListData::size() {
	return getLength();
}

ListDV$ListData::ListDV$ListData() {
}

$Class* ListDV$ListData::load$($String* name, bool initialize) {
	$loadClass(ListDV$ListData, name, initialize, &_ListDV$ListData_ClassInfo_, allocate$ListDV$ListData);
	return class$;
}

$Class* ListDV$ListData::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com