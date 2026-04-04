#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer$TreeLeafIcon.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef LEAF_ICON
#undef LEAF_SIZE

using $MotifTreeCellRenderer$TreeLeafIcon = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer$TreeLeafIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$Icon* MotifTreeCellRenderer::LEAF_ICON = nullptr;

void MotifTreeCellRenderer::init$() {
	$DefaultTreeCellRenderer::init$();
}

$Icon* MotifTreeCellRenderer::loadLeafIcon() {
	$init(MotifTreeCellRenderer);
	return MotifTreeCellRenderer::LEAF_ICON;
}

void MotifTreeCellRenderer::clinit$($Class* clazz) {
	$assignStatic(MotifTreeCellRenderer::LEAF_ICON, $new($IconUIResource, $$new($MotifTreeCellRenderer$TreeLeafIcon)));
}

MotifTreeCellRenderer::MotifTreeCellRenderer() {
}

$Class* MotifTreeCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LEAF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeCellRenderer, LEAF_SIZE)},
		{"LEAF_ICON", "Ljavax/swing/Icon;", nullptr, $STATIC | $FINAL, $staticField(MotifTreeCellRenderer, LEAF_ICON)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifTreeCellRenderer, init$, void)},
		{"loadLeafIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifTreeCellRenderer, loadLeafIcon, $Icon*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon", "com.sun.java.swing.plaf.motif.MotifTreeCellRenderer", "TreeLeafIcon", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer",
		"javax.swing.tree.DefaultTreeCellRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon"
	};
	$loadClass(MotifTreeCellRenderer, name, initialize, &classInfo$$, MotifTreeCellRenderer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifTreeCellRenderer));
	});
	return class$;
}

$Class* MotifTreeCellRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com