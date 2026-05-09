#include <com/apple/laf/AquaComboBoxRenderer.h>
#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaComboBoxRenderer::toString() {
	return this->$AquaComboBoxRendererInternal::toString();
}

int32_t AquaComboBoxRenderer::hashCode() {
	return this->$AquaComboBoxRendererInternal::hashCode();
}

bool AquaComboBoxRenderer::equals(Object$* arg0) {
	return this->$AquaComboBoxRendererInternal::equals(arg0);
}

$Object* AquaComboBoxRenderer::clone() {
	return this->$AquaComboBoxRendererInternal::clone();
}

void AquaComboBoxRenderer::finalize() {
	this->$AquaComboBoxRendererInternal::finalize();
}

void AquaComboBoxRenderer::init$($JComboBox* comboBox) {
	$AquaComboBoxRendererInternal::init$(comboBox);
}

AquaComboBoxRenderer::AquaComboBoxRenderer() {
}

$Class* AquaComboBoxRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PUBLIC, $method(AquaComboBoxRenderer, init$, void, $JComboBox*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxRenderer",
		"com.apple.laf.AquaComboBoxRendererInternal",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaComboBoxRendererInternal<Ljava/lang/Object;>;Ljavax/swing/plaf/UIResource;"
	};
	$loadClass(AquaComboBoxRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxRenderer));
	});
	return class$;
}

$Class* AquaComboBoxRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com