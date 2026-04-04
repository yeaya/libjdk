#include <javax/swing/JSpinner$NumberEditorFormatter.h>
#include <java/lang/Comparable.h>
#include <java/text/NumberFormat.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/NumberFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormat = ::java::text::NumberFormat;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;

namespace javax {
	namespace swing {

void JSpinner$NumberEditorFormatter::init$($SpinnerNumberModel* model, $NumberFormat* format) {
	$NumberFormatter::init$(format);
	$set(this, model, model);
	setValueClass($$nc($nc(model)->getValue())->getClass());
}

void JSpinner$NumberEditorFormatter::setMinimum($Comparable* min) {
	$nc(this->model)->setMinimum(min);
}

$Comparable* JSpinner$NumberEditorFormatter::getMinimum() {
	return $nc(this->model)->getMinimum();
}

void JSpinner$NumberEditorFormatter::setMaximum($Comparable* max) {
	$nc(this->model)->setMaximum(max);
}

$Comparable* JSpinner$NumberEditorFormatter::getMaximum() {
	return $nc(this->model)->getMaximum();
}

JSpinner$NumberEditorFormatter::JSpinner$NumberEditorFormatter() {
}

$Class* JSpinner$NumberEditorFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"model", "Ljavax/swing/SpinnerNumberModel;", nullptr, $PRIVATE | $FINAL, $field(JSpinner$NumberEditorFormatter, model)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SpinnerNumberModel;Ljava/text/NumberFormat;)V", nullptr, 0, $method(JSpinner$NumberEditorFormatter, init$, void, $SpinnerNumberModel*, $NumberFormat*)},
		{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(JSpinner$NumberEditorFormatter, getMaximum, $Comparable*)},
		{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(JSpinner$NumberEditorFormatter, getMinimum, $Comparable*)},
		{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(JSpinner$NumberEditorFormatter, setMaximum, void, $Comparable*)},
		{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(JSpinner$NumberEditorFormatter, setMinimum, void, $Comparable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$NumberEditorFormatter", "javax.swing.JSpinner", "NumberEditorFormatter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSpinner$NumberEditorFormatter",
		"javax.swing.text.NumberFormatter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSpinner"
	};
	$loadClass(JSpinner$NumberEditorFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSpinner$NumberEditorFormatter));
	});
	return class$;
}

$Class* JSpinner$NumberEditorFormatter::class$ = nullptr;

	} // swing
} // javax