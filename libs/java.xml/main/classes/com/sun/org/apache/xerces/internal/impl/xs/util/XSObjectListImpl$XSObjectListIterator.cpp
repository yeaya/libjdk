#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl$XSObjectListIterator.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _XSObjectListImpl$XSObjectListIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XSObjectListImpl$XSObjectListIterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(XSObjectListImpl$XSObjectListIterator, index)},
	{}
};

$MethodInfo _XSObjectListImpl$XSObjectListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;I)V", nullptr, $PUBLIC, $method(XSObjectListImpl$XSObjectListIterator, init$, void, $XSObjectListImpl*, int32_t)},
	{"add", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $method(XSObjectListImpl$XSObjectListIterator, add, void, $XSObject*)},
	{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, add, void, Object$*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, hasNext, bool)},
	{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, hasPrevious, bool)},
	{"next", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, next, $Object*)},
	{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, nextIndex, int32_t)},
	{"previous", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, previousIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, remove, void)},
	{"set", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $method(XSObjectListImpl$XSObjectListIterator, set, void, $XSObject*)},
	{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSObjectListImpl$XSObjectListIterator, set, void, Object$*)},
	{}
};

$InnerClassInfo _XSObjectListImpl$XSObjectListIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$XSObjectListIterator", "com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl", "XSObjectListIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _XSObjectListImpl$XSObjectListIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$XSObjectListIterator",
	"java.lang.Object",
	"java.util.ListIterator",
	_XSObjectListImpl$XSObjectListIterator_FieldInfo_,
	_XSObjectListImpl$XSObjectListIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;",
	nullptr,
	_XSObjectListImpl$XSObjectListIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl"
};

$Object* allocate$XSObjectListImpl$XSObjectListIterator($Class* clazz) {
	return $of($alloc(XSObjectListImpl$XSObjectListIterator));
}

void XSObjectListImpl$XSObjectListIterator::init$($XSObjectListImpl* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->index = index;
}

bool XSObjectListImpl$XSObjectListIterator::hasNext() {
	return (this->index < this->this$0->fLength);
}

$Object* XSObjectListImpl$XSObjectListIterator::next() {
	if (this->index < this->this$0->fLength) {
		return $of($nc(this->this$0->fArray)->get(this->index++));
	}
	$throwNew($NoSuchElementException);
}

bool XSObjectListImpl$XSObjectListIterator::hasPrevious() {
	return (this->index > 0);
}

$Object* XSObjectListImpl$XSObjectListIterator::previous() {
	if (this->index > 0) {
		return $of($nc(this->this$0->fArray)->get(--this->index));
	}
	$throwNew($NoSuchElementException);
}

int32_t XSObjectListImpl$XSObjectListIterator::nextIndex() {
	return this->index;
}

int32_t XSObjectListImpl$XSObjectListIterator::previousIndex() {
	return this->index - 1;
}

void XSObjectListImpl$XSObjectListIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$XSObjectListIterator::set($XSObject* o) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$XSObjectListIterator::add($XSObject* o) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$XSObjectListIterator::add(Object$* o) {
	this->add($cast($XSObject, o));
}

void XSObjectListImpl$XSObjectListIterator::set(Object$* o) {
	this->set($cast($XSObject, o));
}

XSObjectListImpl$XSObjectListIterator::XSObjectListImpl$XSObjectListIterator() {
}

$Class* XSObjectListImpl$XSObjectListIterator::load$($String* name, bool initialize) {
	$loadClass(XSObjectListImpl$XSObjectListIterator, name, initialize, &_XSObjectListImpl$XSObjectListIterator_ClassInfo_, allocate$XSObjectListImpl$XSObjectListIterator);
	return class$;
}

$Class* XSObjectListImpl$XSObjectListIterator::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com