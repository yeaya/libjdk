#include <javax/swing/text/html/AccessibleHTML$RootHTMLAccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $Document = ::javax::swing::text::Document;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void AccessibleHTML$RootHTMLAccessibleContext::init$($AccessibleHTML* this$0, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$0, this$0);
	$AccessibleHTML$HTMLAccessibleContext::init$(this$0, elementInfo);
}

$String* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleName() {
	if (this->this$0->model != nullptr) {
		$init($Document);
		return $cast($String, this->this$0->model->getProperty($Document::TitleProperty));
	} else {
		return nullptr;
	}
}

$String* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleDescription() {
	return $nc(this->this$0->editor)->getContentType();
}

$AccessibleRole* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TEXT;
}

AccessibleHTML$RootHTMLAccessibleContext::AccessibleHTML$RootHTMLAccessibleContext() {
}

$Class* AccessibleHTML$RootHTMLAccessibleContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$RootHTMLAccessibleContext, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(AccessibleHTML$RootHTMLAccessibleContext, init$, void, $AccessibleHTML*, $AccessibleHTML$ElementInfo*)},
		{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$RootHTMLAccessibleContext, getAccessibleDescription, $String*)},
		{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$RootHTMLAccessibleContext, getAccessibleName, $String*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$RootHTMLAccessibleContext, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "RootHTMLAccessibleContext", $PRIVATE},
		{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext",
		"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
		nullptr,
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
	$loadClass(AccessibleHTML$RootHTMLAccessibleContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AccessibleHTML$RootHTMLAccessibleContext));
	});
	return class$;
}

$Class* AccessibleHTML$RootHTMLAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax