#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

namespace javax {
	namespace swing {
		namespace table {

$String* DefaultTableCellRenderer$UIResource::toString() {
	 return this->$DefaultTableCellRenderer::toString();
}

int32_t DefaultTableCellRenderer$UIResource::hashCode() {
	 return this->$DefaultTableCellRenderer::hashCode();
}

bool DefaultTableCellRenderer$UIResource::equals(Object$* arg0) {
	 return this->$DefaultTableCellRenderer::equals(arg0);
}

$Object* DefaultTableCellRenderer$UIResource::clone() {
	 return this->$DefaultTableCellRenderer::clone();
}

void DefaultTableCellRenderer$UIResource::finalize() {
	this->$DefaultTableCellRenderer::finalize();
}

void DefaultTableCellRenderer$UIResource::init$() {
	$DefaultTableCellRenderer::init$();
}

DefaultTableCellRenderer$UIResource::DefaultTableCellRenderer$UIResource() {
}

$Class* DefaultTableCellRenderer$UIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultTableCellRenderer$UIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.table.DefaultTableCellRenderer$UIResource",
		"javax.swing.table.DefaultTableCellRenderer",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.table.DefaultTableCellRenderer"
	};
	$loadClass(DefaultTableCellRenderer$UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultTableCellRenderer$UIResource));
	});
	return class$;
}

$Class* DefaultTableCellRenderer$UIResource::class$ = nullptr;

		} // table
	} // swing
} // javax