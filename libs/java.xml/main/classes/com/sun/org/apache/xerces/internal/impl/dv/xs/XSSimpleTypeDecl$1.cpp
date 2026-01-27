#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$1.h>

#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
								namespace xs {

$MethodInfo _XSSimpleTypeDecl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XSSimpleTypeDecl$1, init$, void)},
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, addId, void, $String*)},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, addIdRef, void, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, getLocale, $Locale*)},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, getSymbol, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, getURI, $String*, $String*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, isEntityUnparsed, bool, $String*)},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, isIdDeclared, bool, $String*)},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, needExtraChecking, bool)},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, needFacetChecking, bool)},
	{"needToNormalize", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, needToNormalize, bool)},
	{"useNamespaces", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$1, useNamespaces, bool)},
	{}
};

$EnclosingMethodInfo _XSSimpleTypeDecl$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl",
	nullptr,
	nullptr
};

$InnerClassInfo _XSSimpleTypeDecl$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSSimpleTypeDecl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$1",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	nullptr,
	_XSSimpleTypeDecl$1_MethodInfo_,
	nullptr,
	&_XSSimpleTypeDecl$1_EnclosingMethodInfo_,
	_XSSimpleTypeDecl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$1($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$1));
}

void XSSimpleTypeDecl$1::init$() {
}

bool XSSimpleTypeDecl$1::needFacetChecking() {
	return true;
}

bool XSSimpleTypeDecl$1::needExtraChecking() {
	return false;
}

bool XSSimpleTypeDecl$1::needToNormalize() {
	return true;
}

bool XSSimpleTypeDecl$1::useNamespaces() {
	return true;
}

bool XSSimpleTypeDecl$1::isEntityDeclared($String* name) {
	return false;
}

bool XSSimpleTypeDecl$1::isEntityUnparsed($String* name) {
	return false;
}

bool XSSimpleTypeDecl$1::isIdDeclared($String* name) {
	return false;
}

void XSSimpleTypeDecl$1::addId($String* name) {
}

void XSSimpleTypeDecl$1::addIdRef($String* name) {
}

$String* XSSimpleTypeDecl$1::getSymbol($String* symbol) {
	return $nc(symbol)->intern();
}

$String* XSSimpleTypeDecl$1::getURI($String* prefix) {
	return nullptr;
}

$Locale* XSSimpleTypeDecl$1::getLocale() {
	return $Locale::getDefault();
}

XSSimpleTypeDecl$1::XSSimpleTypeDecl$1() {
}

$Class* XSSimpleTypeDecl$1::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$1, name, initialize, &_XSSimpleTypeDecl$1_ClassInfo_, allocate$XSSimpleTypeDecl$1);
	return class$;
}

$Class* XSSimpleTypeDecl$1::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com