#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>
#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame$1.h>
#include <SilenceOfDeprecatedMenuBar.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame$1 = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;

void SilenceOfDeprecatedMenuBar$DeprecatedFrame::init$() {
	$JFrame::init$();
}

$JRootPane* SilenceOfDeprecatedMenuBar$DeprecatedFrame::createRootPane() {
	return $new($SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, this);
}

SilenceOfDeprecatedMenuBar$DeprecatedFrame::SilenceOfDeprecatedMenuBar$DeprecatedFrame() {
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SilenceOfDeprecatedMenuBar$DeprecatedFrame, init$, void)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(SilenceOfDeprecatedMenuBar$DeprecatedFrame, createRootPane, $JRootPane*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
		{"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SilenceOfDeprecatedMenuBar$DeprecatedFrame",
		"javax.swing.JFrame",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SilenceOfDeprecatedMenuBar"
	};
	$loadClass(SilenceOfDeprecatedMenuBar$DeprecatedFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SilenceOfDeprecatedMenuBar$DeprecatedFrame));
	});
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame::class$ = nullptr;