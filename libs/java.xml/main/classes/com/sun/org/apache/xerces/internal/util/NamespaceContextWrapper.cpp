#include <com/sun/org/apache/xerces/internal/util/NamespaceContextWrapper.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _NamespaceContextWrapper_FieldInfo_[] = {
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(NamespaceContextWrapper, fNamespaceContext)},
	{}
};

$MethodInfo _NamespaceContextWrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;)V", nullptr, $PUBLIC, $method(NamespaceContextWrapper, init$, void, $NamespaceSupport*)},
	{"getNamespaceContext", "()Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(NamespaceContextWrapper, getNamespaceContext, $NamespaceContext*)},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceContextWrapper, getNamespaceURI, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceContextWrapper, getPrefix, $String*, $String*)},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceContextWrapper, getPrefixes, $Iterator*, $String*)},
	{}
};

$ClassInfo _NamespaceContextWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.NamespaceContextWrapper",
	"java.lang.Object",
	"javax.xml.namespace.NamespaceContext",
	_NamespaceContextWrapper_FieldInfo_,
	_NamespaceContextWrapper_MethodInfo_
};

$Object* allocate$NamespaceContextWrapper($Class* clazz) {
	return $of($alloc(NamespaceContextWrapper));
}

void NamespaceContextWrapper::init$($NamespaceSupport* namespaceContext) {
	$set(this, fNamespaceContext, namespaceContext);
}

$String* NamespaceContextWrapper::getNamespaceURI($String* prefix) {
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException, "Prefix can\'t be null"_s);
	}
	return $nc(this->fNamespaceContext)->getURI($($nc(prefix)->intern()));
}

$String* NamespaceContextWrapper::getPrefix($String* namespaceURI) {
	if (namespaceURI == nullptr) {
		$throwNew($IllegalArgumentException, "URI can\'t be null."_s);
	}
	return $nc(this->fNamespaceContext)->getPrefix($($nc(namespaceURI)->intern()));
}

$Iterator* NamespaceContextWrapper::getPrefixes($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (namespaceURI == nullptr) {
		$throwNew($IllegalArgumentException, "URI can\'t be null."_s);
	} else {
		$var($List, vector, $nc(($cast($NamespaceSupport, this->fNamespaceContext)))->getPrefixes($($nc(namespaceURI)->intern())));
		return $nc(vector)->iterator();
	}
}

$NamespaceContext* NamespaceContextWrapper::getNamespaceContext() {
	return this->fNamespaceContext;
}

NamespaceContextWrapper::NamespaceContextWrapper() {
}

$Class* NamespaceContextWrapper::load$($String* name, bool initialize) {
	$loadClass(NamespaceContextWrapper, name, initialize, &_NamespaceContextWrapper_ClassInfo_, allocate$NamespaceContextWrapper);
	return class$;
}

$Class* NamespaceContextWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com