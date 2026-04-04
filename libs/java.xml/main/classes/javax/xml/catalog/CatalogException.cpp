#include <javax/xml/catalog/CatalogException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace xml {
		namespace catalog {

void CatalogException::init$($String* message) {
	$RuntimeException::init$(message);
}

void CatalogException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

CatalogException::CatalogException() {
}

CatalogException::CatalogException(const CatalogException& e) : $RuntimeException(e) {
}

void CatalogException::throw$() {
	throw *this;
}

$Class* CatalogException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CatalogException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CatalogException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CatalogException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.catalog.CatalogException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CatalogException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CatalogException);
	});
	return class$;
}

$Class* CatalogException::class$ = nullptr;

		} // catalog
	} // xml
} // javax