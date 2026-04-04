#include <javax/swing/plaf/basic/BasicTextUI$TextActionWrapper.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTextUI$TextActionWrapper::init$($BasicTextUI* this$0, $TextAction* action) {
	$set(this, this$0, this$0);
	$init($Action);
	$TextAction::init$($$cast($String, $nc(action)->getValue($Action::NAME)));
	$set(this, action, nullptr);
	$set(this, action, action);
}

void BasicTextUI$TextActionWrapper::actionPerformed($ActionEvent* e) {
	$nc(this->action)->actionPerformed(e);
}

bool BasicTextUI$TextActionWrapper::isEnabled() {
	return (this->this$0->editor == nullptr || this->this$0->editor->isEditable()) ? $nc(this->action)->isEnabled() : false;
}

BasicTextUI$TextActionWrapper::BasicTextUI$TextActionWrapper() {
}

$Class* BasicTextUI$TextActionWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$TextActionWrapper, this$0)},
		{"action", "Ljavax/swing/text/TextAction;", nullptr, 0, $field(BasicTextUI$TextActionWrapper, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;Ljavax/swing/text/TextAction;)V", nullptr, $PUBLIC, $method(BasicTextUI$TextActionWrapper, init$, void, $BasicTextUI*, $TextAction*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTextUI$TextActionWrapper, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTextUI$TextActionWrapper, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextUI$TextActionWrapper", "javax.swing.plaf.basic.BasicTextUI", "TextActionWrapper", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextUI$TextActionWrapper",
		"javax.swing.text.TextAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextUI"
	};
	$loadClass(BasicTextUI$TextActionWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextUI$TextActionWrapper));
	});
	return class$;
}

$Class* BasicTextUI$TextActionWrapper::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax