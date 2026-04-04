#include <Test7195179$1$1.h>
#include <Test7195179$1.h>
#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <jcpp.h>

using $Test7195179$1 = ::Test7195179$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;

void Test7195179$1$1::init$($Test7195179$1* this$0) {
	$set(this, this$0, this$0);
	$set(this, renderer, $new($BasicComboBoxRenderer));
}

$Component* Test7195179$1$1::getListCellRendererComponent($JList* list, $Integer* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return $nc(this->renderer)->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
}

$Component* Test7195179$1$1::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($Integer, value), index, isSelected, cellHasFocus);
}

Test7195179$1$1::Test7195179$1$1() {
}

$Class* Test7195179$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest7195179$1;", nullptr, $FINAL | $SYNTHETIC, $field(Test7195179$1$1, this$0)},
		{"renderer", "Ljavax/swing/plaf/basic/BasicComboBoxRenderer;", nullptr, $PRIVATE | $FINAL, $field(Test7195179$1$1, renderer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest7195179$1;)V", nullptr, 0, $method(Test7195179$1$1, init$, void, $Test7195179$1*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Integer;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljava/lang/Integer;>;Ljava/lang/Integer;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(Test7195179$1$1, getListCellRendererComponent, $Component*, $JList*, $Integer*, int32_t, bool, bool)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Test7195179$1$1, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test7195179$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7195179$1", nullptr, nullptr, 0},
		{"Test7195179$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test7195179$1$1",
		"java.lang.Object",
		"javax.swing.ListCellRenderer",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/swing/ListCellRenderer<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7195179"
	};
	$loadClass(Test7195179$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7195179$1$1);
	});
	return class$;
}

$Class* Test7195179$1$1::class$ = nullptr;