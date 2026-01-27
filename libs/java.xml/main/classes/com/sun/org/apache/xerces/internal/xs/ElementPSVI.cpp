#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>

#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <jcpp.h>

using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _ElementPSVI_MethodInfo_[] = {
	{"getElementDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementPSVI, getElementDeclaration, $XSElementDeclaration*)},
	{"getNil", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementPSVI, getNil, bool)},
	{"getNotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementPSVI, getNotation, $XSNotationDeclaration*)},
	{"getSchemaInformation", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementPSVI, getSchemaInformation, $XSModel*)},
	{}
};

$ClassInfo _ElementPSVI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.ElementPSVI",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.ItemPSVI",
	nullptr,
	_ElementPSVI_MethodInfo_
};

$Object* allocate$ElementPSVI($Class* clazz) {
	return $of($alloc(ElementPSVI));
}

$Class* ElementPSVI::load$($String* name, bool initialize) {
	$loadClass(ElementPSVI, name, initialize, &_ElementPSVI_ClassInfo_, allocate$ElementPSVI);
	return class$;
}

$Class* ElementPSVI::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com