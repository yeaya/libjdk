#include <sun/swing/text/TextComponentPrintable$1.h>
#include <java/awt/Component.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JEditorPane.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

#undef HEIGHT
#undef WIDTH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JEditorPane = ::javax::swing::JEditorPane;

namespace sun {
	namespace swing {
		namespace text {

void TextComponentPrintable$1::init$($JEditorPane* val$editor) {
	$set(this, val$editor, val$editor);
}

void TextComponentPrintable$1::run() {
	int32_t WIDTH = 500;
	int32_t HEIGHT = 500;
	$var($CellRendererPane, rendererPane, $new($CellRendererPane));
	rendererPane->add(this->val$editor);
	rendererPane->setSize(WIDTH, HEIGHT);
}

TextComponentPrintable$1::TextComponentPrintable$1() {
}

$Class* TextComponentPrintable$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$editor", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$1, val$editor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;)V", "()V", 0, $method(TextComponentPrintable$1, init$, void, $JEditorPane*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"createFrames",
		"(Ljavax/swing/JEditorPane;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.text.TextComponentPrintable"
	};
	$loadClass(TextComponentPrintable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextComponentPrintable$1);
	});
	return class$;
}

$Class* TextComponentPrintable$1::class$ = nullptr;

		} // text
	} // swing
} // sun