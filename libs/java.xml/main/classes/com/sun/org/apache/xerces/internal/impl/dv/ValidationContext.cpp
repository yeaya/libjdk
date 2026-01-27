#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>

#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$MethodInfo _ValidationContext_MethodInfo_[] = {
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, addId, void, $String*)},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, addIdRef, void, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, getLocale, $Locale*)},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, getSymbol, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, getURI, $String*, $String*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, isEntityUnparsed, bool, $String*)},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, isIdDeclared, bool, $String*)},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, needExtraChecking, bool)},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, needFacetChecking, bool)},
	{"needToNormalize", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, needToNormalize, bool)},
	{"useNamespaces", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidationContext, useNamespaces, bool)},
	{}
};

$ClassInfo _ValidationContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	nullptr,
	nullptr,
	nullptr,
	_ValidationContext_MethodInfo_
};

$Object* allocate$ValidationContext($Class* clazz) {
	return $of($alloc(ValidationContext));
}

$Class* ValidationContext::load$($String* name, bool initialize) {
	$loadClass(ValidationContext, name, initialize, &_ValidationContext_ClassInfo_, allocate$ValidationContext);
	return class$;
}

$Class* ValidationContext::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com