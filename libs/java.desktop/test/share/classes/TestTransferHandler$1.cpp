#include <TestTransferHandler$1.h>
#include <TestTransferHandler$UserJComponent.h>
#include <TestTransferHandler.h>
#include <java/awt/Color.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <jcpp.h>

#undef TEST_COLOR

using $TestTransferHandler$UserJComponent = ::TestTransferHandler$UserJComponent;
using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestTransferHandler$1::init$($DataFlavor* val$colorFlavor) {
	$set(this, val$colorFlavor, val$colorFlavor);
}

$DataFlavorArray* TestTransferHandler$1::getTransferDataFlavors() {
	return $new($DataFlavorArray, {this->val$colorFlavor});
}

bool TestTransferHandler$1::isDataFlavorSupported($DataFlavor* flavor) {
	return true;
}

$Object* TestTransferHandler$1::getTransferData($DataFlavor* flavor) {
	$init($TestTransferHandler$UserJComponent);
	return $of($TestTransferHandler$UserJComponent::TEST_COLOR);
}

TestTransferHandler$1::TestTransferHandler$1() {
}

$Class* TestTransferHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$colorFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $FINAL | $SYNTHETIC, $field(TestTransferHandler$1, val$colorFlavor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/datatransfer/DataFlavor;)V", "()V", 0, $method(TestTransferHandler$1, init$, void, $DataFlavor*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestTransferHandler$1, getTransferData, $Object*, $DataFlavor*)},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(TestTransferHandler$1, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(TestTransferHandler$1, isDataFlavorSupported, bool, $DataFlavor*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestTransferHandler",
		"testTransferHandler",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTransferHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestTransferHandler$1",
		"java.lang.Object",
		"java.awt.datatransfer.Transferable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestTransferHandler"
	};
	$loadClass(TestTransferHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTransferHandler$1);
	});
	return class$;
}

$Class* TestTransferHandler$1::class$ = nullptr;