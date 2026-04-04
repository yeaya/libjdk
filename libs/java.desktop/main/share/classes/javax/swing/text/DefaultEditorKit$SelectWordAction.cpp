#include <javax/swing/text/DefaultEditorKit$SelectWordAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/DefaultEditorKit$BeginWordAction.h>
#include <javax/swing/text/DefaultEditorKit$EndWordAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit$BeginWordAction = ::javax::swing::text::DefaultEditorKit$BeginWordAction;
using $DefaultEditorKit$EndWordAction = ::javax::swing::text::DefaultEditorKit$EndWordAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$SelectWordAction::init$() {
	$TextAction::init$("select-word"_s);
	$set(this, start, $new($DefaultEditorKit$BeginWordAction, "pigdog"_s, false));
	$set(this, end, $new($DefaultEditorKit$EndWordAction, "pigdog"_s, true));
}

void DefaultEditorKit$SelectWordAction::actionPerformed($ActionEvent* e) {
	$nc(this->start)->actionPerformed(e);
	$nc(this->end)->actionPerformed(e);
}

DefaultEditorKit$SelectWordAction::DefaultEditorKit$SelectWordAction() {
}

$Class* DefaultEditorKit$SelectWordAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectWordAction, start)},
		{"end", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectWordAction, end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$SelectWordAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$SelectWordAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$SelectWordAction", "javax.swing.text.DefaultEditorKit", "SelectWordAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$SelectWordAction",
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
		"javax.swing.text.DefaultEditorKit"
	};
	$loadClass(DefaultEditorKit$SelectWordAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$SelectWordAction));
	});
	return class$;
}

$Class* DefaultEditorKit$SelectWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax