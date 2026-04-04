#include <javax/swing/JTable$IconRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

#undef CENTER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

void JTable$IconRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
	setHorizontalAlignment($JLabel::CENTER);
}

void JTable$IconRenderer::setValue(Object$* value) {
	setIcon(($instanceOf($Icon, value)) ? $cast($Icon, value) : ($Icon*)nullptr);
}

JTable$IconRenderer::JTable$IconRenderer() {
}

$Class* JTable$IconRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$IconRenderer, init$, void)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JTable$IconRenderer, setValue, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$IconRenderer", "javax.swing.JTable", "IconRenderer", $STATIC},
		{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$IconRenderer",
		"javax.swing.table.DefaultTableCellRenderer$UIResource",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$IconRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$IconRenderer));
	});
	return class$;
}

$Class* JTable$IconRenderer::class$ = nullptr;

	} // swing
} // javax