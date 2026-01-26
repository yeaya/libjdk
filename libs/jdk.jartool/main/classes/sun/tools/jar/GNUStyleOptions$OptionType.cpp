#include <sun/tools/jar/GNUStyleOptions$OptionType.h>

#include <java/lang/Enum.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <jcpp.h>

#undef ANY
#undef CREATE
#undef CREATE_UPDATE
#undef CREATE_UPDATE_INDEX
#undef MAIN_OPERATION
#undef OTHER

using $GNUStyleOptions$OptionTypeArray = $Array<::sun::tools::jar::GNUStyleOptions$OptionType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _GNUStyleOptions$OptionType_FieldInfo_[] = {
	{"MAIN_OPERATION", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, MAIN_OPERATION)},
	{"ANY", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, ANY)},
	{"CREATE", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, CREATE)},
	{"CREATE_UPDATE", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, CREATE_UPDATE)},
	{"CREATE_UPDATE_INDEX", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, CREATE_UPDATE_INDEX)},
	{"OTHER", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GNUStyleOptions$OptionType, OTHER)},
	{"$VALUES", "[Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GNUStyleOptions$OptionType, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(GNUStyleOptions$OptionType, name$)},
	{}
};

$MethodInfo _GNUStyleOptions$OptionType_MethodInfo_[] = {
	{"$values", "()[Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GNUStyleOptions$OptionType, $values, $GNUStyleOptions$OptionTypeArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(GNUStyleOptions$OptionType, init$, void, $String*, int32_t, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GNUStyleOptions$OptionType, valueOf, GNUStyleOptions$OptionType*, $String*)},
	{"values", "()[Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GNUStyleOptions$OptionType, values, $GNUStyleOptions$OptionTypeArray*)},
	{}
};

$InnerClassInfo _GNUStyleOptions$OptionType_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$OptionType", "sun.tools.jar.GNUStyleOptions", "OptionType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GNUStyleOptions$OptionType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.tools.jar.GNUStyleOptions$OptionType",
	"java.lang.Enum",
	nullptr,
	_GNUStyleOptions$OptionType_FieldInfo_,
	_GNUStyleOptions$OptionType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/tools/jar/GNUStyleOptions$OptionType;>;",
	nullptr,
	_GNUStyleOptions$OptionType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$OptionType($Class* clazz) {
	return $of($alloc(GNUStyleOptions$OptionType));
}

GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::MAIN_OPERATION = nullptr;
GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::ANY = nullptr;
GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::CREATE = nullptr;
GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::CREATE_UPDATE = nullptr;
GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::CREATE_UPDATE_INDEX = nullptr;
GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::OTHER = nullptr;
$GNUStyleOptions$OptionTypeArray* GNUStyleOptions$OptionType::$VALUES = nullptr;

$GNUStyleOptions$OptionTypeArray* GNUStyleOptions$OptionType::$values() {
	$init(GNUStyleOptions$OptionType);
	return $new($GNUStyleOptions$OptionTypeArray, {
		GNUStyleOptions$OptionType::MAIN_OPERATION,
		GNUStyleOptions$OptionType::ANY,
		GNUStyleOptions$OptionType::CREATE,
		GNUStyleOptions$OptionType::CREATE_UPDATE,
		GNUStyleOptions$OptionType::CREATE_UPDATE_INDEX,
		GNUStyleOptions$OptionType::OTHER
	});
}

$GNUStyleOptions$OptionTypeArray* GNUStyleOptions$OptionType::values() {
	$init(GNUStyleOptions$OptionType);
	return $cast($GNUStyleOptions$OptionTypeArray, GNUStyleOptions$OptionType::$VALUES->clone());
}

GNUStyleOptions$OptionType* GNUStyleOptions$OptionType::valueOf($String* name) {
	$init(GNUStyleOptions$OptionType);
	return $cast(GNUStyleOptions$OptionType, $Enum::valueOf(GNUStyleOptions$OptionType::class$, name));
}

void GNUStyleOptions$OptionType::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

void clinit$GNUStyleOptions$OptionType($Class* class$) {
	$assignStatic(GNUStyleOptions$OptionType::MAIN_OPERATION, $new(GNUStyleOptions$OptionType, "MAIN_OPERATION"_s, 0, "main"_s));
	$assignStatic(GNUStyleOptions$OptionType::ANY, $new(GNUStyleOptions$OptionType, "ANY"_s, 1, "any"_s));
	$assignStatic(GNUStyleOptions$OptionType::CREATE, $new(GNUStyleOptions$OptionType, "CREATE"_s, 2, "create"_s));
	$assignStatic(GNUStyleOptions$OptionType::CREATE_UPDATE, $new(GNUStyleOptions$OptionType, "CREATE_UPDATE"_s, 3, "create.update"_s));
	$assignStatic(GNUStyleOptions$OptionType::CREATE_UPDATE_INDEX, $new(GNUStyleOptions$OptionType, "CREATE_UPDATE_INDEX"_s, 4, "create.update.index"_s));
	$assignStatic(GNUStyleOptions$OptionType::OTHER, $new(GNUStyleOptions$OptionType, "OTHER"_s, 5, "other"_s));
	$assignStatic(GNUStyleOptions$OptionType::$VALUES, GNUStyleOptions$OptionType::$values());
}

GNUStyleOptions$OptionType::GNUStyleOptions$OptionType() {
}

$Class* GNUStyleOptions$OptionType::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$OptionType, name, initialize, &_GNUStyleOptions$OptionType_ClassInfo_, clinit$GNUStyleOptions$OptionType, allocate$GNUStyleOptions$OptionType);
	return class$;
}

$Class* GNUStyleOptions$OptionType::class$ = nullptr;

		} // jar
	} // tools
} // sun