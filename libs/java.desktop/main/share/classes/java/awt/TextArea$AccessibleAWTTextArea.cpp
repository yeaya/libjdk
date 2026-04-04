#include <java/awt/TextArea$AccessibleAWTTextArea.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef MULTI_LINE

using $TextArea = ::java::awt::TextArea;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

void TextArea$AccessibleAWTTextArea::init$($TextArea* this$0) {
	$set(this, this$0, this$0);
	$TextComponent$AccessibleAWTTextComponent::init$(this$0);
}

$AccessibleStateSet* TextArea$AccessibleAWTTextArea::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $TextComponent$AccessibleAWTTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::MULTI_LINE);
	return states;
}

TextArea$AccessibleAWTTextArea::TextArea$AccessibleAWTTextArea() {
}

$Class* TextArea$AccessibleAWTTextArea::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/TextArea;", nullptr, $FINAL | $SYNTHETIC, $field(TextArea$AccessibleAWTTextArea, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextArea$AccessibleAWTTextArea, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/TextArea;)V", nullptr, $PROTECTED, $method(TextArea$AccessibleAWTTextArea, init$, void, $TextArea*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(TextArea$AccessibleAWTTextArea, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.TextArea$AccessibleAWTTextArea", "java.awt.TextArea", "AccessibleAWTTextArea", $PROTECTED},
		{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.TextArea$AccessibleAWTTextArea",
		"java.awt.TextComponent$AccessibleAWTTextComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.TextArea"
	};
	$loadClass(TextArea$AccessibleAWTTextArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextArea$AccessibleAWTTextArea));
	});
	return class$;
}

$Class* TextArea$AccessibleAWTTextArea::class$ = nullptr;

	} // awt
} // java