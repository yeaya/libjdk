#include <TestProperties.h>
#include <java/lang/Error.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

$StringArray* TestProperties::windowsProperties = nullptr;
$StringArray* TestProperties::aquaProperties = nullptr;
$StringArray* TestProperties::gtkProperties = nullptr;
$StringArray* TestProperties::motifProperties = nullptr;
$StringArray* TestProperties::nimbusProperties = nullptr;
$StringArray* TestProperties::metalProperties = nullptr;

void TestProperties::init$() {
}

void TestProperties::main($StringArray* args) {
	$init(TestProperties);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	test(TestProperties::metalProperties);
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	test(TestProperties::nimbusProperties);
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s);
	test(TestProperties::motifProperties);
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
		test(TestProperties::windowsProperties);
	} catch ($Exception& e) {
	}
	try {
		$UIManager::setLookAndFeel("com.apple.laf.AquaLookAndFeel"_s);
		test(TestProperties::aquaProperties);
	} catch ($Exception& e) {
	}
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
		test(TestProperties::gtkProperties);
	} catch ($Exception& e) {
	}
}

void TestProperties::test($StringArray* properties) {
	$init(TestProperties);
	$useLocalObjectStack();
	$var($StringArray, arr$, properties);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, name, arr$->get(i$));
		{
			$var($String, value, $UIManager::getString(name));
			if (value == nullptr) {
				$nc($System::err)->println($$str({"Current LookAndFeel = "_s, $($$nc($UIManager::getLookAndFeel())->getDescription())}));
				$System::err->printf("The value for %s property is null\n"_s, $$new($ObjectArray, {name}));
				$throwNew($Error);
			}
		}
	}
}

void TestProperties::clinit$($Class* clazz) {
	$assignStatic(TestProperties::windowsProperties, $new($StringArray, {
		"FileChooser.viewMenuButtonToolTipText"_s,
		"FileChooser.viewMenuButtonAccessibleName"_s
	}));
	$assignStatic(TestProperties::aquaProperties, $new($StringArray, {"FileChooser.mac.newFolder"_s}));
	$assignStatic(TestProperties::gtkProperties, $new($StringArray, {"FileChooser.renameFileDialogText"_s}));
	$assignStatic(TestProperties::motifProperties, $new($StringArray, {"FileChooser.enterFolderNameLabel.textAndMnemonic"_s}));
	$assignStatic(TestProperties::nimbusProperties, $new($StringArray, {"FileChooser.refreshActionLabelText"_s}));
	$assignStatic(TestProperties::metalProperties, $new($StringArray, {"MetalTitlePane.iconify.titleAndMnemonic"_s}));
}

TestProperties::TestProperties() {
}

$Class* TestProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"windowsProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, windowsProperties)},
		{"aquaProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, aquaProperties)},
		{"gtkProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, gtkProperties)},
		{"motifProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, motifProperties)},
		{"nimbusProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, nimbusProperties)},
		{"metalProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, metalProperties)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestProperties, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestProperties, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestProperties, test, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"TestProperties",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestProperties, name, initialize, &classInfo$$, TestProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestProperties);
	});
	return class$;
}

$Class* TestProperties::class$ = nullptr;