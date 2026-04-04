#include <com/apple/laf/AquaInternalFrameBorderMetrics$2$1.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$2.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameBorderMetrics$2 = ::com::apple::laf::AquaInternalFrameBorderMetrics$2;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameBorderMetrics$2$1::init$($AquaInternalFrameBorderMetrics$2* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameBorderMetrics::init$();
}

void AquaInternalFrameBorderMetrics$2$1::initialize() {
	$set(this, font, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 11));
	this->titleBarHeight = 16;
	this->leftSidePadding = 6;
	this->buttonHeight = 12;
	this->buttonWidth = 12;
	this->buttonPadding = 6;
	this->downShift = 0;
}

AquaInternalFrameBorderMetrics$2$1::AquaInternalFrameBorderMetrics$2$1() {
}

$Class* AquaInternalFrameBorderMetrics$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFrameBorderMetrics$2;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameBorderMetrics$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaInternalFrameBorderMetrics$2;)V", nullptr, 0, $method(AquaInternalFrameBorderMetrics$2$1, init$, void, $AquaInternalFrameBorderMetrics$2*)},
		{"initialize", "()V", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorderMetrics$2$1, initialize, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorderMetrics$2",
		"getInstance",
		"()Lcom/apple/laf/AquaInternalFrameBorderMetrics;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorderMetrics$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaInternalFrameBorderMetrics$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorderMetrics$2$1",
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
	$loadClass(AquaInternalFrameBorderMetrics$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorderMetrics$2$1);
	});
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$2$1::class$ = nullptr;

		} // laf
	} // apple
} // com