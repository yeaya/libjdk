#include <bug7030332.h>
#include <bug7030332$1.h>
#include <bug7030332$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/net/URL.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef HTML_SAMPLES
#undef LEFT

using $bug7030332$1 = ::bug7030332$1;
using $bug7030332$2 = ::bug7030332$2;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JApplet = ::javax::swing::JApplet;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$StringArray* bug7030332::HTML_SAMPLES = nullptr;

void bug7030332::init$() {
	$JApplet::init$();
}

void bug7030332::main($StringArray* args) {
	$init(bug7030332);
	$SwingUtilities::invokeLater($$new($bug7030332$1));
}

void bug7030332::init() {
	try {
		$SwingUtilities::invokeAndWait($$new($bug7030332$2, this));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

$Container* bug7030332::createContentPane() {
	$init(bug7030332);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($JPanel, result, $new($JPanel, $$new($GridLayout, bug7030332::HTML_SAMPLES->length + 1, 3, 10, 10)));
	result->add($$new($JLabel, "Html code"_s));
	result->add($$new($JLabel, "Golden image"_s));
	result->add($$new($JLabel, "JEditorPane"_s));
	for (int32_t i = 0; i < bug7030332::HTML_SAMPLES->length; ++i) {
		$var($String, htmlSample, bug7030332::HTML_SAMPLES->get(i));
		$var($JTextArea, textArea, $new($JTextArea, htmlSample));
		textArea->setLineWrap(true);
		result->add(textArea);
		$var($String, imageName, $str({"sample"_s, $$str(i), ".png"_s}));
		$var($URL, resource, bug7030332::class$->getResource(imageName));
		result->add(resource == nullptr ? $$new($JLabel, $$str({imageName, " not found"_s})) : $$new($JLabel, $$new($ImageIcon, resource), $SwingConstants::LEFT));
		result->add($$new($JEditorPane, "text/html"_s, htmlSample));
	}
	return result;
}

void bug7030332::clinit$($Class* clazz) {
	$assignStatic(bug7030332::HTML_SAMPLES, $new($StringArray, {
		"<table border><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"1\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"2\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s
	}));
}

bug7030332::bug7030332() {
}

$Class* bug7030332::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HTML_SAMPLES", "[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug7030332, HTML_SAMPLES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7030332, init$, void)},
		{"createContentPane", "()Ljava/awt/Container;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7030332, createContentPane, $Container*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug7030332, init, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7030332, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7030332$2", nullptr, nullptr, 0},
		{"bug7030332$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7030332",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7030332$2,bug7030332$1"
	};
	$loadClass(bug7030332, name, initialize, &classInfo$$, bug7030332::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7030332));
	});
	return class$;
}

$Class* bug7030332::class$ = nullptr;