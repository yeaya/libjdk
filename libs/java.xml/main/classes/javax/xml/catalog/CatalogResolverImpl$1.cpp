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

$FieldInfo _CatalogResolverImpl$1_FieldInfo_[] = {
	{"$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CatalogResolverImpl$1, $SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)},
	{}
};

$EnclosingMethodInfo _CatalogResolverImpl$1_EnclosingMethodInfo_ = {
	"javax.xml.catalog.CatalogResolverImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _CatalogResolverImpl$1_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogResolverImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CatalogResolverImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.xml.catalog.CatalogResolverImpl$1",
	"java.lang.Object",
	nullptr,
	_CatalogResolverImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CatalogResolverImpl$1_EnclosingMethodInfo_,
	_CatalogResolverImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogResolverImpl"
};

$Object* allocate$CatalogResolverImpl$1($Class* clazz) {
	return $of($alloc(CatalogResolverImpl$1));
}

$ints* CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType = nullptr;

void clinit$CatalogResolverImpl$1($Class* class$) {
	$assignStatic(CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType, $new($ints, $($GroupEntry$ResolveType::values())->length));
	{
		try {
			$nc(CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->set($GroupEntry$ResolveType::IGNORE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->set($GroupEntry$ResolveType::STRICT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CatalogResolverImpl$1::CatalogResolverImpl$1() {
}

$Class* CatalogResolverImpl$1::load$($String* name, bool initialize) {
	$loadClass(CatalogResolverImpl$1, name, initialize, &_CatalogResolverImpl$1_ClassInfo_, clinit$CatalogResolverImpl$1, allocate$CatalogResolverImpl$1);
	return class$;
}

$Class* CatalogResolverImpl$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax