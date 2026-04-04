#include <FontSetToNull.h>
#include <FontSetToNull$1.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
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
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef BOLD
#undef USERS_FONT

using $FontSetToNull$1 = ::FontSetToNull$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Font = ::java::awt::Font;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;

class FontSetToNull$$Lambda$lambda$main$0 : public $Runnable {
	$class(FontSetToNull$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FontSetToNull::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* FontSetToNull$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FontSetToNull$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(FontSetToNull$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FontSetToNull$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FontSetToNull$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontSetToNull$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontSetToNull$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* FontSetToNull$$Lambda$lambda$main$0::class$ = nullptr;

class FontSetToNull$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(FontSetToNull$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FontSetToNull::lambda$main$1();
	}
};
$Class* FontSetToNull$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontSetToNull$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FontSetToNull$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FontSetToNull$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FontSetToNull$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontSetToNull$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* FontSetToNull$$Lambda$lambda$main$1$1::class$ = nullptr;

$Font* FontSetToNull::USERS_FONT = nullptr;

void FontSetToNull::init$() {
}

void FontSetToNull::main($StringArray* args) {
	$init(FontSetToNull);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$SwingUtilities::invokeAndWait($$new(FontSetToNull$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(FontSetToNull$$Lambda$lambda$main$1$1));
		}
	}
}

void FontSetToNull::test($JSpinner* spinner) {
	$init(FontSetToNull);
	$useLocalObjectStack();
	$var($JSpinner$DefaultEditor, de, $cast($JSpinner$DefaultEditor, $nc(spinner)->getEditor()));
	spinner->setFont(nullptr);
	$SwingUtilities::updateComponentTreeUI(de);
	spinner->setFont(nullptr);
	$$nc($nc(de)->getTextField())->setFont(FontSetToNull::USERS_FONT);
	spinner->setFont(nullptr);
	$var($Font, tff, $$nc(de->getTextField())->getFont());
	if ($instanceOf($UIResource, tff) || !$nc(tff)->equals(FontSetToNull::USERS_FONT)) {
		$throwNew($RuntimeException, $$str({"Wrong font: "_s, tff}));
	}
	spinner->setEditor($($$new($JSpinner)->getEditor()));
}

void FontSetToNull::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetToNull);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
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

void FontSetToNull::lambda$main$1() {
	$init(FontSetToNull);
	$useLocalObjectStack();
	test($$new($JSpinner));
	test($$new($FontSetToNull$1));
}

void FontSetToNull::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetToNull);
	setLookAndFeel(laf);
}

void FontSetToNull::clinit$($Class* clazz) {
	$assignStatic(FontSetToNull::USERS_FONT, $new($Font, "dialog"_s, $Font::BOLD, 41));
}

FontSetToNull::FontSetToNull() {
}

$Class* FontSetToNull::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FontSetToNull$$Lambda$lambda$main$0")) {
			return FontSetToNull$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("FontSetToNull$$Lambda$lambda$main$1$1")) {
			return FontSetToNull$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"USERS_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontSetToNull, USERS_FONT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontSetToNull, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FontSetToNull, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FontSetToNull, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FontSetToNull, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FontSetToNull, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "(Ljavax/swing/JSpinner;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FontSetToNull, test, void, $JSpinner*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FontSetToNull$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"FontSetToNull",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FontSetToNull$1"
	};
	$loadClass(FontSetToNull, name, initialize, &classInfo$$, FontSetToNull::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FontSetToNull);
	});
	return class$;
}

$Class* FontSetToNull::class$ = nullptr;