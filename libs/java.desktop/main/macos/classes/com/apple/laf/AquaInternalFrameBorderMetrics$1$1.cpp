#include <com/apple/laf/AquaInternalFrameBorderMetrics$1$1.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$1.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameBorderMetrics$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$1;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameBorderMetrics$1$1::init$($AquaInternalFrameBorderMetrics$1* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameBorderMetrics::init$();
}

void AquaInternalFrameBorderMetrics$1$1::initialize() {
	$set(this, font, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 13));
	this->titleBarHeight = 22;
	this->leftSidePadding = 7;
	this->buttonHeight = 15;
	this->buttonWidth = 15;
	this->buttonPadding = 5;
	this->downShift = 0;
}

AquaInternalFrameBorderMetrics$1$1::AquaInternalFrameBorderMetrics$1$1() {
}

$Class* AquaInternalFrameBorderMetrics$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFrameBorderMetrics$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameBorderMetrics$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaInternalFrameBorderMetrics$1;)V", nullptr, 0, $method(AquaInternalFrameBorderMetrics$1$1, init$, void, $AquaInternalFrameBorderMetrics$1*)},
		{"initialize", "()V", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorderMetrics$1$1, initialize, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorderMetrics$1",
		"getInstance",
		"()Lcom/apple/laf/AquaInternalFrameBorderMetrics;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorderMetrics$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaInternalFrameBorderMetrics$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorderMetrics$1$1",
		"com.apple.laf.AquaInternalFrameBorderMetrics",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameBorderMetrics"
	};
	$loadClass(AquaInternalFrameBorderMetrics$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorderMetrics$1$1);
	});
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com