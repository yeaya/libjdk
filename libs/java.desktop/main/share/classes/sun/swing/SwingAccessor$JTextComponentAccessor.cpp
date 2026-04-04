#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>
#include <java/awt/Point.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace sun {
	namespace swing {

$Class* SwingAccessor$JTextComponentAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dropLocationForPoint", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$JTextComponentAccessor, dropLocationForPoint, $TransferHandler$DropLocation*, $JTextComponent*, $Point*)},
		{"setDropLocation", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$JTextComponentAccessor, setDropLocation, $Object*, $JTextComponent*, $TransferHandler$DropLocation*, Object$*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$JTextComponentAccessor", "sun.swing.SwingAccessor", "JTextComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$JTextComponentAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.SwingAccessor"
	};
	$loadClass(SwingAccessor$JTextComponentAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$JTextComponentAccessor);
	});
	return class$;
}

$Class* SwingAccessor$JTextComponentAccessor::class$ = nullptr;

	} // swing
} // sun