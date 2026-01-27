#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport$IteratorPrefixes.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
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
						namespace util {

$FieldInfo _NamespaceSupport$IteratorPrefixes_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NamespaceSupport$IteratorPrefixes, this$0)},
	{"prefixes", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(NamespaceSupport$IteratorPrefixes, prefixes)},
	{"counter", "I", nullptr, $PRIVATE, $field(NamespaceSupport$IteratorPrefixes, counter)},
	{"size", "I", nullptr, $PRIVATE, $field(NamespaceSupport$IteratorPrefixes, size)},
	{}
};

$MethodInfo _NamespaceSupport$IteratorPrefixes_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;[Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(NamespaceSupport$IteratorPrefixes, init$, void, $NamespaceSupport*, $StringArray*, int32_t)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$IteratorPrefixes, hasNext, bool)},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$IteratorPrefixes, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$IteratorPrefixes, remove, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$IteratorPrefixes, toString, $String*)},
	{}
};

$InnerClassInfo _NamespaceSupport$IteratorPrefixes_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.NamespaceSupport$IteratorPrefixes", "com.sun.org.apache.xerces.internal.util.NamespaceSupport", "IteratorPrefixes", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _NamespaceSupport$IteratorPrefixes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport$IteratorPrefixes",
	"java.lang.Object",
	"java.util.Iterator",
	_NamespaceSupport$IteratorPrefixes_FieldInfo_,
	_NamespaceSupport$IteratorPrefixes_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	nullptr,
	_NamespaceSupport$IteratorPrefixes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport"
};

$Object* allocate$NamespaceSupport$IteratorPrefixes($Class* clazz) {
	return $of($alloc(NamespaceSupport$IteratorPrefixes));
}

void NamespaceSupport$IteratorPrefixes::init$($NamespaceSupport* this$0, $StringArray* prefixes, int32_t size) {
	$set(this, this$0, this$0);
	this->counter = 0;
	this->size = 0;
	$set(this, prefixes, prefixes);
	this->size = size;
}

bool NamespaceSupport$IteratorPrefixes::hasNext() {
	return (this->counter < this->size);
}

$Object* NamespaceSupport$IteratorPrefixes::next() {
	if (this->counter < this->size) {
		return $of($nc(this->this$0->fPrefixes)->get(this->counter++));
	}
	$throwNew($NoSuchElementException, "Illegal access to Namespace prefixes enumeration."_s);
}

$String* NamespaceSupport$IteratorPrefixes::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < this->size; ++i) {
		buf->append($nc(this->prefixes)->get(i));
		buf->append(" "_s);
	}
	return buf->toString();
}

void NamespaceSupport$IteratorPrefixes::remove() {
	$throwNew($UnsupportedOperationException);
}

NamespaceSupport$IteratorPrefixes::NamespaceSupport$IteratorPrefixes() {
}

$Class* NamespaceSupport$IteratorPrefixes::load$($String* name, bool initialize) {
	$loadClass(NamespaceSupport$IteratorPrefixes, name, initialize, &_NamespaceSupport$IteratorPrefixes_ClassInfo_, allocate$NamespaceSupport$IteratorPrefixes);
	return class$;
}

$Class* NamespaceSupport$IteratorPrefixes::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com