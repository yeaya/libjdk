#include <javax/swing/text/html/AccessibleHTML$TextElementInfo.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Element = ::javax::swing::text::Element;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$TextElementInfo$TextAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

int32_t AccessibleHTML$TextElementInfo::hashCode() {
	return this->$AccessibleHTML$ElementInfo::hashCode();
}

bool AccessibleHTML$TextElementInfo::equals(Object$* arg0) {
	return this->$AccessibleHTML$ElementInfo::equals(arg0);
}

$Object* AccessibleHTML$TextElementInfo::clone() {
	return this->$AccessibleHTML$ElementInfo::clone();
}

$String* AccessibleHTML$TextElementInfo::toString() {
	return this->$AccessibleHTML$ElementInfo::toString();
}

void AccessibleHTML$TextElementInfo::finalize() {
	this->$AccessibleHTML$ElementInfo::finalize();
}

void AccessibleHTML$TextElementInfo::init$($AccessibleHTML* this$0, $Element* element, $AccessibleHTML$ElementInfo* parent) {
	$set(this, this$0, this$0);
	$AccessibleHTML$ElementInfo::init$(this$0, element, parent);
}

$AccessibleContext* AccessibleHTML$TextElementInfo::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($AccessibleHTML$TextElementInfo$TextAccessibleContext, this, this));
	}
	return this->accessibleContext;
}

AccessibleHTML$TextElementInfo::AccessibleHTML$TextElementInfo() {
}

$Class* AccessibleHTML$TextElementInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TextElementInfo, this$0)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(AccessibleHTML$TextElementInfo, accessibleContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(AccessibleHTML$TextElementInfo, init$, void, $AccessibleHTML*, $Element*, $AccessibleHTML$ElementInfo*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TextElementInfo, getAccessibleContext, $AccessibleContext*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
		{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
		{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "javax.swing.text.html.AccessibleHTML$TextElementInfo", "TextAccessibleContext", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.AccessibleHTML$TextElementInfo",
		"javax.swing.text.html.AccessibleHTML$ElementInfo",
		"javax.accessibility.Accessible",
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
	$loadClass(AccessibleHTML$TextElementInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AccessibleHTML$TextElementInfo));
	});
	return class$;
}

$Class* AccessibleHTML$TextElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax