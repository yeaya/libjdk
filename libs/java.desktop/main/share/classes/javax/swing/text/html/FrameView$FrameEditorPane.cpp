#include <javax/swing/text/html/FrameView$FrameEditorPane.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/FrameView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $EditorKit = ::javax::swing::text::EditorKit;
using $FrameView = ::javax::swing::text::html::FrameView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$String* FrameView$FrameEditorPane::toString() {
	 return this->$JEditorPane::toString();
}

int32_t FrameView$FrameEditorPane::hashCode() {
	 return this->$JEditorPane::hashCode();
}

bool FrameView$FrameEditorPane::equals(Object$* arg0) {
	 return this->$JEditorPane::equals(arg0);
}

$Object* FrameView$FrameEditorPane::clone() {
	 return this->$JEditorPane::clone();
}

void FrameView$FrameEditorPane::finalize() {
	this->$JEditorPane::finalize();
}

void FrameView$FrameEditorPane::init$($FrameView* this$0) {
	$set(this, this$0, this$0);
	$JEditorPane::init$();
}

$EditorKit* FrameView$FrameEditorPane::getEditorKitForContentType($String* type) {
	$useLocalObjectStack();
	$var($EditorKit, editorKit, $JEditorPane::getEditorKitForContentType(type));
	$var($JEditorPane, outerMostJEditorPane, nullptr);
	if (($assign(outerMostJEditorPane, this->this$0->getOutermostJEditorPane())) != nullptr) {
		$var($EditorKit, inheritedEditorKit, $nc(outerMostJEditorPane)->getEditorKitForContentType(type));
		if (!$nc($of(editorKit))->getClass()->equals($nc($of(inheritedEditorKit))->getClass())) {
			$assign(editorKit, $cast($EditorKit, inheritedEditorKit->clone()));
			setEditorKitForContentType(type, editorKit);
		}
	}
	return editorKit;
}

$FrameView* FrameView$FrameEditorPane::getFrameView() {
	return this->this$0;
}

FrameView$FrameEditorPane::FrameView$FrameEditorPane() {
}

$Class* FrameView$FrameEditorPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/FrameView;", nullptr, $FINAL | $SYNTHETIC, $field(FrameView$FrameEditorPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/html/FrameView;)V", nullptr, 0, $method(FrameView$FrameEditorPane, init$, void, $FrameView*)},
		{"getEditorKitForContentType", "(Ljava/lang/String;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC, $virtualMethod(FrameView$FrameEditorPane, getEditorKitForContentType, $EditorKit*, $String*)},
		{"getFrameView", "()Ljavax/swing/text/html/FrameView;", nullptr, 0, $virtualMethod(FrameView$FrameEditorPane, getFrameView, $FrameView*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FrameView$FrameEditorPane", "javax.swing.text.html.FrameView", "FrameEditorPane", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.FrameView$FrameEditorPane",
		"javax.swing.JEditorPane",
		"sun.swing.text.html.FrameEditorPaneTag",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.FrameView"
	};
	$loadClass(FrameView$FrameEditorPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FrameView$FrameEditorPane));
	});
	return class$;
}

$Class* FrameView$FrameEditorPane::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax