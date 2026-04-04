#include <SerializationTest.h>
#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JSpinner = ::javax::swing::JSpinner;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SerializationTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SerializationTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		SerializationTest::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* SerializationTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(SerializationTest$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(SerializationTest$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SerializationTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SerializationTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerializationTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializationTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SerializationTest$$Lambda$lambda$main$0::class$ = nullptr;

class SerializationTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SerializationTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SerializationTest::lambda$main$1();
	}
};
$Class* SerializationTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializationTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SerializationTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SerializationTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializationTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializationTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* SerializationTest$$Lambda$lambda$main$1$1::class$ = nullptr;

void SerializationTest::init$() {
}

void SerializationTest::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$EventQueue::invokeAndWait($$new(SerializationTest$$Lambda$lambda$main$0, laf));
			$EventQueue::invokeAndWait($$new(SerializationTest$$Lambda$lambda$main$1$1));
		}
	}
}

$Object* SerializationTest::createCopy($Serializable* objectToCopy) {
	$useLocalObjectStack();
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
		oos->writeObject(objectToCopy);
		$var($InputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
		$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
		return ois->readObject();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

void SerializationTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

void SerializationTest::lambda$main$1() {
	$useLocalObjectStack();
	$var($JSpinner, spinner, $new($JSpinner));
	$var($JSpinner, firstCopy, $cast($JSpinner, createCopy(spinner)));
	$var($JSpinner, secondCopy, $cast($JSpinner, createCopy(firstCopy)));
}

void SerializationTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

SerializationTest::SerializationTest() {
}

$Class* SerializationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SerializationTest$$Lambda$lambda$main$0")) {
			return SerializationTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("SerializationTest$$Lambda$lambda$main$1$1")) {
			return SerializationTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializationTest, init$, void)},
		{"createCopy", "(Ljava/io/Serializable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(SerializationTest, createCopy, $Object*, $Serializable*)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SerializationTest, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SerializationTest, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SerializationTest, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SerializationTest, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"SerializationTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializationTest);
	});
	return class$;
}

$Class* SerializationTest::class$ = nullptr;