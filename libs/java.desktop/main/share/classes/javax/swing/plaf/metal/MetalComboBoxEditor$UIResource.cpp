#include <javax/swing/plaf/metal/MetalComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

int32_t MetalComboBoxEditor$UIResource::hashCode() {
	return this->$MetalComboBoxEditor::hashCode();
}

bool MetalComboBoxEditor$UIResource::equals(Object$* arg0) {
	return this->$MetalComboBoxEditor::equals(arg0);
}

$Object* MetalComboBoxEditor$UIResource::clone() {
	return this->$MetalComboBoxEditor::clone();
}

$String* MetalComboBoxEditor$UIResource::toString() {
	return this->$MetalComboBoxEditor::toString();
}

void MetalComboBoxEditor$UIResource::finalize() {
	this->$MetalComboBoxEditor::finalize();
}

void MetalComboBoxEditor$UIResource::init$() {
	$MetalComboBoxEditor::init$();
}

MetalComboBoxEditor$UIResource::MetalComboBoxEditor$UIResource() {
}

$Class* MetalComboBoxEditor$UIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalComboBoxEditor$UIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource", "javax.swing.plaf.metal.MetalComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource",
		"javax.swing.plaf.metal.MetalComboBoxEditor",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxEditor"
	};
	$loadClass(MetalComboBoxEditor$UIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalComboBoxEditor$UIResource));
	});
	return class$;
}

$Class* MetalComboBoxEditor$UIResource::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax