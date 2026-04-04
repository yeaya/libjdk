#include <UIDefaultKeySizeTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class UIDefaultKeySizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(UIDefaultKeySizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIDefaultKeySizeTest::lambda$main$0();
	}
};
$Class* UIDefaultKeySizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIDefaultKeySizeTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UIDefaultKeySizeTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"UIDefaultKeySizeTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIDefaultKeySizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaultKeySizeTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* UIDefaultKeySizeTest$$Lambda$lambda$main$0::class$ = nullptr;

class UIDefaultKeySizeTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIDefaultKeySizeTest::lambda$main$1();
	}
};
$Class* UIDefaultKeySizeTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"UIDefaultKeySizeTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* UIDefaultKeySizeTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2 : public $Runnable {
	$class(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIDefaultKeySizeTest::lambda$keySizeTest$2();
	}
};
$Class* UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2);
	});
	return class$;
}
$Class* UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2::class$ = nullptr;

$Enumeration* UIDefaultKeySizeTest::e = nullptr;
$Iterator* UIDefaultKeySizeTest::itr = nullptr;
bool UIDefaultKeySizeTest::defaultTestFail = false;
bool UIDefaultKeySizeTest::writeTestFail = false;

void UIDefaultKeySizeTest::init$() {
}

void UIDefaultKeySizeTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, nullptr);
	$assign(installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			try {
				$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
				$init(UIDefaultKeySizeTest);
				UIDefaultKeySizeTest::defaultTestFail = keySizeTest();
				$SwingUtilities::invokeAndWait($$new(UIDefaultKeySizeTest$$Lambda$lambda$main$0));
				UIDefaultKeySizeTest::writeTestFail = keySizeTest();
				if (UIDefaultKeySizeTest::defaultTestFail && UIDefaultKeySizeTest::writeTestFail) {
					$throwNew($RuntimeException, "Default key count and Write key count both are not same in keys() and keySet()"_s);
				} else if (UIDefaultKeySizeTest::defaultTestFail || UIDefaultKeySizeTest::writeTestFail) {
					if (UIDefaultKeySizeTest::defaultTestFail) {
						$throwNew($RuntimeException, "Default key count is not same in keys() and keySet()"_s);
					} else {
						$throwNew($RuntimeException, "Write key count is not same in keys() and keySet()"_s);
					}
				}
				$SwingUtilities::invokeAndWait($$new(UIDefaultKeySizeTest$$Lambda$lambda$main$1$1));
			} catch ($UnsupportedLookAndFeelException& e) {
				$nc($System::out)->println($$str({"    Note: LookAndFeel "_s, $($nc(LF)->getClassName()), " is not supported on this configuration"_s}));
			}
		}
	}
}

bool UIDefaultKeySizeTest::keySizeTest() {
	int32_t keysCount = 0;
	int32_t keySetCount = 0;
	$SwingUtilities::invokeAndWait($$new(UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2));
	$init(UIDefaultKeySizeTest);
	while ($nc(UIDefaultKeySizeTest::e)->hasMoreElements()) {
		++keysCount;
		UIDefaultKeySizeTest::e->nextElement();
	}
	while ($nc(UIDefaultKeySizeTest::itr)->hasNext()) {
		++keySetCount;
		UIDefaultKeySizeTest::itr->next();
	}
	return !(keysCount == keySetCount);
}

void UIDefaultKeySizeTest::lambda$keySizeTest$2() {
	$useLocalObjectStack();
	$init(UIDefaultKeySizeTest);
	$assignStatic(UIDefaultKeySizeTest::e, $$nc($UIManager::getDefaults())->keys());
	$assignStatic(UIDefaultKeySizeTest::itr, $$nc($$nc($UIManager::getDefaults())->keySet())->iterator());
}

void UIDefaultKeySizeTest::lambda$main$1() {
	$$nc($UIManager::getDefaults())->remove("TestKey"_s);
}

void UIDefaultKeySizeTest::lambda$main$0() {
	$$nc($UIManager::getDefaults())->put("TestKey"_s, "TestValue"_s);
}

UIDefaultKeySizeTest::UIDefaultKeySizeTest() {
}

$Class* UIDefaultKeySizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("UIDefaultKeySizeTest$$Lambda$lambda$main$0")) {
			return UIDefaultKeySizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("UIDefaultKeySizeTest$$Lambda$lambda$main$1$1")) {
			return UIDefaultKeySizeTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2")) {
			return UIDefaultKeySizeTest$$Lambda$lambda$keySizeTest$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Enumeration;", nullptr, $STATIC, $staticField(UIDefaultKeySizeTest, e)},
		{"itr", "Ljava/util/Iterator;", nullptr, $STATIC, $staticField(UIDefaultKeySizeTest, itr)},
		{"defaultTestFail", "Z", nullptr, $STATIC, $staticField(UIDefaultKeySizeTest, defaultTestFail)},
		{"writeTestFail", "Z", nullptr, $STATIC, $staticField(UIDefaultKeySizeTest, writeTestFail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIDefaultKeySizeTest, init$, void)},
		{"keySizeTest", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(UIDefaultKeySizeTest, keySizeTest, bool), "java.lang.Exception"},
		{"lambda$keySizeTest$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UIDefaultKeySizeTest, lambda$keySizeTest$2, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UIDefaultKeySizeTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UIDefaultKeySizeTest, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIDefaultKeySizeTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UIDefaultKeySizeTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UIDefaultKeySizeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaultKeySizeTest);
	});
	return class$;
}

$Class* UIDefaultKeySizeTest::class$ = nullptr;