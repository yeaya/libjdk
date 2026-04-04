#include <javax/swing/JTable$NumberRenderer.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

#undef RIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

void JTable$NumberRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
	setHorizontalAlignment($JLabel::RIGHT);
}

JTable$NumberRenderer::JTable$NumberRenderer() {
}

$Class* JTable$NumberRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$NumberRenderer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$NumberRenderer", "javax.swing.JTable", "NumberRenderer", $STATIC},
		{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$NumberRenderer",
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
	$loadClass(JTable$NumberRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$NumberRenderer));
	});
	return class$;
}

$Class* JTable$NumberRenderer::class$ = nullptr;

	} // swing
} // javax