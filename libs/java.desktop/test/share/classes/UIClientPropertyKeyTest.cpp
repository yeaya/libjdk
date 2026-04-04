#include <UIClientPropertyKeyTest.h>
#include <UIClientPropertyKeyTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIClientPropertyKeyTest$1 = ::UIClientPropertyKeyTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class UIClientPropertyKeyTest$$Lambda$testSetUI : public $Runnable {
	$class(UIClientPropertyKeyTest$$Lambda$testSetUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIClientPropertyKeyTest::testSetUI();
	}
};
$Class* UIClientPropertyKeyTest$$Lambda$testSetUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIClientPropertyKeyTest$$Lambda$testSetUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UIClientPropertyKeyTest$$Lambda$testSetUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"UIClientPropertyKeyTest$$Lambda$testSetUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIClientPropertyKeyTest$$Lambda$testSetUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIClientPropertyKeyTest$$Lambda$testSetUI);
	});
	return class$;
}
$Class* UIClientPropertyKeyTest$$Lambda$testSetUI::class$ = nullptr;

class UIClientPropertyKeyTest$$Lambda$testSerialization$1 : public $Runnable {
	$class(UIClientPropertyKeyTest$$Lambda$testSerialization$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIClientPropertyKeyTest::testSerialization();
	}
};
$Class* UIClientPropertyKeyTest$$Lambda$testSerialization$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIClientPropertyKeyTest$$Lambda$testSerialization$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UIClientPropertyKeyTest$$Lambda$testSerialization$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"UIClientPropertyKeyTest$$Lambda$testSerialization$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIClientPropertyKeyTest$$Lambda$testSerialization$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIClientPropertyKeyTest$$Lambda$testSerialization$1);
	});
	return class$;
}
$Class* UIClientPropertyKeyTest$$Lambda$testSerialization$1::class$ = nullptr;

$Object* UIClientPropertyKeyTest::key = nullptr;

void UIClientPropertyKeyTest::init$() {
}

void UIClientPropertyKeyTest::main($StringArray* args) {
	$init(UIClientPropertyKeyTest);
	$useLocalObjectStack();
	$EventQueue::invokeAndWait($$new(UIClientPropertyKeyTest$$Lambda$testSetUI));
	$EventQueue::invokeAndWait($$new(UIClientPropertyKeyTest$$Lambda$testSerialization$1));
}

void UIClientPropertyKeyTest::testSerialization() {
	$init(UIClientPropertyKeyTest);
	$var($JComponent, comp, $new($JButton));
	comp->putClientProperty("key1"_s, "value1"_s);
	comp->putClientProperty(UIClientPropertyKeyTest::key, "value2"_s);
	$assign(comp, serializeDeserialize(comp));
	validate(comp);
}

void UIClientPropertyKeyTest::testSetUI() {
	$init(UIClientPropertyKeyTest);
	$useLocalObjectStack();
	$var($JComponent, comp, $new($JButton));
	comp->putClientProperty("key1"_s, "value1"_s);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				comp->putClientProperty(UIClientPropertyKeyTest::key, "value2"_s);
				setLookAndFeel(laf);
				$SwingUtilities::updateComponentTreeUI(comp);
				validate(comp);
			}
		}
	}
}

void UIClientPropertyKeyTest::validate($JComponent* comp) {
	$init(UIClientPropertyKeyTest);
	$useLocalObjectStack();
	$var($Object, value, $nc(comp)->getClientProperty("key1"_s));
	if (!$nc(value)->equals("value1"_s)) {
		$throwNew($RuntimeException, $$str({"Incorrect value: "_s, value}));
	}
	$assign(value, comp->getClientProperty(UIClientPropertyKeyTest::key));
	if (value != nullptr) {
		$throwNew($RuntimeException, $$str({"Incorrect value: "_s, value}));
	}
}

void UIClientPropertyKeyTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(UIClientPropertyKeyTest);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

$JComponent* UIClientPropertyKeyTest::serializeDeserialize($JComponent* comp) {
	$init(UIClientPropertyKeyTest);
	$useLocalObjectStack();
	try {
		$var($ByteArrayOutputStream, byteOut, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, out, $new($ObjectOutputStream, byteOut));
		out->writeObject(comp);
		out->close();
		return $cast($JComponent, $$new($ObjectInputStream, $$new($ByteArrayInputStream, $(byteOut->toByteArray())))->readObject());
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

void UIClientPropertyKeyTest::clinit$($Class* clazz) {
	$assignStatic(UIClientPropertyKeyTest::key, $new($UIClientPropertyKeyTest$1));
}

UIClientPropertyKeyTest::UIClientPropertyKeyTest() {
}

$Class* UIClientPropertyKeyTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("UIClientPropertyKeyTest$$Lambda$testSetUI")) {
			return UIClientPropertyKeyTest$$Lambda$testSetUI::load$(name, initialize);
		}
		if (name->equals("UIClientPropertyKeyTest$$Lambda$testSerialization$1")) {
			return UIClientPropertyKeyTest$$Lambda$testSerialization$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(UIClientPropertyKeyTest, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIClientPropertyKeyTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIClientPropertyKeyTest, main, void, $StringArray*), "java.lang.Exception"},
		{"serializeDeserialize", "(Ljavax/swing/JComponent;)Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIClientPropertyKeyTest, serializeDeserialize, $JComponent*, $JComponent*)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIClientPropertyKeyTest, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"testSerialization", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIClientPropertyKeyTest, testSerialization, void)},
		{"testSetUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIClientPropertyKeyTest, testSetUI, void)},
		{"validate", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIClientPropertyKeyTest, validate, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UIClientPropertyKeyTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"UIClientPropertyKeyTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"UIClientPropertyKeyTest$1"
	};
	$loadClass(UIClientPropertyKeyTest, name, initialize, &classInfo$$, UIClientPropertyKeyTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UIClientPropertyKeyTest);
	});
	return class$;
}

$Class* UIClientPropertyKeyTest::class$ = nullptr;