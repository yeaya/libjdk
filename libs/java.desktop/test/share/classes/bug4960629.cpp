#include <bug4960629.h>
#include <bug4960629$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $bug4960629$1 = ::bug4960629$1;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $View = ::javax::swing::text::View;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

void bug4960629::createAndShowGUI() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$UIManager::setLookAndFeel($($UIManager::getCrossPlatformLookAndFeelClassName()));
		$set(this, label, $new($JLabel, "<html><P>This is a test of the</P></html>"_s));
		$nc($System::out)->println($$str({"UIManager.getLookAndFeel()"_s, $$nc($UIManager::getLookAndFeel())->getClass()}));
		$set(this, f, $new($JFrame));
		$$nc(this->f->getContentPane())->add(this->label);
		$nc(this->f)->pack();
		$nc(this->f)->setVisible(true);
		test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (this->f != nullptr) {
			this->f->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug4960629::init$() {
	this->passed = false;
	$set(this, label, nullptr);
	$set(this, f, nullptr);
	$SwingUtilities::invokeAndWait($$new($bug4960629$1, this));
}

void bug4960629::test() {
	$useLocalObjectStack();
	$init($BasicHTML);
	$var($View, root, $$sure($View, $nc(this->label)->getClientProperty($BasicHTML::propertyKey))->getView(0));
	int32_t n = $nc(root)->getViewCount();
	$var($View, v, root->getView(n - 1));
	$var($AttributeSet, attrs, $nc(v)->getAttributes());
	$var($StyleSheet, ss, $$sure($HTMLDocument, v->getDocument())->getStyleSheet());
	$var($Font, font, $nc(ss)->getFont(attrs));
	$nc($System::out)->println($nc(font)->getSize());
	this->passed = (font->getSize() == 12);
	if (!this->passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void bug4960629::main($StringArray* args) {
	$new(bug4960629);
}

bug4960629::bug4960629() {
}

$Class* bug4960629::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $PRIVATE, $field(bug4960629, passed)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(bug4960629, label)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug4960629, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4960629, init$, void), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{"createAndShowGUI", "()V", nullptr, $PUBLIC, $virtualMethod(bug4960629, createAndShowGUI, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4960629, main, void, $StringArray*), "java.lang.Throwable"},
		{"test", "()V", nullptr, $PRIVATE, $method(bug4960629, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4960629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4960629",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4960629$1"
	};
	$loadClass(bug4960629, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4960629);
	});
	return class$;
}

$Class* bug4960629::class$ = nullptr;