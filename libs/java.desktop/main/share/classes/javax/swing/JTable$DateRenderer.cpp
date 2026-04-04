#include <javax/swing/JTable$DateRenderer.h>
#include <java/text/DateFormat.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

void JTable$DateRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
}

void JTable$DateRenderer::setValue(Object$* value) {
	if (this->formatter == nullptr) {
		$set(this, formatter, $DateFormat::getDateInstance());
	}
	setText((value == nullptr) ? ""_s : $($nc(this->formatter)->format(value)));
}

JTable$DateRenderer::JTable$DateRenderer() {
}

$Class* JTable$DateRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"formatter", "Ljava/text/DateFormat;", nullptr, 0, $field(JTable$DateRenderer, formatter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$DateRenderer, init$, void)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JTable$DateRenderer, setValue, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$DateRenderer", "javax.swing.JTable", "DateRenderer", $STATIC},
		{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$DateRenderer",
		"javax.swing.table.DefaultTableCellRenderer$UIResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$DateRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$DateRenderer));
	});
	return class$;
}

$Class* JTable$DateRenderer::class$ = nullptr;

	} // swing
} // javax