#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xinclude/MultipleScopeNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <jcpp.h>

using $MultipleScopeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::MultipleScopeNamespaceSupport;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$FieldInfo _XIncludeNamespaceSupport_FieldInfo_[] = {
	{"fValidContext", "[Z", nullptr, $PRIVATE, $field(XIncludeNamespaceSupport, fValidContext)},
	{}
};

$MethodInfo _XIncludeNamespaceSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XIncludeNamespaceSupport, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(XIncludeNamespaceSupport, init$, void, $NamespaceContext*)},
	{"getURIFromIncludeParent", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeNamespaceSupport, getURIFromIncludeParent, $String*, $String*)},
	{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(XIncludeNamespaceSupport, pushContext, void)},
	{"setContextInvalid", "()V", nullptr, $PUBLIC, $virtualMethod(XIncludeNamespaceSupport, setContextInvalid, void)},
	{}
};

$ClassInfo _XIncludeNamespaceSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeNamespaceSupport",
	"com.sun.org.apache.xerces.internal.xinclude.MultipleScopeNamespaceSupport",
	nullptr,
	_XIncludeNamespaceSupport_FieldInfo_,
	_XIncludeNamespaceSupport_MethodInfo_
};

$Object* allocate$XIncludeNamespaceSupport($Class* clazz) {
	return $of($alloc(XIncludeNamespaceSupport));
}

void XIncludeNamespaceSupport::init$() {
	$MultipleScopeNamespaceSupport::init$();
	$set(this, fValidContext, $new($booleans, 8));
}

void XIncludeNamespaceSupport::init$($NamespaceContext* context) {
	$MultipleScopeNamespaceSupport::init$(context);
	$set(this, fValidContext, $new($booleans, 8));
}

void XIncludeNamespaceSupport::pushContext() {
	$MultipleScopeNamespaceSupport::pushContext();
	if (this->fCurrentContext + 1 == $nc(this->fValidContext)->length) {
		$var($booleans, contextarray, $new($booleans, $nc(this->fValidContext)->length * 2));
		$System::arraycopy(this->fValidContext, 0, contextarray, 0, $nc(this->fValidContext)->length);
		$set(this, fValidContext, contextarray);
	}
	$nc(this->fValidContext)->set(this->fCurrentContext, true);
}

void XIncludeNamespaceSupport::setContextInvalid() {
	$nc(this->fValidContext)->set(this->fCurrentContext, false);
}

$String* XIncludeNamespaceSupport::getURIFromIncludeParent($String* prefix) {
	int32_t lastValidContext = this->fCurrentContext - 1;
	while (lastValidContext > 0 && !$nc(this->fValidContext)->get(lastValidContext)) {
		--lastValidContext;
	}
	return getURI(prefix, lastValidContext);
}

XIncludeNamespaceSupport::XIncludeNamespaceSupport() {
}

$Class* XIncludeNamespaceSupport::load$($String* name, bool initialize) {
	$loadClass(XIncludeNamespaceSupport, name, initialize, &_XIncludeNamespaceSupport_ClassInfo_, allocate$XIncludeNamespaceSupport);
	return class$;
}

$Class* XIncludeNamespaceSupport::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com