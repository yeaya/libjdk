#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;

namespace javax {
	namespace swing {

$String* DefaultListCellRenderer$UIResource::toString() {
	 return this->$DefaultListCellRenderer::toString();
}

int32_t DefaultListCellRenderer$UIResource::hashCode() {
	 return this->$DefaultListCellRenderer::hashCode();
}

bool DefaultListCellRenderer$UIResource::equals(Object$* arg0) {
	 return this->$DefaultListCellRenderer::equals(arg0);
}

$Object* DefaultListCellRenderer$UIResource::clone() {
	 return this->$DefaultListCellRenderer::clone();
}

void DefaultListCellRenderer$UIResource::finalize() {
	this->$DefaultListCellRenderer::finalize();
}

void DefaultListCellRenderer$UIResource::init$() {
	$DefaultListCellRenderer::init$();
}

DefaultListCellRenderer$UIResource::DefaultListCellRenderer$UIResource() {
}

$Class* DefaultListCellRenderer$UIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListCellRenderer$UIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultListCellRenderer$UIResource", "javax.swing.DefaultListCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.DefaultListCellRenderer$UIResource",
		"javax.swing.DefaultListCellRenderer",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.DefaultListCellRenderer"
	};
	$loadClass(DefaultListCellRenderer$UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultListCellRenderer$UIResource));
	});
	return class$;
}

$Class* DefaultListCellRenderer$UIResource::class$ = nullptr;

	} // swing
} // javax