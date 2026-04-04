#include <javax/swing/ListCellRenderer.h>
#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$Class* ListCellRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+TE;>;TE;IZZ)Ljava/awt/Component;", $PUBLIC | $ABSTRACT, $virtualMethod(ListCellRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.ListCellRenderer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(ListCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListCellRenderer);
	});
	return class$;
}

$Class* ListCellRenderer::class$ = nullptr;

	} // swing
} // javax