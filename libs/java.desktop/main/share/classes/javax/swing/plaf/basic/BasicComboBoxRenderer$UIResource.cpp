#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicComboBoxRenderer$UIResource::toString() {
	return this->$BasicComboBoxRenderer::toString();
}

int32_t BasicComboBoxRenderer$UIResource::hashCode() {
	return this->$BasicComboBoxRenderer::hashCode();
}

bool BasicComboBoxRenderer$UIResource::equals(Object$* arg0) {
	return this->$BasicComboBoxRenderer::equals(arg0);
}

$Object* BasicComboBoxRenderer$UIResource::clone() {
	return this->$BasicComboBoxRenderer::clone();
}

void BasicComboBoxRenderer$UIResource::finalize() {
	this->$BasicComboBoxRenderer::finalize();
}

void BasicComboBoxRenderer$UIResource::init$() {
	$BasicComboBoxRenderer::init$();
}

BasicComboBoxRenderer$UIResource::BasicComboBoxRenderer$UIResource() {
}

$Class* BasicComboBoxRenderer$UIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicComboBoxRenderer$UIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource",
		"javax.swing.plaf.basic.BasicComboBoxRenderer",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboBoxRenderer"
	};
	$loadClass(BasicComboBoxRenderer$UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicComboBoxRenderer$UIResource));
	});
	return class$;
}

$Class* BasicComboBoxRenderer$UIResource::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax