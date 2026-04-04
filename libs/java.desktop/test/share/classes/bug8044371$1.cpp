#include <bug8044371$1.h>
#include <bug8044371.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $bug8044371 = ::bug8044371;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

void bug8044371$1::init$($bug8044371* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	{
		setPreferredSize($$new($Dimension, 1500, 1500));
	}
}

bug8044371$1::bug8044371$1() {
}

$Class* bug8044371$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8044371;", nullptr, $FINAL | $SYNTHETIC, $field(bug8044371$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8044371;)V", nullptr, 0, $method(bug8044371$1, init$, void, $bug8044371*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8044371",
		"<init>",
		"(Ljavax/swing/JFrame;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8044371$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8044371$1",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8044371"
	};
	$loadClass(bug8044371$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8044371$1));
	});
	return class$;
}

$Class* bug8044371$1::class$ = nullptr;