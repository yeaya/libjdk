#include <TestTransferHandler.h>
#include <TestTransferHandler$1.h>
#include <TestTransferHandler$UserJComponent.h>
#include <java/awt/Color.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

#undef TEST_COLOR

using $TestTransferHandler$1 = ::TestTransferHandler$1;
using $TestTransferHandler$UserJComponent = ::TestTransferHandler$UserJComponent;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;

class TestTransferHandler$$Lambda$testTransferHandler : public $Runnable {
	$class(TestTransferHandler$$Lambda$testTransferHandler, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTransferHandler::testTransferHandler();
	}
};
$Class* TestTransferHandler$$Lambda$testTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTransferHandler$$Lambda$testTransferHandler, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTransferHandler$$Lambda$testTransferHandler, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTransferHandler$$Lambda$testTransferHandler",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestTransferHandler$$Lambda$testTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTransferHandler$$Lambda$testTransferHandler);
	});
	return class$;
}
$Class* TestTransferHandler$$Lambda$testTransferHandler::class$ = nullptr;

void TestTransferHandler::init$() {
}

void TestTransferHandler::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestTransferHandler);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestTransferHandler$$Lambda$testTransferHandler));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestTransferHandler$$Lambda$testTransferHandler));
}

void TestTransferHandler::testTransferHandler() {
	$useLocalObjectStack();
	try {
		$var($TransferHandler, transferHandler, $new($TransferHandler, "userColor"_s));
		$var($TestTransferHandler$UserJComponent, comp, $new($TestTransferHandler$UserJComponent));
		$init($DataFlavor);
		$var($String, colorType, $str({$DataFlavor::javaJVMLocalObjectMimeType, ";class=java.awt.Color"_s}));
		$var($DataFlavor, colorFlavor, $new($DataFlavor, colorType));
		$var($Transferable, transferable, $new($TestTransferHandler$1, colorFlavor));
		transferHandler->importData(comp, transferable);
		if (!$nc($TestTransferHandler$UserJComponent::TEST_COLOR)->equals(comp->color)) {
			$throwNew($RuntimeException, "Wrong color!"_s);
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

TestTransferHandler::TestTransferHandler() {
}

$Class* TestTransferHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTransferHandler$$Lambda$testTransferHandler")) {
			return TestTransferHandler$$Lambda$testTransferHandler::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTransferHandler, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTransferHandler, main, void, $StringArray*), "java.lang.Exception"},
		{"testTransferHandler", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTransferHandler, testTransferHandler, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTransferHandler$UserJComponent", "TestTransferHandler", "UserJComponent", $PUBLIC | $STATIC},
		{"TestTransferHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTransferHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestTransferHandler$UserJComponent,TestTransferHandler$1"
	};
	$loadClass(TestTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTransferHandler);
	});
	return class$;
}

$Class* TestTransferHandler::class$ = nullptr;