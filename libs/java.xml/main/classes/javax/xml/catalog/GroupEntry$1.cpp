#include <javax/xml/catalog/GroupEntry$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef GROUP
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

$FieldInfo _GroupEntry$1_FieldInfo_[] = {
	{"$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupEntry$1, $SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)},
	{}
};

$EnclosingMethodInfo _GroupEntry$1_EnclosingMethodInfo_ = {
	"javax.xml.catalog.GroupEntry",
	nullptr,
	nullptr
};

$InnerClassInfo _GroupEntry$1_InnerClassesInfo_[] = {
	{"javax.xml.catalog.GroupEntry$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GroupEntry$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.xml.catalog.GroupEntry$1",
	"java.lang.Object",
	nullptr,
	_GroupEntry$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GroupEntry$1_EnclosingMethodInfo_,
	_GroupEntry$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.GroupEntry"
};

$Object* allocate$GroupEntry$1($Class* clazz) {
	return $of($alloc(GroupEntry$1));
}

$ints* GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType = nullptr;

void clinit$GroupEntry$1($Class* class$) {
	$assignStatic(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType, $new($ints, $($BaseEntry$CatalogEntryType::values())->length));
	{
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::SYSTEM->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::REWRITESYSTEM->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::SYSTEMSUFFIX->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::GROUP->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::PUBLIC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::URI->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::REWRITEURI->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::URISUFFIX->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GroupEntry$1::GroupEntry$1() {
}

$Class* GroupEntry$1::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$1, name, initialize, &_GroupEntry$1_ClassInfo_, clinit$GroupEntry$1, allocate$GroupEntry$1);
	return class$;
}

$Class* GroupEntry$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax