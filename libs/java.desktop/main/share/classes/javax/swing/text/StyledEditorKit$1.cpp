#include <javax/swing/text/StyledEditorKit$1.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$1::init$($StyledEditorKit* this$0) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$();
}

$AttributeSet* StyledEditorKit$1::getResolveParent() {
	return (this->this$0->currentParagraph != nullptr) ? this->this$0->currentParagraph->getAttributes() : ($AttributeSet*)nullptr;
}

$Object* StyledEditorKit$1::clone() {
	return $of($new($SimpleAttributeSet, this));
}

StyledEditorKit$1::StyledEditorKit$1() {
}

$Class* StyledEditorKit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/StyledEditorKit;", nullptr, $FINAL | $SYNTHETIC, $field(StyledEditorKit$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/StyledEditorKit;)V", nullptr, 0, $method(StyledEditorKit$1, init$, void, $StyledEditorKit*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$1, clone, $Object*)},
		{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$1, getResolveParent, $AttributeSet*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.StyledEditorKit",
		"createInputAttributes",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.StyledEditorKit$1",
		"javax.swing.text.SimpleAttributeSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.StyledEditorKit"
	};
	$loadClass(StyledEditorKit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$1));
	});
	return class$;
}

$Class* StyledEditorKit$1::class$ = nullptr;

		} // text
	} // swing
} // javax