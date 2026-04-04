#include <FontByDefault.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Font = ::java::awt::Font;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;

class FontByDefault$$Lambda$lambda$main$0 : public $Runnable {
	$class(FontByDefault$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FontByDefault::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* FontByDefault$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FontByDefault$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(FontByDefault$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FontByDefault$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FontByDefault$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontByDefault$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontByDefault$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* FontByDefault$$Lambda$lambda$main$0::class$ = nullptr;

void FontByDefault::init$() {
}

void FontByDefault::main($StringArray* args) {
	$init(FontByDefault);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$SwingUtilities::invokeAndWait($$new(FontByDefault$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(FontByDefault));
		}
	}
}

void FontByDefault::run() {
	$useLocalObjectStack();
	$var($JFrame, mainFrame, $new($JFrame));
	$var($Throwable, var$0, nullptr);
	try {
		testDefaultFont(mainFrame);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		mainFrame->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void FontByDefault::testDefaultFont($JFrame* frame) {
	$init(FontByDefault);
	$useLocalObjectStack();
	$nc(frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JSpinner, spinner, $new($JSpinner));
	frame->add(spinner);
	frame->setSize(300, 100);
	frame->setVisible(true);
	$var($JSpinner$DefaultEditor, editor, $cast($JSpinner$DefaultEditor, spinner->getEditor()));
	$var($Font, editorFont, $$nc($nc(editor)->getTextField())->getFont());
	if (!($instanceOf($UIResource, editorFont))) {
		$throwNew($RuntimeException, "Font must be UIResource"_s);
	}
	if (!$nc(editorFont)->equals($(spinner->getFont()))) {
		$throwNew($RuntimeException, "Wrong FONT"_s);
	}
}

void FontByDefault::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FontByDefault);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void FontByDefault::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FontByDefault);
	setLookAndFeel(laf);
}

FontByDefault::FontByDefault() {
}

$Class* FontByDefault::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FontByDefault$$Lambda$lambda$main$0")) {
			return FontByDefault$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontByDefault, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FontByDefault, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FontByDefault, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FontByDefault, run, void)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FontByDefault, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"testDefaultFont", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FontByDefault, testDefaultFont, void, $JFrame*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FontByDefault",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FontByDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontByDefault);
	});
	return class$;
}

$Class* FontByDefault::class$ = nullptr;