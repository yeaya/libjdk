#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>

#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <jcpp.h>

using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _PSVIProvider_MethodInfo_[] = {
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getElementPSVI, $ElementPSVI*)},
	{}
};

$ClassInfo _PSVIProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.PSVIProvider",
	nullptr,
	nullptr,
	nullptr,
	_PSVIProvider_MethodInfo_
};

$Object* allocate$PSVIProvider($Class* clazz) {
	return $of($alloc(PSVIProvider));
}

$Class* PSVIProvider::load$($String* name, bool initialize) {
	$loadClass(PSVIProvider, name, initialize, &_PSVIProvider_ClassInfo_, allocate$PSVIProvider);
	return class$;
}

$Class* PSVIProvider::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com