#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl$XMLDTDLoaderHolder.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <jcpp.h>

using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _CoreDOMImplementationImpl$XMLDTDLoaderHolder_FieldInfo_[] = {
	{"loader", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader;", nullptr, 0, $field(CoreDOMImplementationImpl$XMLDTDLoaderHolder, loader)},
	{}
};

$MethodInfo _CoreDOMImplementationImpl$XMLDTDLoaderHolder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader;)V", nullptr, 0, $method(CoreDOMImplementationImpl$XMLDTDLoaderHolder, init$, void, $XMLDTDLoader*)},
	{}
};

$InnerClassInfo _CoreDOMImplementationImpl$XMLDTDLoaderHolder_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$XMLDTDLoaderHolder", "com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl", "XMLDTDLoaderHolder", $STATIC | $FINAL},
	{}
};

$ClassInfo _CoreDOMImplementationImpl$XMLDTDLoaderHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$XMLDTDLoaderHolder",
	"java.lang.Object",
	nullptr,
	_CoreDOMImplementationImpl$XMLDTDLoaderHolder_FieldInfo_,
	_CoreDOMImplementationImpl$XMLDTDLoaderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_CoreDOMImplementationImpl$XMLDTDLoaderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl"
};

$Object* allocate$CoreDOMImplementationImpl$XMLDTDLoaderHolder($Class* clazz) {
	return $of($alloc(CoreDOMImplementationImpl$XMLDTDLoaderHolder));
}

void CoreDOMImplementationImpl$XMLDTDLoaderHolder::init$($XMLDTDLoader* loader) {
	$set(this, loader, loader);
}

CoreDOMImplementationImpl$XMLDTDLoaderHolder::CoreDOMImplementationImpl$XMLDTDLoaderHolder() {
}

$Class* CoreDOMImplementationImpl$XMLDTDLoaderHolder::load$($String* name, bool initialize) {
	$loadClass(CoreDOMImplementationImpl$XMLDTDLoaderHolder, name, initialize, &_CoreDOMImplementationImpl$XMLDTDLoaderHolder_ClassInfo_, allocate$CoreDOMImplementationImpl$XMLDTDLoaderHolder);
	return class$;
}

$Class* CoreDOMImplementationImpl$XMLDTDLoaderHolder::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com