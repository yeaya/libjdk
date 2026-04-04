#include <javax/swing/text/DefaultEditorKit$SelectParagraphAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/DefaultEditorKit$BeginParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit$EndParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit$BeginParagraphAction = ::javax::swing::text::DefaultEditorKit$BeginParagraphAction;
using $DefaultEditorKit$EndParagraphAction = ::javax::swing::text::DefaultEditorKit$EndParagraphAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$SelectParagraphAction::init$() {
	$TextAction::init$("select-paragraph"_s);
	$set(this, start, $new($DefaultEditorKit$BeginParagraphAction, "pigdog"_s, false));
	$set(this, end, $new($DefaultEditorKit$EndParagraphAction, "pigdog"_s, true));
}

void DefaultEditorKit$SelectParagraphAction::actionPerformed($ActionEvent* e) {
	$nc(this->start)->actionPerformed(e);
	$nc(this->end)->actionPerformed(e);
}

DefaultEditorKit$SelectParagraphAction::DefaultEditorKit$SelectParagraphAction() {
}

$Class* DefaultEditorKit$SelectParagraphAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectParagraphAction, start)},
		{"end", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectParagraphAction, end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$SelectParagraphAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$SelectParagraphAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$SelectParagraphAction", "javax.swing.text.DefaultEditorKit", "SelectParagraphAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$SelectParagraphAction",
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
	$loadClass(DefaultEditorKit$SelectParagraphAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$SelectParagraphAction));
	});
	return class$;
}

$Class* DefaultEditorKit$SelectParagraphAction::class$ = nullptr;

		} // text
	} // swing
} // javax