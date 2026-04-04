#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame$1.h>
#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;

void SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::init$($SilenceOfDeprecatedMenuBar$DeprecatedFrame* this$0) {
	$set(this, this$0, this$0);
	$JRootPane::init$();
}

$JMenuBar* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::getMenuBar() {
	$throwNew($RuntimeException, "Should not be here"_s);
	$shouldNotReachHere();
}

void SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::setMenuBar($JMenuBar* menu) {
	$throwNew($RuntimeException, "Should not be here"_s);
}

SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::SilenceOfDeprecatedMenuBar$DeprecatedFrame$1() {
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSilenceOfDeprecatedMenuBar$DeprecatedFrame;", nullptr, $FINAL | $SYNTHETIC, $field(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSilenceOfDeprecatedMenuBar$DeprecatedFrame;)V", nullptr, 0, $method(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, init$, void, $SilenceOfDeprecatedMenuBar$DeprecatedFrame*)},
		{"getMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC, $virtualMethod(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, getMenuBar, $JMenuBar*)},
		{"setMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, setMenuBar, void, $JMenuBar*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SilenceOfDeprecatedMenuBar$DeprecatedFrame",
		"createRootPane",
		"()Ljavax/swing/JRootPane;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
		{"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1",
		"javax.swing.JRootPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SilenceOfDeprecatedMenuBar"
	};
	$loadClass(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1));
	});
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::class$ = nullptr;