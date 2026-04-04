#include <javax/swing/text/html/AccessibleHTML$DocumentHandler.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void AccessibleHTML$DocumentHandler::init$($AccessibleHTML* this$0) {
	$set(this, this$0, this$0);
}

void AccessibleHTML$DocumentHandler::insertUpdate($DocumentEvent* e) {
	$$nc(this->this$0->getRootInfo())->update(e);
}

void AccessibleHTML$DocumentHandler::removeUpdate($DocumentEvent* e) {
	$$nc(this->this$0->getRootInfo())->update(e);
}

void AccessibleHTML$DocumentHandler::changedUpdate($DocumentEvent* e) {
	$$nc(this->this$0->getRootInfo())->update(e);
}

AccessibleHTML$DocumentHandler::AccessibleHTML$DocumentHandler() {
}

$Class* AccessibleHTML$DocumentHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$DocumentHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;)V", nullptr, $PRIVATE, $method(AccessibleHTML$DocumentHandler, init$, void, $AccessibleHTML*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$DocumentHandler, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$DocumentHandler, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$DocumentHandler, removeUpdate, void, $DocumentEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.AccessibleHTML$DocumentHandler", "javax.swing.text.html.AccessibleHTML", "DocumentHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.AccessibleHTML$DocumentHandler",
		"java.lang.Object",
		"javax.swing.event.DocumentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.AccessibleHTML"
	};
	$loadClass(AccessibleHTML$DocumentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleHTML$DocumentHandler);
	});
	return class$;
}

$Class* AccessibleHTML$DocumentHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax