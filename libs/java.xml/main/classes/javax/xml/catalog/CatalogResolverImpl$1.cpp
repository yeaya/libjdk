#include <javax/xml/catalog/CatalogResolverImpl$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/xml/catalog/CatalogResolverImpl.h>
#include <javax/xml/catalog/GroupEntry$ResolveType.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef IGNORE
#undef STRICT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $GroupEntry$ResolveType = ::javax::xml::catalog::GroupEntry$ResolveType;

namespace javax {
	namespace xml {
		namespace catalog {

$ints* CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType = nullptr;

void CatalogResolverImpl$1::clinit$($Class* clazz) {
	$assignStatic(CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType, $new($ints, $($GroupEntry$ResolveType::values())->length));
	{
		try {
			CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType->set($GroupEntry$ResolveType::IGNORE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType->set($GroupEntry$ResolveType::STRICT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CatalogResolverImpl$1::CatalogResolverImpl$1() {
}

$Class* CatalogResolverImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CatalogResolverImpl$1, $SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.xml.catalog.CatalogResolverImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.catalog.CatalogResolverImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.xml.catalog.CatalogResolverImpl$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.catalog.CatalogResolverImpl"
	};
	$loadClass(CatalogResolverImpl$1, name, initialize, &classInfo$$, CatalogResolverImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CatalogResolverImpl$1);
	});
	return class$;
}

$Class* CatalogResolverImpl$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax