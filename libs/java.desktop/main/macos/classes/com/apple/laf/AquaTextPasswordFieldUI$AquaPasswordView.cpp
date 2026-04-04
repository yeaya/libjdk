#include <com/apple/laf/AquaTextPasswordFieldUI$AquaPasswordView.h>
#include <com/apple/laf/AquaTextPasswordFieldUI.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $AquaTextPasswordFieldUI = ::com::apple::laf::AquaTextPasswordFieldUI;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextPasswordFieldUI$AquaPasswordView::init$($AquaTextPasswordFieldUI* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$PasswordView::init$(elem);
	setupDefaultEchoCharacter();
}

void AquaTextPasswordFieldUI$AquaPasswordView::setupDefaultEchoCharacter() {
	$useLocalObjectStack();
	$var($Character, echoChar, $cast($Character, $$nc($UIManager::getDefaults())->get($$str({$(this->this$0->getPropertyPrefix()), ".echoChar"_s}))));
	if (echoChar != nullptr) {
		$LookAndFeel::installProperty($($AquaTextPasswordFieldUI::access$000(this->this$0)), "echoChar"_s, echoChar);
	}
}

AquaTextPasswordFieldUI$AquaPasswordView::AquaTextPasswordFieldUI$AquaPasswordView() {
}

$Class* AquaTextPasswordFieldUI$AquaPasswordView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTextPasswordFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextPasswordFieldUI$AquaPasswordView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTextPasswordFieldUI;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(AquaTextPasswordFieldUI$AquaPasswordView, init$, void, $AquaTextPasswordFieldUI*, $Element*)},
		{"setupDefaultEchoCharacter", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI$AquaPasswordView, setupDefaultEchoCharacter, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView", "com.apple.laf.AquaTextPasswordFieldUI", "AquaPasswordView", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView",
		"javax.swing.text.PasswordView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextPasswordFieldUI"
	};
	$loadClass(AquaTextPasswordFieldUI$AquaPasswordView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextPasswordFieldUI$AquaPasswordView));
	});
	return class$;
}

$Class* AquaTextPasswordFieldUI$AquaPasswordView::class$ = nullptr;

		} // laf
	} // apple
} // com