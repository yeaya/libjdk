#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaHighlighter$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $AquaHighlighter$1 = ::com::apple::laf::AquaHighlighter$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaHighlighter::hashCode() {
	 return this->$DefaultHighlighter::hashCode();
}

bool AquaHighlighter::equals(Object$* arg0) {
	 return this->$DefaultHighlighter::equals(arg0);
}

$Object* AquaHighlighter::clone() {
	 return this->$DefaultHighlighter::clone();
}

$String* AquaHighlighter::toString() {
	 return this->$DefaultHighlighter::toString();
}

void AquaHighlighter::finalize() {
	this->$DefaultHighlighter::finalize();
}

$AquaUtils$RecyclableSingleton* AquaHighlighter::instance = nullptr;

void AquaHighlighter::init$() {
	$DefaultHighlighter::init$();
}

$LayeredHighlighter$LayerPainter* AquaHighlighter::getInstance() {
	$init(AquaHighlighter);
	return $cast($LayeredHighlighter$LayerPainter, AquaHighlighter::instance->get());
}

void AquaHighlighter::clinit$($Class* clazz) {
	$assignStatic(AquaHighlighter::instance, $new($AquaHighlighter$1));
}

AquaHighlighter::AquaHighlighter() {
}

$Class* AquaHighlighter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/text/LayeredHighlighter$LayerPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaHighlighter, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaHighlighter, init$, void)},
		{"getInstance", "()Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaHighlighter, getInstance, $LayeredHighlighter$LayerPainter*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaHighlighter$AquaHighlightPainter", "com.apple.laf.AquaHighlighter", "AquaHighlightPainter", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaHighlighter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaHighlighter",
		"javax.swing.text.DefaultHighlighter",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaHighlighter$AquaHighlightPainter,com.apple.laf.AquaHighlighter$1"
	};
	$loadClass(AquaHighlighter, name, initialize, &classInfo$$, AquaHighlighter::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaHighlighter));
	});
	return class$;
}

$Class* AquaHighlighter::class$ = nullptr;

		} // laf
	} // apple
} // com