#include <javax/xml/catalog/CatalogReader$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/CatalogReader.h>
#include <jcpp.h>

#undef DELEGATEPUBLIC
#undef DELEGATESYSTEM
#undef DELEGATEURI
#undef NEXTCATALOG
#undef PUBLIC
#undef REWRITESYSTEM
#undef REWRITEURI
#undef SYSTEM
#undef SYSTEMSUFFIX
#undef URI
#undef URISUFFIX

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;

namespace javax {
	namespace xml {
		namespace catalog {

$ints* CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType = nullptr;

void CatalogReader$1::clinit$($Class* clazz) {
	$assignStatic(CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType, $new($ints, $($BaseEntry$CatalogEntryType::values())->length));
	{
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::PUBLIC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::SYSTEM->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::REWRITESYSTEM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::SYSTEMSUFFIX->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::DELEGATEPUBLIC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::DELEGATESYSTEM->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::URI->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::REWRITEURI->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::URISUFFIX->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::DELEGATEURI->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType->set($BaseEntry$CatalogEntryType::NEXTCATALOG->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CatalogReader$1::CatalogReader$1() {
}

$Class* CatalogReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CatalogReader$1, $SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.xml.catalog.CatalogReader",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.catalog.CatalogReader$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.xml.catalog.CatalogReader$1",
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
		"javax.xml.catalog.CatalogReader"
	};
	$loadClass(CatalogReader$1, name, initialize, &classInfo$$, CatalogReader$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CatalogReader$1);
	});
	return class$;
}

$Class* CatalogReader$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax