#include <javax/swing/text/html/AccessibleHTML$PropertyChangeHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void AccessibleHTML$PropertyChangeHandler::init$($AccessibleHTML* this$0) {
	$set(this, this$0, this$0);
}

void AccessibleHTML$PropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	if ($$nc($nc(evt)->getPropertyName())->equals("document"_s)) {
		this->this$0->setDocument($($nc(this->this$0->editor)->getDocument()));
	}
}

AccessibleHTML$PropertyChangeHandler::AccessibleHTML$PropertyChangeHandler() {
}

$Class* AccessibleHTML$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;)V", nullptr, $PRIVATE, $method(AccessibleHTML$PropertyChangeHandler, init$, void, $AccessibleHTML*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler", "javax.swing.text.html.AccessibleHTML", "PropertyChangeHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(AccessibleHTML$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleHTML$PropertyChangeHandler);
	});
	return class$;
}

$Class* AccessibleHTML$PropertyChangeHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax