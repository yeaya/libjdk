#include <sun/font/LayoutPathImpl$EndType.h>
#include <java/lang/Enum.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef CLOSED
#undef EXTENDED
#undef PINNED

using $LayoutPathImpl$EndTypeArray = $Array<::sun::font::LayoutPathImpl$EndType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

LayoutPathImpl$EndType* LayoutPathImpl$EndType::PINNED = nullptr;
LayoutPathImpl$EndType* LayoutPathImpl$EndType::EXTENDED = nullptr;
LayoutPathImpl$EndType* LayoutPathImpl$EndType::CLOSED = nullptr;
$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::$VALUES = nullptr;

$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::$values() {
	$init(LayoutPathImpl$EndType);
	return $new($LayoutPathImpl$EndTypeArray, {
		LayoutPathImpl$EndType::PINNED,
		LayoutPathImpl$EndType::EXTENDED,
		LayoutPathImpl$EndType::CLOSED
	});
}

$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::values() {
	$init(LayoutPathImpl$EndType);
	return $cast($LayoutPathImpl$EndTypeArray, LayoutPathImpl$EndType::$VALUES->clone());
}

LayoutPathImpl$EndType* LayoutPathImpl$EndType::valueOf($String* name) {
	$init(LayoutPathImpl$EndType);
	return $cast(LayoutPathImpl$EndType, $Enum::valueOf(LayoutPathImpl$EndType::class$, name));
}

void LayoutPathImpl$EndType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool LayoutPathImpl$EndType::isPinned() {
	return this == LayoutPathImpl$EndType::PINNED;
}

bool LayoutPathImpl$EndType::isExtended() {
	return this == LayoutPathImpl$EndType::EXTENDED;
}

bool LayoutPathImpl$EndType::isClosed() {
	return this == LayoutPathImpl$EndType::CLOSED;
}

void LayoutPathImpl$EndType::clinit$($Class* clazz) {
	$assignStatic(LayoutPathImpl$EndType::PINNED, $new(LayoutPathImpl$EndType, "PINNED"_s, 0));
	$assignStatic(LayoutPathImpl$EndType::EXTENDED, $new(LayoutPathImpl$EndType, "EXTENDED"_s, 1));
	$assignStatic(LayoutPathImpl$EndType::CLOSED, $new(LayoutPathImpl$EndType, "CLOSED"_s, 2));
	$assignStatic(LayoutPathImpl$EndType::$VALUES, LayoutPathImpl$EndType::$values());
}

LayoutPathImpl$EndType::LayoutPathImpl$EndType() {
}

$Class* LayoutPathImpl$EndType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PINNED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, PINNED)},
		{"EXTENDED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, EXTENDED)},
		{"CLOSED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, CLOSED)},
		{"$VALUES", "[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutPathImpl$EndType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LayoutPathImpl$EndType, $values, $LayoutPathImpl$EndTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(LayoutPathImpl$EndType, init$, void, $String*, int32_t)},
		{"isClosed", "()Z", nullptr, $PUBLIC, $method(LayoutPathImpl$EndType, isClosed, bool)},
		{"isExtended", "()Z", nullptr, $PUBLIC, $method(LayoutPathImpl$EndType, isExtended, bool)},
		{"isPinned", "()Z", nullptr, $PUBLIC, $method(LayoutPathImpl$EndType, isPinned, bool)},
		{"valueOf", "(Ljava/lang/String;)Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutPathImpl$EndType, valueOf, LayoutPathImpl$EndType*, $String*)},
		{"values", "()[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutPathImpl$EndType, values, $LayoutPathImpl$EndTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.LayoutPathImpl$EndType", "sun.font.LayoutPathImpl", "EndType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"sun.font.LayoutPathImpl$EndType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/font/LayoutPathImpl$EndType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.LayoutPathImpl"
	};
	$loadClass(LayoutPathImpl$EndType, name, initialize, &classInfo$$, LayoutPathImpl$EndType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LayoutPathImpl$EndType));
	});
	return class$;
}

$Class* LayoutPathImpl$EndType::class$ = nullptr;

	} // font
} // sun