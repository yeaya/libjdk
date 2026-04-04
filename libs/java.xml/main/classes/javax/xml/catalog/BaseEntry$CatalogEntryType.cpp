#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <java/lang/Enum.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <jcpp.h>

#undef CATALOG
#undef CATALOGENTRY
#undef DELEGATEPUBLIC
#undef DELEGATESYSTEM
#undef DELEGATEURI
#undef GROUP
#undef NEXTCATALOG
#undef PUBLIC
#undef REWRITESYSTEM
#undef REWRITEURI
#undef SYSTEM
#undef SYSTEMSUFFIX
#undef URI
#undef URISUFFIX

using $BaseEntry$CatalogEntryTypeArray = $Array<::javax::xml::catalog::BaseEntry$CatalogEntryType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace catalog {

BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::CATALOG = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::CATALOGENTRY = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::GROUP = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::PUBLIC = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::SYSTEM = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::REWRITESYSTEM = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::SYSTEMSUFFIX = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::DELEGATEPUBLIC = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::DELEGATESYSTEM = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::URI = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::REWRITEURI = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::URISUFFIX = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::DELEGATEURI = nullptr;
BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::NEXTCATALOG = nullptr;
$BaseEntry$CatalogEntryTypeArray* BaseEntry$CatalogEntryType::$VALUES = nullptr;

$BaseEntry$CatalogEntryTypeArray* BaseEntry$CatalogEntryType::$values() {
	$init(BaseEntry$CatalogEntryType);
	return $new($BaseEntry$CatalogEntryTypeArray, {
		BaseEntry$CatalogEntryType::CATALOG,
		BaseEntry$CatalogEntryType::CATALOGENTRY,
		BaseEntry$CatalogEntryType::GROUP,
		BaseEntry$CatalogEntryType::PUBLIC,
		BaseEntry$CatalogEntryType::SYSTEM,
		BaseEntry$CatalogEntryType::REWRITESYSTEM,
		BaseEntry$CatalogEntryType::SYSTEMSUFFIX,
		BaseEntry$CatalogEntryType::DELEGATEPUBLIC,
		BaseEntry$CatalogEntryType::DELEGATESYSTEM,
		BaseEntry$CatalogEntryType::URI,
		BaseEntry$CatalogEntryType::REWRITEURI,
		BaseEntry$CatalogEntryType::URISUFFIX,
		BaseEntry$CatalogEntryType::DELEGATEURI,
		BaseEntry$CatalogEntryType::NEXTCATALOG
	});
}

$BaseEntry$CatalogEntryTypeArray* BaseEntry$CatalogEntryType::values() {
	$init(BaseEntry$CatalogEntryType);
	return $cast($BaseEntry$CatalogEntryTypeArray, BaseEntry$CatalogEntryType::$VALUES->clone());
}

BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::valueOf($String* name) {
	$init(BaseEntry$CatalogEntryType);
	return $cast(BaseEntry$CatalogEntryType, $Enum::valueOf(BaseEntry$CatalogEntryType::class$, name));
}

void BaseEntry$CatalogEntryType::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal, literal);
}

bool BaseEntry$CatalogEntryType::isType($String* type) {
	return $nc(this->literal)->equals(type);
}

BaseEntry$CatalogEntryType* BaseEntry$CatalogEntryType::getType($String* entryType) {
	$init(BaseEntry$CatalogEntryType);
	$var($BaseEntry$CatalogEntryTypeArray, arr$, BaseEntry$CatalogEntryType::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		BaseEntry$CatalogEntryType* type = arr$->get(i$);
		if ($nc(type)->isType(entryType)) {
			return type;
		}
	}
	return nullptr;
}

void BaseEntry$CatalogEntryType::clinit$($Class* clazz) {
	$assignStatic(BaseEntry$CatalogEntryType::CATALOG, $new(BaseEntry$CatalogEntryType, "CATALOG"_s, 0, "catalogfile"_s));
	$assignStatic(BaseEntry$CatalogEntryType::CATALOGENTRY, $new(BaseEntry$CatalogEntryType, "CATALOGENTRY"_s, 1, "catalog"_s));
	$assignStatic(BaseEntry$CatalogEntryType::GROUP, $new(BaseEntry$CatalogEntryType, "GROUP"_s, 2, "group"_s));
	$assignStatic(BaseEntry$CatalogEntryType::PUBLIC, $new(BaseEntry$CatalogEntryType, "PUBLIC"_s, 3, "public"_s));
	$assignStatic(BaseEntry$CatalogEntryType::SYSTEM, $new(BaseEntry$CatalogEntryType, "SYSTEM"_s, 4, "system"_s));
	$assignStatic(BaseEntry$CatalogEntryType::REWRITESYSTEM, $new(BaseEntry$CatalogEntryType, "REWRITESYSTEM"_s, 5, "rewriteSystem"_s));
	$assignStatic(BaseEntry$CatalogEntryType::SYSTEMSUFFIX, $new(BaseEntry$CatalogEntryType, "SYSTEMSUFFIX"_s, 6, "systemSuffix"_s));
	$assignStatic(BaseEntry$CatalogEntryType::DELEGATEPUBLIC, $new(BaseEntry$CatalogEntryType, "DELEGATEPUBLIC"_s, 7, "delegatePublic"_s));
	$assignStatic(BaseEntry$CatalogEntryType::DELEGATESYSTEM, $new(BaseEntry$CatalogEntryType, "DELEGATESYSTEM"_s, 8, "delegateSystem"_s));
	$assignStatic(BaseEntry$CatalogEntryType::URI, $new(BaseEntry$CatalogEntryType, "URI"_s, 9, "uri"_s));
	$assignStatic(BaseEntry$CatalogEntryType::REWRITEURI, $new(BaseEntry$CatalogEntryType, "REWRITEURI"_s, 10, "rewriteURI"_s));
	$assignStatic(BaseEntry$CatalogEntryType::URISUFFIX, $new(BaseEntry$CatalogEntryType, "URISUFFIX"_s, 11, "uriSuffix"_s));
	$assignStatic(BaseEntry$CatalogEntryType::DELEGATEURI, $new(BaseEntry$CatalogEntryType, "DELEGATEURI"_s, 12, "delegateURI"_s));
	$assignStatic(BaseEntry$CatalogEntryType::NEXTCATALOG, $new(BaseEntry$CatalogEntryType, "NEXTCATALOG"_s, 13, "nextCatalog"_s));
	$assignStatic(BaseEntry$CatalogEntryType::$VALUES, BaseEntry$CatalogEntryType::$values());
}

BaseEntry$CatalogEntryType::BaseEntry$CatalogEntryType() {
}

$Class* BaseEntry$CatalogEntryType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CATALOG", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, CATALOG)},
		{"CATALOGENTRY", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, CATALOGENTRY)},
		{"GROUP", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, GROUP)},
		{"PUBLIC", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, PUBLIC)},
		{"SYSTEM", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, SYSTEM)},
		{"REWRITESYSTEM", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, REWRITESYSTEM)},
		{"SYSTEMSUFFIX", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, SYSTEMSUFFIX)},
		{"DELEGATEPUBLIC", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, DELEGATEPUBLIC)},
		{"DELEGATESYSTEM", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, DELEGATESYSTEM)},
		{"URI", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, URI)},
		{"REWRITEURI", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, REWRITEURI)},
		{"URISUFFIX", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, URISUFFIX)},
		{"DELEGATEURI", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, DELEGATEURI)},
		{"NEXTCATALOG", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BaseEntry$CatalogEntryType, NEXTCATALOG)},
		{"$VALUES", "[Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BaseEntry$CatalogEntryType, $VALUES)},
		{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(BaseEntry$CatalogEntryType, literal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BaseEntry$CatalogEntryType, $values, $BaseEntry$CatalogEntryTypeArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(BaseEntry$CatalogEntryType, init$, void, $String*, int32_t, $String*)},
		{"getType", "(Ljava/lang/String;)Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC, $staticMethod(BaseEntry$CatalogEntryType, getType, BaseEntry$CatalogEntryType*, $String*)},
		{"isType", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(BaseEntry$CatalogEntryType, isType, bool, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC, $staticMethod(BaseEntry$CatalogEntryType, valueOf, BaseEntry$CatalogEntryType*, $String*)},
		{"values", "()[Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC | $STATIC, $staticMethod(BaseEntry$CatalogEntryType, values, $BaseEntry$CatalogEntryTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.catalog.BaseEntry$CatalogEntryType", "javax.xml.catalog.BaseEntry", "CatalogEntryType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"javax.xml.catalog.BaseEntry$CatalogEntryType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/xml/catalog/BaseEntry$CatalogEntryType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.catalog.BaseEntry"
	};
	$loadClass(BaseEntry$CatalogEntryType, name, initialize, &classInfo$$, BaseEntry$CatalogEntryType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BaseEntry$CatalogEntryType));
	});
	return class$;
}

$Class* BaseEntry$CatalogEntryType::class$ = nullptr;

		} // catalog
	} // xml
} // javax