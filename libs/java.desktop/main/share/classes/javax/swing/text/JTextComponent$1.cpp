#include <javax/swing/text/JTextComponent$1.h>
#include <java/awt/Point.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$1::init$() {
}

$TransferHandler$DropLocation* JTextComponent$1::dropLocationForPoint($JTextComponent* textComp, $Point* p) {
	return $nc(textComp)->dropLocationForPoint(p);
}

$Object* JTextComponent$1::setDropLocation($JTextComponent* textComp, $TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	return $nc(textComp)->setDropLocation(location, state, forDrop);
}

JTextComponent$1::JTextComponent$1() {
}

$Class* JTextComponent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextComponent$1, init$, void)},
		{"dropLocationForPoint", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$1, dropLocationForPoint, $TransferHandler$DropLocation*, $JTextComponent*, $Point*)},
		{"setDropLocation", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$1, setDropLocation, $Object*, $JTextComponent*, $TransferHandler$DropLocation*, Object$*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$JTextComponentAccessor", "sun.swing.SwingAccessor", "JTextComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$JTextComponentAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$1);
	});
	return class$;
}

$Class* JTextComponent$1::class$ = nullptr;

		} // text
	} // swing
} // javax