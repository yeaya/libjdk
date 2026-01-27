#include <javax/xml/catalog/GroupEntry$ResolveType.h>

#include <java/lang/Enum.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef CONTINUE
#undef IGNORE
#undef RESOLVE_CONTINUE
#undef RESOLVE_IGNORE
#undef RESOLVE_STRICT
#undef STRICT

using $GroupEntry$ResolveTypeArray = $Array<::javax::xml::catalog::GroupEntry$ResolveType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _GroupEntry$ResolveType_FieldInfo_[] = {
	{"STRICT", "Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupEntry$ResolveType, STRICT)},
	{"CONTINUE", "Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupEntry$ResolveType, CONTINUE)},
	{"IGNORE", "Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupEntry$ResolveType, IGNORE)},
	{"$VALUES", "[Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupEntry$ResolveType, $VALUES)},
	{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(GroupEntry$ResolveType, literal)},
	{}
};

$MethodInfo _GroupEntry$ResolveType_MethodInfo_[] = {
	{"$values", "()[Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GroupEntry$ResolveType, $values, $GroupEntry$ResolveTypeArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(GroupEntry$ResolveType, init$, void, $String*, int32_t, $String*)},
	{"getType", "(Ljava/lang/String;)Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GroupEntry$ResolveType, getType, GroupEntry$ResolveType*, $String*)},
	{"isType", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(GroupEntry$ResolveType, isType, bool, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GroupEntry$ResolveType, valueOf, GroupEntry$ResolveType*, $String*)},
	{"values", "()[Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GroupEntry$ResolveType, values, $GroupEntry$ResolveTypeArray*)},
	{}
};

$InnerClassInfo _GroupEntry$ResolveType_InnerClassesInfo_[] = {
	{"javax.xml.catalog.GroupEntry$ResolveType", "javax.xml.catalog.GroupEntry", "ResolveType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GroupEntry$ResolveType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.xml.catalog.GroupEntry$ResolveType",
	"java.lang.Enum",
	nullptr,
	_GroupEntry$ResolveType_FieldInfo_,
	_GroupEntry$ResolveType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/xml/catalog/GroupEntry$ResolveType;>;",
	nullptr,
	_GroupEntry$ResolveType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.GroupEntry"
};

$Object* allocate$GroupEntry$ResolveType($Class* clazz) {
	return $of($alloc(GroupEntry$ResolveType));
}

GroupEntry$ResolveType* GroupEntry$ResolveType::STRICT = nullptr;
GroupEntry$ResolveType* GroupEntry$ResolveType::CONTINUE = nullptr;
GroupEntry$ResolveType* GroupEntry$ResolveType::IGNORE = nullptr;
$GroupEntry$ResolveTypeArray* GroupEntry$ResolveType::$VALUES = nullptr;

$GroupEntry$ResolveTypeArray* GroupEntry$ResolveType::$values() {
	$init(GroupEntry$ResolveType);
	return $new($GroupEntry$ResolveTypeArray, {
		GroupEntry$ResolveType::STRICT,
		GroupEntry$ResolveType::CONTINUE,
		GroupEntry$ResolveType::IGNORE
	});
}

$GroupEntry$ResolveTypeArray* GroupEntry$ResolveType::values() {
	$init(GroupEntry$ResolveType);
	return $cast($GroupEntry$ResolveTypeArray, GroupEntry$ResolveType::$VALUES->clone());
}

GroupEntry$ResolveType* GroupEntry$ResolveType::valueOf($String* name) {
	$init(GroupEntry$ResolveType);
	return $cast(GroupEntry$ResolveType, $Enum::valueOf(GroupEntry$ResolveType::class$, name));
}

void GroupEntry$ResolveType::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal, literal);
}

GroupEntry$ResolveType* GroupEntry$ResolveType::getType($String* resolveType) {
	$init(GroupEntry$ResolveType);
	{
		$var($GroupEntry$ResolveTypeArray, arr$, GroupEntry$ResolveType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			GroupEntry$ResolveType* type = arr$->get(i$);
			{
				if ($nc(type)->isType(resolveType)) {
					return type;
				}
			}
		}
	}
	return nullptr;
}

bool GroupEntry$ResolveType::isType($String* type) {
	return $nc(this->literal)->equals(type);
}

void clinit$GroupEntry$ResolveType($Class* class$) {
	$init($CatalogFeatures);
	$assignStatic(GroupEntry$ResolveType::STRICT, $new(GroupEntry$ResolveType, "STRICT"_s, 0, $CatalogFeatures::RESOLVE_STRICT));
	$assignStatic(GroupEntry$ResolveType::CONTINUE, $new(GroupEntry$ResolveType, "CONTINUE"_s, 1, $CatalogFeatures::RESOLVE_CONTINUE));
	$assignStatic(GroupEntry$ResolveType::IGNORE, $new(GroupEntry$ResolveType, "IGNORE"_s, 2, $CatalogFeatures::RESOLVE_IGNORE));
	$assignStatic(GroupEntry$ResolveType::$VALUES, GroupEntry$ResolveType::$values());
}

GroupEntry$ResolveType::GroupEntry$ResolveType() {
}

$Class* GroupEntry$ResolveType::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$ResolveType, name, initialize, &_GroupEntry$ResolveType_ClassInfo_, clinit$GroupEntry$ResolveType, allocate$GroupEntry$ResolveType);
	return class$;
}

$Class* GroupEntry$ResolveType::class$ = nullptr;

		} // catalog
	} // xml
} // javax