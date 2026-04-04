#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

#undef HORIZONTAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSeparator = ::javax::swing::JSeparator;

namespace javax {
	namespace swing {

void JPopupMenu$Separator::init$() {
	$JSeparator::init$($JSeparator::HORIZONTAL);
}

$String* JPopupMenu$Separator::getUIClassID() {
	return "PopupMenuSeparatorUI"_s;
}

JPopupMenu$Separator::JPopupMenu$Separator() {
}

$Class* JPopupMenu$Separator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPopupMenu$Separator, init$, void)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JPopupMenu$Separator, getUIClassID, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JPopupMenu$Separator", "javax.swing.JPopupMenu", "Separator", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JPopupMenu$Separator",
		"javax.swing.JSeparator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JPopupMenu"
	};
	$loadClass(JPopupMenu$Separator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPopupMenu$Separator));
	});
	return class$;
}

$Class* JPopupMenu$Separator::class$ = nullptr;

	} // swing
} // javax