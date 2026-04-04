#include <com/apple/laf/AquaHighlighter$1.h>
#include <com/apple/laf/AquaHighlighter$AquaHighlightPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <jcpp.h>

using $AquaHighlighter$AquaHighlightPainter = ::com::apple::laf::AquaHighlighter$AquaHighlightPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaHighlighter$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaHighlighter$1::getInstance() {
	return $new($AquaHighlighter$AquaHighlightPainter, nullptr);
}

AquaHighlighter$1::AquaHighlighter$1() {
}

$Class* AquaHighlighter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaHighlighter$1, init$, void)},
		{"getInstance", "()Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $PROTECTED, $virtualMethod(AquaHighlighter$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaHighlighter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaHighlighter$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaHighlighter$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/text/LayeredHighlighter$LayerPainter;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaHighlighter"
	};
	$loadClass(AquaHighlighter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaHighlighter$1);
	});
	return class$;
}

$Class* AquaHighlighter$1::class$ = nullptr;

		} // laf
	} // apple
} // com