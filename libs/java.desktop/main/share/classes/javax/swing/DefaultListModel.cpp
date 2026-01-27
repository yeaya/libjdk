#include <javax/swing/DefaultListModel.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;

namespace javax {
	namespace swing {

$FieldInfo _DefaultListModel_FieldInfo_[] = {
	{"delegate", "Ljava/util/Vector;", "Ljava/util/Vector<TE;>;", $PRIVATE, $field(DefaultListModel, delegate)},
	{}
};

$MethodInfo _DefaultListModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModel, init$, void)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(DefaultListModel, add, void, int32_t, Object$*)},
	{"addAll", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $virtualMethod(DefaultListModel, addAll, void, $Collection*)},
	{"addAll", "(ILjava/util/Collection;)V", "(ILjava/util/Collection<+TE;>;)V", $PUBLIC, $virtualMethod(DefaultListModel, addAll, void, int32_t, $Collection*)},
	{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(DefaultListModel, addElement, void, Object$*)},
	{"capacity", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, capacity, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, contains, bool, Object$*)},
	{"copyInto", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, copyInto, void, $ObjectArray*)},
	{"elementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(DefaultListModel, elementAt, $Object*, int32_t)},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TE;>;", $PUBLIC, $virtualMethod(DefaultListModel, elements, $Enumeration*)},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, ensureCapacity, void, int32_t)},
	{"firstElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(DefaultListModel, firstElement, $Object*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(DefaultListModel, get, $Object*, int32_t)},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(DefaultListModel, getElementAt, $Object*, int32_t)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, getSize, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, indexOf, int32_t, Object$*)},
	{"indexOf", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, indexOf, int32_t, Object$*, int32_t)},
	{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC, $virtualMethod(DefaultListModel, insertElementAt, void, Object$*, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, isEmpty, bool)},
	{"lastElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(DefaultListModel, lastElement, $Object*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, lastIndexOf, int32_t, Object$*)},
	{"lastIndexOf", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, lastIndexOf, int32_t, Object$*, int32_t)},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(DefaultListModel, remove, $Object*, int32_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, removeAllElements, void)},
	{"removeElement", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, removeElement, bool, Object$*)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, removeElementAt, void, int32_t)},
	{"removeRange", "(II)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, removeRange, void, int32_t, int32_t)},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(DefaultListModel, set, $Object*, int32_t, Object$*)},
	{"setElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC, $virtualMethod(DefaultListModel, setElementAt, void, Object$*, int32_t)},
	{"setSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, setSize, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, size, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, toArray, $ObjectArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, toString, $String*)},
	{"trimToSize", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultListModel, trimToSize, void)},
	{}
};

$ClassInfo _DefaultListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultListModel",
	"javax.swing.AbstractListModel",
	nullptr,
	_DefaultListModel_FieldInfo_,
	_DefaultListModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/AbstractListModel<TE;>;"
};

$Object* allocate$DefaultListModel($Class* clazz) {
	return $of($alloc(DefaultListModel));
}

void DefaultListModel::init$() {
	$AbstractListModel::init$();
	$set(this, delegate, $new($Vector));
}

int32_t DefaultListModel::getSize() {
	return $nc(this->delegate)->size();
}

$Object* DefaultListModel::getElementAt(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

void DefaultListModel::copyInto($ObjectArray* anArray) {
	$nc(this->delegate)->copyInto(anArray);
}

void DefaultListModel::trimToSize() {
	$nc(this->delegate)->trimToSize();
}

void DefaultListModel::ensureCapacity(int32_t minCapacity) {
	$nc(this->delegate)->ensureCapacity(minCapacity);
}

void DefaultListModel::setSize(int32_t newSize) {
	int32_t oldSize = $nc(this->delegate)->size();
	$nc(this->delegate)->setSize(newSize);
	if (oldSize > newSize) {
		fireIntervalRemoved(this, newSize, oldSize - 1);
	} else if (oldSize < newSize) {
		fireIntervalAdded(this, oldSize, newSize - 1);
	}
}

int32_t DefaultListModel::capacity() {
	return $nc(this->delegate)->capacity();
}

int32_t DefaultListModel::size() {
	return $nc(this->delegate)->size();
}

bool DefaultListModel::isEmpty() {
	return $nc(this->delegate)->isEmpty();
}

$Enumeration* DefaultListModel::elements() {
	return $nc(this->delegate)->elements();
}

bool DefaultListModel::contains(Object$* elem) {
	return $nc(this->delegate)->contains(elem);
}

int32_t DefaultListModel::indexOf(Object$* elem) {
	return $nc(this->delegate)->indexOf(elem);
}

int32_t DefaultListModel::indexOf(Object$* elem, int32_t index) {
	return $nc(this->delegate)->indexOf(elem, index);
}

int32_t DefaultListModel::lastIndexOf(Object$* elem) {
	return $nc(this->delegate)->lastIndexOf(elem);
}

int32_t DefaultListModel::lastIndexOf(Object$* elem, int32_t index) {
	return $nc(this->delegate)->lastIndexOf(elem, index);
}

$Object* DefaultListModel::elementAt(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

$Object* DefaultListModel::firstElement() {
	return $of($nc(this->delegate)->firstElement());
}

$Object* DefaultListModel::lastElement() {
	return $of($nc(this->delegate)->lastElement());
}

void DefaultListModel::setElementAt(Object$* element, int32_t index) {
	$nc(this->delegate)->setElementAt(element, index);
	fireContentsChanged(this, index, index);
}

void DefaultListModel::removeElementAt(int32_t index) {
	$nc(this->delegate)->removeElementAt(index);
	fireIntervalRemoved(this, index, index);
}

void DefaultListModel::insertElementAt(Object$* element, int32_t index) {
	$nc(this->delegate)->insertElementAt(element, index);
	fireIntervalAdded(this, index, index);
}

void DefaultListModel::addElement(Object$* element) {
	int32_t index = $nc(this->delegate)->size();
	$nc(this->delegate)->addElement(element);
	fireIntervalAdded(this, index, index);
}

bool DefaultListModel::removeElement(Object$* obj) {
	int32_t index = indexOf(obj);
	bool rv = $nc(this->delegate)->removeElement(obj);
	if (index >= 0) {
		fireIntervalRemoved(this, index, index);
	}
	return rv;
}

void DefaultListModel::removeAllElements() {
	int32_t index1 = $nc(this->delegate)->size() - 1;
	$nc(this->delegate)->removeAllElements();
	if (index1 >= 0) {
		fireIntervalRemoved(this, 0, index1);
	}
}

$String* DefaultListModel::toString() {
	return $nc(this->delegate)->toString();
}

$ObjectArray* DefaultListModel::toArray() {
	$var($ObjectArray, rv, $new($ObjectArray, $nc(this->delegate)->size()));
	$nc(this->delegate)->copyInto(rv);
	return rv;
}

$Object* DefaultListModel::get(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

$Object* DefaultListModel::set(int32_t index, Object$* element) {
	$var($Object, rv, $nc(this->delegate)->elementAt(index));
	$nc(this->delegate)->setElementAt(element, index);
	fireContentsChanged(this, index, index);
	return $of(rv);
}

void DefaultListModel::add(int32_t index, Object$* element) {
	$nc(this->delegate)->insertElementAt(element, index);
	fireIntervalAdded(this, index, index);
}

$Object* DefaultListModel::remove(int32_t index) {
	$var($Object, rv, $nc(this->delegate)->elementAt(index));
	$nc(this->delegate)->removeElementAt(index);
	fireIntervalRemoved(this, index, index);
	return $of(rv);
}

void DefaultListModel::clear() {
	int32_t index1 = $nc(this->delegate)->size() - 1;
	$nc(this->delegate)->removeAllElements();
	if (index1 >= 0) {
		fireIntervalRemoved(this, 0, index1);
	}
}

void DefaultListModel::removeRange(int32_t fromIndex, int32_t toIndex) {
	if (fromIndex > toIndex) {
		$throwNew($IllegalArgumentException, "fromIndex must be <= toIndex"_s);
	}
	for (int32_t i = toIndex; i >= fromIndex; --i) {
		$nc(this->delegate)->removeElementAt(i);
	}
	fireIntervalRemoved(this, fromIndex, toIndex);
}

void DefaultListModel::addAll($Collection* c) {
	if ($nc(c)->isEmpty()) {
		return;
	}
	int32_t startIndex = getSize();
	$nc(this->delegate)->addAll(c);
	fireIntervalAdded(this, startIndex, getSize() - 1);
}

void DefaultListModel::addAll(int32_t index, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index > getSize()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"index out of range: "_s, $$str(index)}));
	}
	if ($nc(c)->isEmpty()) {
		return;
	}
	$nc(this->delegate)->addAll(index, c);
	fireIntervalAdded(this, index, index + $nc(c)->size() - 1);
}

DefaultListModel::DefaultListModel() {
}

$Class* DefaultListModel::load$($String* name, bool initialize) {
	$loadClass(DefaultListModel, name, initialize, &_DefaultListModel_ClassInfo_, allocate$DefaultListModel);
	return class$;
}

$Class* DefaultListModel::class$ = nullptr;

	} // swing
} // javax