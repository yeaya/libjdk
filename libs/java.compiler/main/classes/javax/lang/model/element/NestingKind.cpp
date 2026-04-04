#include <javax/lang/model/element/NestingKind.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANONYMOUS
#undef LOCAL
#undef MEMBER
#undef TOP_LEVEL

using $NestingKindArray = $Array<::javax::lang::model::element::NestingKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

NestingKind* NestingKind::TOP_LEVEL = nullptr;
NestingKind* NestingKind::MEMBER = nullptr;
NestingKind* NestingKind::LOCAL = nullptr;
NestingKind* NestingKind::ANONYMOUS = nullptr;
$NestingKindArray* NestingKind::$VALUES = nullptr;

$NestingKindArray* NestingKind::$values() {
	$init(NestingKind);
	return $new($NestingKindArray, {
		NestingKind::TOP_LEVEL,
		NestingKind::MEMBER,
		NestingKind::LOCAL,
		NestingKind::ANONYMOUS
	});
}

$NestingKindArray* NestingKind::values() {
	$init(NestingKind);
	return $cast($NestingKindArray, NestingKind::$VALUES->clone());
}

NestingKind* NestingKind::valueOf($String* name) {
	$init(NestingKind);
	return $cast(NestingKind, $Enum::valueOf(NestingKind::class$, name));
}

void NestingKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool NestingKind::isNested() {
	return this != NestingKind::TOP_LEVEL;
}

void NestingKind::clinit$($Class* clazz) {
	$assignStatic(NestingKind::TOP_LEVEL, $new(NestingKind, "TOP_LEVEL"_s, 0));
	$assignStatic(NestingKind::MEMBER, $new(NestingKind, "MEMBER"_s, 1));
	$assignStatic(NestingKind::LOCAL, $new(NestingKind, "LOCAL"_s, 2));
	$assignStatic(NestingKind::ANONYMOUS, $new(NestingKind, "ANONYMOUS"_s, 3));
	$assignStatic(NestingKind::$VALUES, NestingKind::$values());
}

NestingKind::NestingKind() {
}

$Class* NestingKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TOP_LEVEL", "Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NestingKind, TOP_LEVEL)},
		{"MEMBER", "Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NestingKind, MEMBER)},
		{"LOCAL", "Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NestingKind, LOCAL)},
		{"ANONYMOUS", "Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NestingKind, ANONYMOUS)},
		{"$VALUES", "[Ljavax/lang/model/element/NestingKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NestingKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/lang/model/element/NestingKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(NestingKind, $values, $NestingKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(NestingKind, init$, void, $String*, int32_t)},
		{"isNested", "()Z", nullptr, $PUBLIC, $method(NestingKind, isNested, bool)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(NestingKind, valueOf, NestingKind*, $String*)},
		{"values", "()[Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(NestingKind, values, $NestingKindArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.lang.model.element.NestingKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/lang/model/element/NestingKind;>;"
	};
	$loadClass(NestingKind, name, initialize, &classInfo$$, NestingKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(NestingKind));
	});
	return class$;
}

$Class* NestingKind::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax