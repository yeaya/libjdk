#include <com/apple/laf/AquaTextFieldSearch$5.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$5::init$($JTextComponent* val$c) {
	$set(this, val$c, val$c);
	$MouseAdapter::init$();
}

void AquaTextFieldSearch$5::mousePressed($MouseEvent* e) {
	$nc(this->val$c)->requestFocusInWindow();
}

AquaTextFieldSearch$5::AquaTextFieldSearch$5() {
}

$Class* AquaTextFieldSearch$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$5, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(AquaTextFieldSearch$5, init$, void, $JTextComponent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$5, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"createButton",
		"(Ljavax/swing/text/JTextComponent;Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$5", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$5",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextFieldSearch"
	};
	$loadClass(AquaTextFieldSearch$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldSearch$5));
	});
	return class$;
}

$Class* AquaTextFieldSearch$5::class$ = nullptr;

		} // laf
	} // apple
} // com