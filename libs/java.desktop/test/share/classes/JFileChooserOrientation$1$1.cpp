#include <JFileChooserOrientation$1$1.h>
#include <JFileChooserOrientation$1.h>
#include <JFileChooserOrientation.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

#undef SEVERE

using $JFileChooserOrientation = ::JFileChooserOrientation;
using $JFileChooserOrientation$1 = ::JFileChooserOrientation$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;

void JFileChooserOrientation$1$1::init$($JFileChooserOrientation$1* this$0) {
	$set(this, this$0, this$0);
}

void JFileChooserOrientation$1$1::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$JFileChooserOrientation::showFileChooser();
	} catch ($Exception& ex) {
		$load($JFileChooserOrientation);
		$init($Level);
		$$nc($Logger::getLogger($($JFileChooserOrientation::class$->getName())))->log($Level::SEVERE, nullptr, ex);
	}
}

JFileChooserOrientation$1$1::JFileChooserOrientation$1$1() {
}

$Class* JFileChooserOrientation$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJFileChooserOrientation$1;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooserOrientation$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJFileChooserOrientation$1;)V", nullptr, 0, $method(JFileChooserOrientation$1$1, init$, void, $JFileChooserOrientation$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooserOrientation$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JFileChooserOrientation$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JFileChooserOrientation$1", nullptr, nullptr, 0},
		{"JFileChooserOrientation$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JFileChooserOrientation$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JFileChooserOrientation"
	};
	$loadClass(JFileChooserOrientation$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFileChooserOrientation$1$1);
	});
	return class$;
}

$Class* JFileChooserOrientation$1$1::class$ = nullptr;