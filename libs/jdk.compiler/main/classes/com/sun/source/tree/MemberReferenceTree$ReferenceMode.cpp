#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INVOKE
#undef NEW

using $MemberReferenceTree$ReferenceModeArray = $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::INVOKE = nullptr;
MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::NEW = nullptr;
$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::$VALUES = nullptr;

$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::$values() {
	$init(MemberReferenceTree$ReferenceMode);
	return $new($MemberReferenceTree$ReferenceModeArray, {
		MemberReferenceTree$ReferenceMode::INVOKE,
		MemberReferenceTree$ReferenceMode::NEW
	});
}

$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::values() {
	$init(MemberReferenceTree$ReferenceMode);
	return $cast($MemberReferenceTree$ReferenceModeArray, MemberReferenceTree$ReferenceMode::$VALUES->clone());
}

MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::valueOf($String* name) {
	$init(MemberReferenceTree$ReferenceMode);
	return $cast(MemberReferenceTree$ReferenceMode, $Enum::valueOf(MemberReferenceTree$ReferenceMode::class$, name));
}

void MemberReferenceTree$ReferenceMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MemberReferenceTree$ReferenceMode::clinit$($Class* clazz) {
	$assignStatic(MemberReferenceTree$ReferenceMode::INVOKE, $new(MemberReferenceTree$ReferenceMode, "INVOKE"_s, 0));
	$assignStatic(MemberReferenceTree$ReferenceMode::NEW, $new(MemberReferenceTree$ReferenceMode, "NEW"_s, 1));
	$assignStatic(MemberReferenceTree$ReferenceMode::$VALUES, MemberReferenceTree$ReferenceMode::$values());
}

MemberReferenceTree$ReferenceMode::MemberReferenceTree$ReferenceMode() {
}

$Class* MemberReferenceTree$ReferenceMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INVOKE", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberReferenceTree$ReferenceMode, INVOKE)},
		{"NEW", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberReferenceTree$ReferenceMode, NEW)},
		{"$VALUES", "[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberReferenceTree$ReferenceMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MemberReferenceTree$ReferenceMode, $values, $MemberReferenceTree$ReferenceModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MemberReferenceTree$ReferenceMode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberReferenceTree$ReferenceMode, valueOf, MemberReferenceTree$ReferenceMode*, $String*)},
		{"values", "()[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberReferenceTree$ReferenceMode, values, $MemberReferenceTree$ReferenceModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.tree.MemberReferenceTree$ReferenceMode", "com.sun.source.tree.MemberReferenceTree", "ReferenceMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.source.tree.MemberReferenceTree$ReferenceMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.tree.MemberReferenceTree"
	};
	$loadClass(MemberReferenceTree$ReferenceMode, name, initialize, &classInfo$$, MemberReferenceTree$ReferenceMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MemberReferenceTree$ReferenceMode));
	});
	return class$;
}

$Class* MemberReferenceTree$ReferenceMode::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com