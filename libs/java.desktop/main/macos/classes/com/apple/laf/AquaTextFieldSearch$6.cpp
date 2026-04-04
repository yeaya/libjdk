#include <com/apple/laf/AquaTextFieldSearch$6.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$6::init$(Object$* val$findPopup, $JButton* val$b, $JTextComponent* val$c) {
	$set(this, val$findPopup, val$findPopup);
	$set(this, val$b, val$b);
	$set(this, val$c, val$c);
	$MouseAdapter::init$();
}

void AquaTextFieldSearch$6::mousePressed($MouseEvent* e) {
	$nc($cast($JPopupMenu, this->val$findPopup))->show(this->val$b, 8, $nc(this->val$b)->getHeight() - 2);
	$nc(this->val$c)->requestFocusInWindow();
	this->val$c->repaint();
}

AquaTextFieldSearch$6::AquaTextFieldSearch$6() {
}

$Class* AquaTextFieldSearch$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$c)},
		{"val$b", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$b)},
		{"val$findPopup", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$6, val$findPopup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(AquaTextFieldSearch$6, init$, void, Object$*, $JButton*, $JTextComponent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$6, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch",
		"getFindButton",
		"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$6",
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
	$loadClass(AquaTextFieldSearch$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldSearch$6));
	});
	return class$;
}

$Class* AquaTextFieldSearch$6::class$ = nullptr;

		} // laf
	} // apple
} // com