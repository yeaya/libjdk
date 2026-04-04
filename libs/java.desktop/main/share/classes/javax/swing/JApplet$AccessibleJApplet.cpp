#include <javax/swing/JApplet$AccessibleJApplet.h>
#include <java/applet/Applet$AccessibleApplet.h>
#include <javax/swing/JApplet.h>
#include <jcpp.h>

using $Applet$AccessibleApplet = ::java::applet::Applet$AccessibleApplet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;

namespace javax {
	namespace swing {

void JApplet$AccessibleJApplet::init$($JApplet* this$0) {
	$set(this, this$0, this$0);
	$Applet$AccessibleApplet::init$(this$0);
}

JApplet$AccessibleJApplet::JApplet$AccessibleJApplet() {
}

$Class* JApplet$AccessibleJApplet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JApplet;", nullptr, $FINAL | $SYNTHETIC, $field(JApplet$AccessibleJApplet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JApplet;)V", nullptr, $PROTECTED, $method(JApplet$AccessibleJApplet, init$, void, $JApplet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JApplet$AccessibleJApplet", "javax.swing.JApplet", "AccessibleJApplet", $PROTECTED},
		{"java.applet.Applet$AccessibleApplet", "java.applet.Applet", "AccessibleApplet", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JApplet$AccessibleJApplet",
		"java.applet.Applet$AccessibleApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JApplet"
	};
	$loadClass(JApplet$AccessibleJApplet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JApplet$AccessibleJApplet));
	});
	return class$;
}

$Class* JApplet$AccessibleJApplet::class$ = nullptr;

	} // swing
} // javax