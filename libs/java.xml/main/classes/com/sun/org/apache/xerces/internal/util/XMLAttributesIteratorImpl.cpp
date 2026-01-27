#include <com/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl.h>

#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLAttributesIteratorImpl_FieldInfo_[] = {
	{"fCurrent", "I", nullptr, $PROTECTED, $field(XMLAttributesIteratorImpl, fCurrent)},
	{"fLastReturnedItem", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;", nullptr, $PROTECTED, $field(XMLAttributesIteratorImpl, fLastReturnedItem)},
	{}
};

$MethodInfo _XMLAttributesIteratorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLAttributesIteratorImpl, init$, void)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLAttributesIteratorImpl, hasNext, bool)},
	{"next", "()Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;", nullptr, $PUBLIC, $virtualMethod(XMLAttributesIteratorImpl, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XMLAttributesIteratorImpl, remove, void)},
	{"removeAllAttributes", "()V", nullptr, $PUBLIC, $virtualMethod(XMLAttributesIteratorImpl, removeAllAttributes, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLAttributesIteratorImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute", "com.sun.org.apache.xerces.internal.util.XMLAttributesImpl", "Attribute", $STATIC},
	{}
};

$ClassInfo _XMLAttributesIteratorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLAttributesIteratorImpl",
	"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl",
	"java.util.Iterator",
	_XMLAttributesIteratorImpl_FieldInfo_,
	_XMLAttributesIteratorImpl_MethodInfo_,
	"Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;Ljava/util/Iterator<Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;>;",
	nullptr,
	_XMLAttributesIteratorImpl_InnerClassesInfo_
};

$Object* allocate$XMLAttributesIteratorImpl($Class* clazz) {
	return $of($alloc(XMLAttributesIteratorImpl));
}

int32_t XMLAttributesIteratorImpl::hashCode() {
	 return this->$XMLAttributesImpl::hashCode();
}

bool XMLAttributesIteratorImpl::equals(Object$* arg0) {
	 return this->$XMLAttributesImpl::equals(arg0);
}

$Object* XMLAttributesIteratorImpl::clone() {
	 return this->$XMLAttributesImpl::clone();
}

$String* XMLAttributesIteratorImpl::toString() {
	 return this->$XMLAttributesImpl::toString();
}

void XMLAttributesIteratorImpl::finalize() {
	this->$XMLAttributesImpl::finalize();
}

void XMLAttributesIteratorImpl::init$() {
	$XMLAttributesImpl::init$();
	this->fCurrent = 0;
}

bool XMLAttributesIteratorImpl::hasNext() {
	return this->fCurrent < getLength() ? true : false;
}

$Object* XMLAttributesIteratorImpl::next() {
	if (hasNext()) {
		return $of($set(this, fLastReturnedItem, $nc(this->fAttributes)->get(this->fCurrent++)));
	} else {
		$throwNew($NoSuchElementException);
	}
}

void XMLAttributesIteratorImpl::remove() {
	if (this->fLastReturnedItem == $nc(this->fAttributes)->get(this->fCurrent - 1)) {
		removeAttributeAt(this->fCurrent--);
	} else {
		$throwNew($IllegalStateException);
	}
}

void XMLAttributesIteratorImpl::removeAllAttributes() {
	$XMLAttributesImpl::removeAllAttributes();
	this->fCurrent = 0;
}

XMLAttributesIteratorImpl::XMLAttributesIteratorImpl() {
}

$Class* XMLAttributesIteratorImpl::load$($String* name, bool initialize) {
	$loadClass(XMLAttributesIteratorImpl, name, initialize, &_XMLAttributesIteratorImpl_ClassInfo_, allocate$XMLAttributesIteratorImpl);
	return class$;
}

$Class* XMLAttributesIteratorImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com