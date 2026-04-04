#include <javax/swing/text/DefaultEditorKit$SelectLineAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/DefaultEditorKit$BeginLineAction.h>
#include <javax/swing/text/DefaultEditorKit$EndLineAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit$BeginLineAction = ::javax::swing::text::DefaultEditorKit$BeginLineAction;
using $DefaultEditorKit$EndLineAction = ::javax::swing::text::DefaultEditorKit$EndLineAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$SelectLineAction::init$() {
	$TextAction::init$("select-line"_s);
	$set(this, start, $new($DefaultEditorKit$BeginLineAction, "pigdog"_s, false));
	$set(this, end, $new($DefaultEditorKit$EndLineAction, "pigdog"_s, true));
}

void DefaultEditorKit$SelectLineAction::actionPerformed($ActionEvent* e) {
	$nc(this->start)->actionPerformed(e);
	$nc(this->end)->actionPerformed(e);
}

DefaultEditorKit$SelectLineAction::DefaultEditorKit$SelectLineAction() {
}

$Class* DefaultEditorKit$SelectLineAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectLineAction, start)},
		{"end", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectLineAction, end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$SelectLineAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$SelectLineAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$SelectLineAction", "javax.swing.text.DefaultEditorKit", "SelectLineAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$SelectLineAction",
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
	$loadClass(DefaultEditorKit$SelectLineAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$SelectLineAction));
	});
	return class$;
}

$Class* DefaultEditorKit$SelectLineAction::class$ = nullptr;

		} // text
	} // swing
} // javax