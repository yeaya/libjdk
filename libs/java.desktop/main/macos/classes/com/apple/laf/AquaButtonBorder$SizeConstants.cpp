#include <com/apple/laf/AquaButtonBorder$SizeConstants.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonBorder$SizeConstants::init$() {
}

AquaButtonBorder$SizeConstants::AquaButtonBorder$SizeConstants() {
}

$Class* AquaButtonBorder$SizeConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fNormalButtonHeight", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fNormalButtonHeight)},
		{"fNormalMinButtonWidth", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fNormalMinButtonWidth)},
		{"fSquareButtonHeightThreshold", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fSquareButtonHeightThreshold)},
		{"fSquareButtonWidthThreshold", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaButtonBorder$SizeConstants, fSquareButtonWidthThreshold)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonBorder$SizeConstants, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonBorder$SizeConstants", "com.apple.laf.AquaButtonBorder", "SizeConstants", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonBorder$SizeConstants",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonBorder"
	};
	$loadClass(AquaButtonBorder$SizeConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonBorder$SizeConstants);
	});
	return class$;
}

$Class* AquaButtonBorder$SizeConstants::class$ = nullptr;

		} // laf
	} // apple
} // com