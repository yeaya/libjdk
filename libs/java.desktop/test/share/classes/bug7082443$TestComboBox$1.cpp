#include <bug7082443$TestComboBox$1.h>
#include <bug7082443$TestComboBox.h>
#include <bug7082443.h>
#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <jcpp.h>

using $bug7082443$TestComboBox = ::bug7082443$TestComboBox;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

void bug7082443$TestComboBox$1::init$($bug7082443$TestComboBox* this$0) {
	$set(this, this$0, this$0);
}

$Component* bug7082443$TestComboBox$1::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return $$nc($bug7082443$TestComboBox::access$001(this->this$0))->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
}

bug7082443$TestComboBox$1::bug7082443$TestComboBox$1() {
}

$Class* bug7082443$TestComboBox$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7082443$TestComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(bug7082443$TestComboBox$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7082443$TestComboBox;)V", nullptr, 0, $method(bug7082443$TestComboBox$1, init$, void, $bug7082443$TestComboBox*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(bug7082443$TestComboBox$1, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7082443$TestComboBox",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7082443$TestComboBox", "bug7082443", "TestComboBox", $PRIVATE | $STATIC},
		{"bug7082443$TestComboBox$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7082443$TestComboBox$1",
		"java.lang.Object",
		"javax.swing.ListCellRenderer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7082443"
	};
	$loadClass(bug7082443$TestComboBox$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7082443$TestComboBox$1);
	});
	return class$;
}

$Class* bug7082443$TestComboBox$1::class$ = nullptr;