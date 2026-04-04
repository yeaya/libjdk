#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicPasswordFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* BasicPasswordFieldUI::createUI($JComponent* c) {
	$init(BasicPasswordFieldUI);
	return $new(BasicPasswordFieldUI);
}

$String* BasicPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

void BasicPasswordFieldUI::installDefaults() {
	$useLocalObjectStack();
	$BasicTextFieldUI::installDefaults();
	$var($String, prefix, getPropertyPrefix());
	$var($Character, echoChar, $cast($Character, $$nc($UIManager::getDefaults())->get($$str({prefix, ".echoChar"_s}))));
	if (echoChar != nullptr) {
		$LookAndFeel::installProperty($(getComponent()), "echoChar"_s, echoChar);
	}
}

$View* BasicPasswordFieldUI::create($Element* elem) {
	return $new($PasswordView, elem);
}

$ActionMap* BasicPasswordFieldUI::createActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, map, $BasicTextFieldUI::createActionMap());
	$init($DefaultEditorKit);
	if ($nc(map)->get($DefaultEditorKit::selectWordAction) != nullptr) {
		$var($Action, a, map->get($DefaultEditorKit::selectLineAction));
		if (a != nullptr) {
			map->remove($DefaultEditorKit::selectWordAction);
			map->put($DefaultEditorKit::selectWordAction, a);
		}
	}
	return map;
}

BasicPasswordFieldUI::BasicPasswordFieldUI() {
}

$Class* BasicPasswordFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicPasswordFieldUI, init$, void)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(BasicPasswordFieldUI, create, $View*, $Element*)},
		{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0, $virtualMethod(BasicPasswordFieldUI, createActionMap, $ActionMap*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicPasswordFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicPasswordFieldUI, getPropertyPrefix, $String*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(BasicPasswordFieldUI, installDefaults, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicPasswordFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicPasswordFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicPasswordFieldUI));
	});
	return class$;
}

$Class* BasicPasswordFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax