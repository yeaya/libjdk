#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport$Prefixes.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _NamespaceSupport$Prefixes_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NamespaceSupport$Prefixes, this$0)},
	{"prefixes", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(NamespaceSupport$Prefixes, prefixes)},
	{"counter", "I", nullptr, $PRIVATE, $field(NamespaceSupport$Prefixes, counter)},
	{"size", "I", nullptr, $PRIVATE, $field(NamespaceSupport$Prefixes, size)},
	{}
};

$MethodInfo _NamespaceSupport$Prefixes_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;[Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(NamespaceSupport$Prefixes, init$, void, $NamespaceSupport*, $StringArray*, int32_t)},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$Prefixes, hasMoreElements, bool)},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$Prefixes, nextElement, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport$Prefixes, toString, $String*)},
	{}
};

$InnerClassInfo _NamespaceSupport$Prefixes_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.NamespaceSupport$Prefixes", "com.sun.org.apache.xerces.internal.util.NamespaceSupport", "Prefixes", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _NamespaceSupport$Prefixes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport$Prefixes",
	"java.lang.Object",
	"java.util.Enumeration",
	_NamespaceSupport$Prefixes_FieldInfo_,
	_NamespaceSupport$Prefixes_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	nullptr,
	_NamespaceSupport$Prefixes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport"
};

$Object* allocate$NamespaceSupport$Prefixes($Class* clazz) {
	return $of($alloc(NamespaceSupport$Prefixes));
}

void NamespaceSupport$Prefixes::init$($NamespaceSupport* this$0, $StringArray* prefixes, int32_t size) {
	$set(this, this$0, this$0);
	this->counter = 0;
	this->size = 0;
	$set(this, prefixes, prefixes);
	this->size = size;
}

bool NamespaceSupport$Prefixes::hasMoreElements() {
	return (this->counter < this->size);
}

$Object* NamespaceSupport$Prefixes::nextElement() {
	if (this->counter < this->size) {
		return $of($nc(this->this$0->fPrefixes)->get(this->counter++));
	}
	$throwNew($NoSuchElementException, "Illegal access to Namespace prefixes enumeration."_s);
}

$String* NamespaceSupport$Prefixes::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < this->size; ++i) {
		buf->append($nc(this->prefixes)->get(i));
		buf->append(" "_s);
	}
	return buf->toString();
}

NamespaceSupport$Prefixes::NamespaceSupport$Prefixes() {
}

$Class* NamespaceSupport$Prefixes::load$($String* name, bool initialize) {
	$loadClass(NamespaceSupport$Prefixes, name, initialize, &_NamespaceSupport$Prefixes_ClassInfo_, allocate$NamespaceSupport$Prefixes);
	return class$;
}

$Class* NamespaceSupport$Prefixes::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com