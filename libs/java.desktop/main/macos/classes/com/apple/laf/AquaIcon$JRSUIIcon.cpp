#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaIcon$JRSUIIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool AquaIcon$JRSUIIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* AquaIcon$JRSUIIcon::clone() {
	 return this->$Icon::clone();
}

$String* AquaIcon$JRSUIIcon::toString() {
	 return this->$Icon::toString();
}

void AquaIcon$JRSUIIcon::finalize() {
	this->$Icon::finalize();
}

void AquaIcon$JRSUIIcon::init$() {
	$set(this, painter, $AquaPainter::create($($JRSUIState::getInstance())));
}

void AquaIcon$JRSUIIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	int32_t var$0 = getIconWidth();
	$nc(this->painter)->paint(g, c, x, y, var$0, getIconHeight());
}

AquaIcon$JRSUIIcon::AquaIcon$JRSUIIcon() {
}

$Class* AquaIcon$JRSUIIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaIcon$JRSUIIcon, painter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(AquaIcon$JRSUIIcon, init$, void)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(AquaIcon$JRSUIIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$JRSUIIcon", "com.apple.laf.AquaIcon", "JRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaIcon$JRSUIIcon",
		"java.lang.Object",
		"javax.swing.Icon,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$JRSUIIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaIcon$JRSUIIcon));
	});
	return class$;
}

$Class* AquaIcon$JRSUIIcon::class$ = nullptr;

		} // laf
	} // apple
} // com