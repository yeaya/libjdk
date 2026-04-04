#include <javax/swing/JTable$DoubleRenderer.h>
#include <java/text/NumberFormat.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable$NumberRenderer.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormat = ::java::text::NumberFormat;
using $JTable$NumberRenderer = ::javax::swing::JTable$NumberRenderer;

namespace javax {
	namespace swing {

void JTable$DoubleRenderer::init$() {
	$JTable$NumberRenderer::init$();
}

void JTable$DoubleRenderer::setValue(Object$* value) {
	if (this->formatter == nullptr) {
		$set(this, formatter, $NumberFormat::getInstance());
	}
	setText((value == nullptr) ? ""_s : $($nc(this->formatter)->format(value)));
}

JTable$DoubleRenderer::JTable$DoubleRenderer() {
}

$Class* JTable$DoubleRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"formatter", "Ljava/text/NumberFormat;", nullptr, 0, $field(JTable$DoubleRenderer, formatter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$DoubleRenderer, init$, void)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JTable$DoubleRenderer, setValue, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$DoubleRenderer", "javax.swing.JTable", "DoubleRenderer", $STATIC},
		{"javax.swing.JTable$NumberRenderer", "javax.swing.JTable", "NumberRenderer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$DoubleRenderer",
		"javax.swing.JTable$NumberRenderer",
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
	$loadClass(JTable$DoubleRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$DoubleRenderer));
	});
	return class$;
}

$Class* JTable$DoubleRenderer::class$ = nullptr;

	} // swing
} // javax