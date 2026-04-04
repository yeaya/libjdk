#include <SystemLookAndFeelTest.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;

void SystemLookAndFeelTest::init$() {
}

void SystemLookAndFeelTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, laf, $UIManager::getSystemLookAndFeelClassName());
	$var($String, os, $$nc($System::getProperty("os.name"_s))->toLowerCase());
	$nc($System::out)->println($$str({"OS is "_s, os}));
	$System::out->println($$str({"Reported System LAF is "_s, laf}));
	$var($String, expLAF, nullptr);
	if (os->contains("windows"_s)) {
		$assign(expLAF, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} else if (os->contains("macos"_s)) {
		$assign(expLAF, "com.apple.laf.AquaLookAndFeel"_s);
	} else if (os->contains("linux"_s)) {
		$var($String, gnome, $System::getenv("GNOME_DESKTOP_SESSION_ID"_s));
		$var($String, desktop, $System::getenv("XDG_CURRENT_DESKTOP"_s));
		$System::out->println($$str({"Gnome desktop session ID is "_s, gnome}));
		$System::out->println($$str({"XDG_CURRENT_DESKTOP is set to "_s, desktop}));
		if (gnome != nullptr || (desktop != nullptr && $(desktop->toLowerCase())->contains("gnome"_s))) {
			$assign(expLAF, "com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
		} else {
			$assign(expLAF, "javax.swing.plaf.metal.MetalLookAndFeel"_s);
		}
	}
	$System::out->println($$str({"Expected System LAF is "_s, expLAF}));
	if (expLAF == nullptr) {
		$System::out->println("No match for expected LAF, unknown OS ?"_s);
		return;
	}
	if (!($nc(laf)->equals(expLAF))) {
		$throwNew($RuntimeException, "LAF not as expected"_s);
	}
}

SystemLookAndFeelTest::SystemLookAndFeelTest() {
}

$Class* SystemLookAndFeelTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SystemLookAndFeelTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemLookAndFeelTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SystemLookAndFeelTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemLookAndFeelTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemLookAndFeelTest);
	});
	return class$;
}

$Class* SystemLookAndFeelTest::class$ = nullptr;