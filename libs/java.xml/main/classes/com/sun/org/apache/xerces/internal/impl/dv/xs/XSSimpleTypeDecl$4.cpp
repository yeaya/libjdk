#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$4.h>

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

$MethodInfo _XSSimpleTypeDecl$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XSSimpleTypeDecl$4, init$, void)},
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, addId, void, $String*)},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, addIdRef, void, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, getLocale, $Locale*)},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, getSymbol, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, getURI, $String*, $String*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, isEntityUnparsed, bool, $String*)},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, isIdDeclared, bool, $String*)},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, needExtraChecking, bool)},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, needFacetChecking, bool)},
	{"needToNormalize", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, needToNormalize, bool)},
	{"useNamespaces", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$4, useNamespaces, bool)},
	{}
};

$EnclosingMethodInfo _XSSimpleTypeDecl$4_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl",
	nullptr,
	nullptr
};

$InnerClassInfo _XSSimpleTypeDecl$4_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSSimpleTypeDecl$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$4",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	nullptr,
	_XSSimpleTypeDecl$4_MethodInfo_,
	nullptr,
	&_XSSimpleTypeDecl$4_EnclosingMethodInfo_,
	_XSSimpleTypeDecl$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$4($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$4));
}

void XSSimpleTypeDecl$4::init$() {
}

bool XSSimpleTypeDecl$4::needFacetChecking() {
	return true;
}

bool XSSimpleTypeDecl$4::needExtraChecking() {
	return false;
}

bool XSSimpleTypeDecl$4::needToNormalize() {
	return false;
}

bool XSSimpleTypeDecl$4::useNamespaces() {
	return true;
}

bool XSSimpleTypeDecl$4::isEntityDeclared($String* name) {
	return false;
}

bool XSSimpleTypeDecl$4::isEntityUnparsed($String* name) {
	return false;
}

bool XSSimpleTypeDecl$4::isIdDeclared($String* name) {
	return false;
}

void XSSimpleTypeDecl$4::addId($String* name) {
}

void XSSimpleTypeDecl$4::addIdRef($String* name) {
}

$String* XSSimpleTypeDecl$4::getSymbol($String* symbol) {
	return $nc(symbol)->intern();
}

$String* XSSimpleTypeDecl$4::getURI($String* prefix) {
	return nullptr;
}

$Locale* XSSimpleTypeDecl$4::getLocale() {
	return $Locale::getDefault();
}

XSSimpleTypeDecl$4::XSSimpleTypeDecl$4() {
}

$Class* XSSimpleTypeDecl$4::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$4, name, initialize, &_XSSimpleTypeDecl$4_ClassInfo_, allocate$XSSimpleTypeDecl$4);
	return class$;
}

$Class* XSSimpleTypeDecl$4::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com