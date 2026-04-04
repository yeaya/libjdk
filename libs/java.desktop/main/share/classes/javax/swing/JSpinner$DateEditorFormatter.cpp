#include <javax/swing/JSpinner$DateEditorFormatter.h>
#include <java/lang/Comparable.h>
#include <java/text/DateFormat.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/text/DateFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $DateFormatter = ::javax::swing::text::DateFormatter;

namespace javax {
	namespace swing {

void JSpinner$DateEditorFormatter::init$($SpinnerDateModel* model, $DateFormat* format) {
	$DateFormatter::init$(format);
	$set(this, model, model);
}

void JSpinner$DateEditorFormatter::setMinimum($Comparable* min) {
	$nc(this->model)->setStart(min);
}

$Comparable* JSpinner$DateEditorFormatter::getMinimum() {
	return $nc(this->model)->getStart();
}

void JSpinner$DateEditorFormatter::setMaximum($Comparable* max) {
	$nc(this->model)->setEnd(max);
}

$Comparable* JSpinner$DateEditorFormatter::getMaximum() {
	return $nc(this->model)->getEnd();
}

JSpinner$DateEditorFormatter::JSpinner$DateEditorFormatter() {
}

$Class* JSpinner$DateEditorFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"model", "Ljavax/swing/SpinnerDateModel;", nullptr, $PRIVATE | $FINAL, $field(JSpinner$DateEditorFormatter, model)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SpinnerDateModel;Ljava/text/DateFormat;)V", nullptr, 0, $method(JSpinner$DateEditorFormatter, init$, void, $SpinnerDateModel*, $DateFormat*)},
		{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC, $virtualMethod(JSpinner$DateEditorFormatter, getMaximum, $Comparable*)},
		{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC, $virtualMethod(JSpinner$DateEditorFormatter, getMinimum, $Comparable*)},
		{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(JSpinner$DateEditorFormatter, setMaximum, void, $Comparable*)},
		{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(JSpinner$DateEditorFormatter, setMinimum, void, $Comparable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$DateEditorFormatter", "javax.swing.JSpinner", "DateEditorFormatter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSpinner$DateEditorFormatter",
		"javax.swing.text.DateFormatter",
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
	$loadClass(JSpinner$DateEditorFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSpinner$DateEditorFormatter));
	});
	return class$;
}

$Class* JSpinner$DateEditorFormatter::class$ = nullptr;

	} // swing
} // javax